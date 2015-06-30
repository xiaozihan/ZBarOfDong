//
//  ViewController.h
//  PracticeOfZBarSDK
//
//  Created by Dong on 15/6/29.
//  Copyright (c) 2015年 xindong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZBarSDK.h"
@interface ViewController : UIViewController<ZBarReaderViewDelegate>

@property (nonatomic, strong) ZBarReaderView *readerView;
@property (nonatomic, strong) ZBarCameraSimulator *cameraSim;

@property (nonatomic, strong) UILabel *label;

@property (nonatomic, strong) UIButton *button;

@end

