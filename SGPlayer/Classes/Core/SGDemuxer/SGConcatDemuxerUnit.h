//
//  SGConcatDemuxerUnit.h
//  SGPlayer
//
//  Created by Single on 2018/11/14.
//  Copyright © 2018 single. All rights reserved.
//

#import "SGDemuxable.h"
#import "SGSegment.h"

@interface SGConcatDemuxerUnit : NSObject <SGDemuxable>

- (instancetype)initWithSegment:(SGSegment *)segment;

@end
