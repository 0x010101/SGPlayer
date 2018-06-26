//
//  SGFFVideoFFFrame.h
//  SGPlayer
//
//  Created by Single on 2018/6/26.
//  Copyright © 2018 single. All rights reserved.
//

#import "SGFFVideoFrame.h"

@interface SGFFVideoFFFrame : SGFFVideoFrame

@property (nonatomic, assign, readonly) AVFrame * coreFrame;

- (void)fillWithTimebase:(CMTime)timebase packet:(SGFFPacket *)packet;

@end
