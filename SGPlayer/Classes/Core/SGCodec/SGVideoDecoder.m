//
//  SGVideoDecoder.m
//  SGPlayer iOS
//
//  Created by Single on 2018/8/16.
//  Copyright © 2018 single. All rights reserved.
//

#import "SGVideoDecoder.h"
#import "SGCodecContext.h"
#import "SGVideoToolBox.h"
#import "SGVideoFFFrame.h"

@interface SGVideoDecoder ()

@property (nonatomic, strong) SGCodecContext * codecContext;
@property (nonatomic, strong) SGVideoToolBox * videoToolBox;

@end

@implementation SGVideoDecoder

- (instancetype)init
{
    if (self = [super init])
    {
        self.hardwareDecodeH264 = YES;
    }
    return self;
}

- (void)doSetup
{
    if (self.hardwareDecodeH264 && self.codecpar->codec_id == AV_CODEC_ID_H264)
    {
        SGVideoToolBox * videoToolBox = [[SGVideoToolBox alloc] init];
        videoToolBox.timebase = self.timebase;
        videoToolBox.codecpar = self.codecpar;
        if ([videoToolBox open])
        {
            self.videoToolBox = videoToolBox;
        }
    }
    if (!self.videoToolBox)
    {
        self.codecContext = [[SGCodecContext alloc] init];
        self.codecContext.timebase = self.timebase;
        self.codecContext.codecpar = self.codecpar;
        self.codecContext.frameClass = [SGVideoFFFrame class];
        [self.codecContext open];
    }
}

- (void)doDestory
{
    [self.codecContext close];
    self.codecContext = nil;
    [self.videoToolBox close];
    self.videoToolBox = nil;
}

- (void)doFlush
{
    [self.codecContext flush];
    [self.videoToolBox flush];
}

- (NSArray <SGFrame *> *)doDecode:(SGPacket *)packet
{
    if (self.videoToolBox)
    {
        return [self.videoToolBox doDecode:packet];
    }
    return [self.codecContext doDecode:packet];
}

@end
