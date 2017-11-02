//
//  RCTArenaPickerManager.h
//  ReactNativeArenaKitSupport
//
//  Created by 陈云杰 on 2017/10/30.
//  Copyright © 2017年 江苏斑马软件技术有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#else
#import "RCTBridgeModule.h"
#endif

#import "RCTArenaPicker.h"

#if __has_include(<React/RCTEventEmitter.h>)
#import <React/RCTEventEmitter.h>
#else
#import "RCTEventEmitter.h"
#endif


@interface RCTArenaPickerManager : RCTEventEmitter<RCTBridgeModule>

@end
