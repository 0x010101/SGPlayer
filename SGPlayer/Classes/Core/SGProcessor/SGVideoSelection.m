//
//  SGVideoSelection.m
//  SGPlayer
//
//  Created by Single on 2019/5/30.
//  Copyright © 2019 single. All rights reserved.
//

#import "SGVideoSelection.h"

@implementation SGVideoSelection

- (id)copyWithZone:(NSZone *)zone
{
    SGVideoSelection *obj = [[SGVideoSelection alloc] init];
    obj.tracks = self->_tracks;
    return obj;
}

@end
