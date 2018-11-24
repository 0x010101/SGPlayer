//
//  SGConcatDemuxer.h
//  SGPlayer
//
//  Created by Single on 2018/11/14.
//  Copyright © 2018 single. All rights reserved.
//

#import "SGDemuxable.h"
#import "SGSegment.h"

@interface SGConcatDemuxer : NSObject <SGDemuxable>

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithTrack:(SGTrack *)track segments:(NSArray<SGSegment *> *)segments;

@end
