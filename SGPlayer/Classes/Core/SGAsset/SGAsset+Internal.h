//
//  SGAsset+Internal.h
//  SGPlayer iOS
//
//  Created by Single on 2018/9/25.
//  Copyright © 2018 single. All rights reserved.
//

#import "SGAsset.h"
#import "SGPacketReadable.h"

@interface SGAsset (Internal)

- (id <SGPacketReadable>)newReadable;

@end
