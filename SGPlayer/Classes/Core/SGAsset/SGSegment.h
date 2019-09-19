//
//  SGSegment.h
//  SGPlayer
//
//  Created by Single on 2018/11/14.
//  Copyright © 2018 single. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreMedia/CoreMedia.h>

@interface SGSegment : NSObject <NSCopying>

/**
 *
 */
+ (instancetype)segmentWithDuration:(CMTime)duration;

/**
 *
 */
+ (instancetype)segmentWithURL:(NSURL *)URL index:(NSInteger)index;

/**
 *
 */
+ (instancetype)segmentWithURL:(NSURL *)URL index:(NSInteger)index timeRange:(CMTimeRange)timeRange scale:(CMTime)scale;

@end
