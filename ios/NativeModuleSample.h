
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNNativeModuleSampleSpec.h"

@interface NativeModuleSample : NSObject <NativeNativeModuleSampleSpec>
#else
#import <React/RCTBridgeModule.h>

@interface NativeModuleSample : NSObject <RCTBridgeModule>
#endif

@end
