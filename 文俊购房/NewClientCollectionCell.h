//
//  NewClientCollectionCell.h
//  文俊购房
//
//  Created by 俊帅 on 17/5/23.
//  Copyright © 2017年 wj. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NewClientCollectionCell : UICollectionViewCell

@property (nonatomic, strong) UIImageView *imageView;//图片
@property (nonatomic,strong)UILabel *cityLabel;//城市名

- (void)setObject:(AVObject *)object;

@end
