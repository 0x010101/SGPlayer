//
//  SGFrameOutput.h
//  SGPlayer iOS
//
//  Created by Single on 2018/10/22.
//  Copyright © 2018 single. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SGAsset.h"
#import "SGStream.h"
#import "SGFrame.h"

@protocol SGFrameOutputDelegate;

typedef NS_ENUM(NSUInteger, SGFrameOutputState)
{
    SGFrameOutputStateNone,
    SGFrameOutputStateOpening,
    SGFrameOutputStateOpened,
    SGFrameOutputStateReading,
    SGFrameOutputStatePaused,
    SGFrameOutputStateSeeking,
    SGFrameOutputStateFinished,
    SGFrameOutputStateClosed,
    SGFrameOutputStateFailed,
};

@interface SGFrameOutput : NSObject

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithAsset:(SGAsset *)asset;

@property (nonatomic, weak) id <SGFrameOutputDelegate> delegate;
@property (nonatomic, strong) NSArray <SGStream *> * outputStreams;

- (SGFrameOutputState)state;
- (NSError *)error;
- (CMTime)duration;
- (NSDictionary *)metadata;
- (NSArray <SGStream *> *)streams;
- (NSArray <SGStream *> *)audioStreams;
- (NSArray <SGStream *> *)videoStreams;
- (NSArray <SGStream *> *)otherStreams;
- (void)getDuratioin:(CMTime *)duration size:(int64_t *)size count:(NSUInteger *)count stream:(SGStream *)stream;

- (NSError *)open;
- (NSError *)close;
- (NSError *)pause;
- (NSError *)resume;
- (NSError *)seekable;
- (NSError *)seekToTime:(CMTime)time completionHandler:(void(^)(CMTime time, NSError * error))completionHandler;

@end

@protocol SGFrameOutputDelegate <NSObject>

- (void)frameOutput:(SGFrameOutput *)frameOutput didChangeState:(SGFrameOutputState)state;
- (void)frameOutput:(SGFrameOutput *)frameOutput didChangeCapacity:(CMTime)duration size:(int64_t)size count:(NSUInteger)count stream:(SGStream *)stream;
- (void)frameOutput:(SGFrameOutput *)frameOutput didOutputFrame:(SGFrame *)frame;

@end
