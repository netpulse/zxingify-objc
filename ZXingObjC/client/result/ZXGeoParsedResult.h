#import "ZXParsedResult.h"

/**
 * @author Sean Owen
 */

@interface ZXGeoParsedResult : ZXParsedResult

@property(nonatomic, assign) double latitude;
@property(nonatomic, assign) double longitude;
@property(nonatomic, assign) double altitude;
@property(nonatomic, copy) NSString * query;

- (id) initWithLatitude:(double)latitude longitude:(double)longitude altitude:(double)altitude query:(NSString *)query;

@end