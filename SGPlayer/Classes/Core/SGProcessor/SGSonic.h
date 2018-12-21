//
//  SGSonic.h
//  SGPlayer
//
//  Created by Single on 2018/12/20.
//  Copyright © 2018 single. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SGAudioDescription.h"

@interface SGSonic : NSObject

/**
 *
 */
+ (instancetype _Nonnull)new NS_UNAVAILABLE;
- (instancetype _Nonnull)init NS_UNAVAILABLE;

/**
 *
 */
- (instancetype _Nonnull)initWithAudioDescription:(SGAudioDescription * _Nullable)audioDescription NS_DESIGNATED_INITIALIZER;

/**
 *
 */
@property (nonatomic, copy, readonly) SGAudioDescription * _Nonnull audioDescription;

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
- (int)write:(uint8_t * _Nullable * _Nonnull)data nb_samples:(int)nb_samples;

/**
 *
 */
- (int)read:(uint8_t * _Nullable * _Nonnull)data nb_samples:(int)nb_samples;

@end
