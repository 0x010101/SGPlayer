//
//  SGVideoDecoder.m
//  SGPlayer iOS
//
//  Created by Single on 2018/8/16.
//  Copyright © 2018 single. All rights reserved.
//

#import "SGVideoDecoder.h"
#import "SGCodecContext.h"
#import "SGVideoFFFrame.h"

@interface SGVideoDecoder ()

@property (nonatomic, strong) SGCodecContext * codecContext;

@end

@implementation SGVideoDecoder

- (void)doSetup
{
    self.codecContext = [[SGCodecContext alloc] init];
    self.codecContext.timebase = self.timebase;
    self.codecContext.codecpar = self.codecpar;
    self.codecContext.frameClass = [SGVideoFFFrame class];
    [self.codecContext open];
}

- (void)doDestory
{
    [self.codecContext close];
    self.codecContext = nil;
}

- (void)doFlush
{
    [self.codecContext flush];
}

- (NSArray <SGFrame *> *)doDecode:(SGPacket *)packet
{
    return [self.codecContext doDecode:packet];
}

@end
