//
//  MKLengthUnit.h
//  MKUnitConverter
//
//  Created by Michal Konturek on 27/06/2013.
//  Copyright (c) 2013 Michal Konturek. All rights reserved.
//

#import "MKUnit.h"
#import "MKQuantity.h"

@interface MKLengthUnit : MKUnit

+ (instancetype)kilometer;
+ (instancetype)meter;
+ (instancetype)centimeter;
+ (instancetype)milimeter;

@end

@interface MKQuantity (Length)

+ (instancetype)length_centimeterWithAmount:(NSNumber *)amount;
+ (instancetype)length_kilometerWithAmount:(NSNumber *)amount;
+ (instancetype)length_meterWithAmount:(NSNumber *)amount;
+ (instancetype)length_milimeterWithAmount:(NSNumber *)amount;

- (instancetype)length_convertToKilometer;
- (instancetype)length_convertToMeter;
- (instancetype)length_convertToCentimeter;
- (instancetype)length_convertToMilimeter;
- (instancetype)length_convertTo:(MKLengthUnit *)other;

@end