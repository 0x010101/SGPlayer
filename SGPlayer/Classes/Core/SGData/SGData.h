//
//  SGDemuxable.h
//  SGPlayer iOS
//
//  Created by Single on 2018/9/25.
//  Copyright © 2018 single. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreMedia/CoreMedia.h>

NS_ASSUME_NONNULL_BEGIN

@protocol SGData <NSObject>

/**
 *
 */
- (void)lock;

/**
 *
 */
- (void)unlock;

/**
 *
 */
- (void)clear;

/**
 *
 */
- (CMTime)duration;

/**
 *
 */
- (CMTime)timeStamp;

/**
 *
 */
- (int)size;

@end

NS_ASSUME_NONNULL_END
