//
//  SGFFFrame.m
//  SGPlayer
//
//  Created by Single on 2018/6/26.
//  Copyright © 2018 single. All rights reserved.
//

#import "SGFFFrame.h"

@interface SGFFFrame ()

SGFFObjectPoolItemInterface

@end

@implementation SGFFFrame

SGFFObjectPoolItemImplementation

- (SGMediaType)mediaType
{
    return SGMediaTypeUnknown;
}

- (void)fillWithTimebase:(CMTime)timebase
{
    [self fillWithTimebase:timebase packet:NULL];
}

- (void)fillWithTimebase:(CMTime)timebase packet:(SGFFPacket *)packet
{
    
}

- (void)clear
{
    self.position = kCMTimeZero;
    self.duration = kCMTimeZero;
    self.size = 0;
}

@end
