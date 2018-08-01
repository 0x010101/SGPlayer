//
//  SGFrame.m
//  SGPlayer
//
//  Created by Single on 2018/6/26.
//  Copyright © 2018 single. All rights reserved.
//

#import "SGFrame.h"

@interface SGFrame ()

SGObjectPoolItemInterface

@end

@implementation SGFrame

SGObjectPoolItemImplementation

- (SGMediaType)mediaType
{
    return SGMediaTypeUnknown;
}

- (void)clear
{
    self.position = kCMTimeZero;
    self.duration = kCMTimeZero;
    self.size = 0;
}

@end
