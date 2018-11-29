//
//  SGMutableAsset.h
//  SGPlayer
//
//  Created by Single on 2018/11/14.
//  Copyright © 2018 single. All rights reserved.
//

#import "SGAsset.h"
#import "SGDefines.h"
#import "SGMutableTrack.h"

@interface SGMutableAsset : SGAsset

- (SGMutableTrack *)addTrack:(SGMediaType)type;

@end
