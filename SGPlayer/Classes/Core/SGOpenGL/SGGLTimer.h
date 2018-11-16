//
//  SGGLTimer.h
//  SGPlayer
//
//  Created by Single on 2018/6/27.
//  Copyright © 2018 single. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SGGLTimer : NSObject

- (instancetype)initWithTimeInterval:(double)timeInterval handler:(void (^)(void))handler;

@property (nonatomic) BOOL paused;

- (void)invalidate;

@end
