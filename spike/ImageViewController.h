//
//  ImageViewController.h
//  spike
//
//  Created by wangsh on 14-3-12.
//  Copyright (c) 2014年 wangshuai. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ImageViewController : UIViewController <UIImagePickerControllerDelegate,UINavigationControllerDelegate>
{
    UIImageView *rootImageView;
    UIScrollView *scrollerView;
    UIImage *currentImage;
}
@end
