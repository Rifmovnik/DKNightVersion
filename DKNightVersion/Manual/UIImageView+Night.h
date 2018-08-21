//
//  UIImageView+Night.h
//  DKNightVersion
//
//  Created by Draveness on 15/12/10.
//  Copyright © 2015年 DeltaX. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DKNightVersionManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface UIImageView (Night)

- (instancetype)dk_initWithImage:(DKImagePicker)picker;

@property (nullable, nonatomic, copy, setter = dk_setImage:) DKImagePicker dk_image;

@property (nonatomic, copy, setter = dk_setAlpha:) DKAlphaPicker dk_alpha;

@end

NS_ASSUME_NONNULL_END
