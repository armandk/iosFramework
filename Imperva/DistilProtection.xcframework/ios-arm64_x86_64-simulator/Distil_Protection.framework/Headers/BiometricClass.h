//
//  BiometricClass.h
//  BioMetricTest
//
//  Created by Lars Andersson on 2022-06-01.
//

#import <Foundation/Foundation.h>
#import <CoreMotion/CoreMotion.h>
#import <MetalKit/MetalKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface BiometricClass : NSObject

- (void) startMotionCapture;
- (nullable NSString*) getStreams;


@end

NS_ASSUME_NONNULL_END
