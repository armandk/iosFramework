#ifndef Challenge_h
#define Challenge_h

#include <Foundation/Foundation.h>

#include "Serialization.h"
#include "Fingerprint.h"

@protocol ProblemSolver <NSObject>

-(ABPAuthenticationProtocol* _Nonnull)protocol;

-(NSString* _Nonnull)solve:(NSString* _Nonnull)question;

@end


@interface ABPDebugProblemSolver : NSObject <ProblemSolver>

@end

@interface ABPIosProblemSolver : NSObject <ProblemSolver>

{
@private
    ABPFingerprint* fingerprint;
}

-(id _Nonnull)initWithFingerprint:(ABPFingerprint* _Nonnull)fingerprint;

@end

#endif /* Challenge_h */
