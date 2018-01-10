//
//  SGPlayerCallback.h
//  SGPlayer
//
//  Created by Single on 2018/1/9.
//  Copyright © 2018年 single. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SGPlayerDefines.h"

@interface SGPlayerCallback : NSObject

+ (void)callbackForState:(id)player current:(SGPlayerState)current previous:(SGPlayerState)previous;
+ (void)callbackForPlaybackTime:(id)player percent:(NSTimeInterval)percent current:(NSTimeInterval)current total:(NSTimeInterval)total;
+ (void)callbackForLoadedTime:(id)player percent:(NSTimeInterval)percent current:(NSTimeInterval)current total:(NSTimeInterval)total;
+ (void)callbackForError:(id)player error:(NSError *)error;

@end