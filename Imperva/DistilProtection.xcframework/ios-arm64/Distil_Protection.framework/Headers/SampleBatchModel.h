//
//  SampleBatchModel.h
//  BioMetricTest
//
//  Created by Lars Andersson on 2022-06-15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SampleBatchModel : NSObject
{
NSString *et;
float os;
float fq;
NSMutableArray *ms;
}

@property(strong, nonatomic) NSString *et;
@property(nonatomic, assign) float os;
@property(nonatomic, assign) float fq;
@property(strong, nonatomic) NSMutableArray *ms;


@end

NS_ASSUME_NONNULL_END
