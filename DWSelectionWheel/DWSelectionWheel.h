//
//  DWSelectionWheel.h
//  DWSelectionWheel
//
//  Created by Alvin Nutbeij on 08/01/14.
//  Copyright (c) 2014 Devwire. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DWSelectionWheel;

@protocol DWSelectionWheelDelegate <NSObject>

@required

@optional

@end

@protocol DWSelectionWheelDataSource <NSObject>

@required

@optional

@end


@interface DWSelectionWheel : UIView

@end
