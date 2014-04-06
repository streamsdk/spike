//
//  SelectViewController.h
//  spike
//
//  Created by wangsh on 14-4-6.
//  Copyright (c) 2014年 wangshuai. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ELCImagePickerController.h"

@interface SelectViewController : UIViewController<ELCImagePickerControllerDelegate, UINavigationControllerDelegate, UIScrollViewDelegate>

@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;
@property (nonatomic, copy) NSArray *chosenImages;

- (IBAction)selectImage;

@end
