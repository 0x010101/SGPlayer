//
//  SGVideoDecoder.m
//  SGPlayer iOS
//
//  Created by Single on 2018/8/16.
//  Copyright © 2018 single. All rights reserved.
//

#import "SGVideoDecoder.h"
#import "SGCodecContext.h"
#import "SGVideoFrame.h"
#import "SGMapping.h"

@interface SGVideoDecoder ()

@property (nonatomic, strong) SGCodecContext * codecContext;
@property (nonatomic, strong) SGStream * stream;

@end

@implementation SGVideoDecoder

- (void)setup
{
    self.codecContext = [[SGCodecContext alloc] initWithStream:self.stream frameClass:[SGVideoFrame class]];
    [self.codecContext open];
}

- (void)destory
{
    [self.codecContext close];
    self.codecContext = nil;
}

- (NSArray <__kindof SGFrame *> *)decode:(SGPacket *)packet
{
    if (packet && packet.stream != self.stream)
    {
        self.stream = packet.stream;
        [self destory];
        [self setup];
    }
    return [self.codecContext decode:packet];
}

- (void)flush
{
    [self.codecContext flush];
}

@end
