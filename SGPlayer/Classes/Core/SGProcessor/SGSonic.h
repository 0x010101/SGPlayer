//
//  SGSonic.h
//  SGPlayer
//
//  Created by Single on 2018/12/20.
//  Copyright © 2018 single. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SGAudioDescription.h"

NS_ASSUME_NONNULL_BEGIN

@interface SGSonic : NSObject

/**
 *
 */
+ (instancetype _Nonnull)new NS_UNAVAILABLE;
- (instancetype _Nonnull)init NS_UNAVAILABLE;

/**
 *
 */
- (instancetype _Nonnull)initWithAudioDescription:(SGAudioDescription *)audioDescription NS_DESIGNATED_INITIALIZER;

/**
 *
 */
@property (nonatomic, copy, readonly) SGAudioDescription *audioDescription;

/**
 *
 */
@property (nonatomic) float speed;

/**
 *
 */
@property (nonatomic) float pitch;

/**
 *
 */
@property (nonatomic) float rate;

/**
 *
 */
@property (nonatomic) float volume;

/**
 *
 */
- (BOOL)open;

/**
 *
 */
- (int)flush;

/**
 *
 */
- (int)samplesInput;

/**
 *
 */
- (int)samplesAvailable;

/**
 *
 */
- (int)write:(uint8_t * _Nonnull * _Nonnull)data nb_samples:(int)nb_samples;

/**
 *
 */
- (int)read:(uint8_t * _Nonnull * _Nonnull)data nb_samples:(int)nb_samples;

@end

NS_ASSUME_NONNULL_END
