//
//  SGAudioFormatter.h
//  SGPlayer iOS
//
//  Created by Single on 2018/10/30.
//  Copyright © 2018 single. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SGAudioDescription.h"
#import "SGAudioFrame.h"

@interface SGAudioFormatter : NSObject

/**
 *
 */
@property (nonatomic, copy) SGAudioDescription *audioDescription;

/**
 *
 */
- (SGAudioFrame *)format:(SGAudioFrame *)frame;

/**
 *
 */
- (void)flush;

@end
