//
//  ZRSWLinePrejudicationCells.h
//  ZRSW
//
//  Created by 周培玉 on 2018/10/1.
//  Copyright © 2018 周培玉. All rights reserved.
//

#import <Foundation/Foundation.h>

#pragma mark - 图片cell

@interface LinePrejudicationImagesModel : NSObject

@property (nonatomic, strong) UIImage *image;

@end

@interface LinePrejudicationImagesView : UIView

+ (LinePrejudicationImagesView *)getImagesView;

@property (nonatomic, weak) UIViewController *presentedVC;

+ (CGFloat)viewHeight;

- (NSMutableArray *)getResultImages;


@end


#pragma mark - 用户信息

@class LinePrejudicationUserInfoInputItem;

@protocol LinePrejudicationInputItemDelegate <NSObject>

- (BOOL)textField:(UITextField *)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString *)string customView:(LinePrejudicationUserInfoInputItem *)customView;

- (void)textFieldTextDidChange:(UITextField *)textField customView:(LinePrejudicationUserInfoInputItem *)customView;

@end

@protocol LinePrejudicationCheckItemDelegate <NSObject>

- (void)checkViewSelectedNum:(UseInfoSex)sex;

@end

@interface LinePrejudicationUserInfoCheckItem : UIView

@property (nonatomic, weak) id <LinePrejudicationCheckItemDelegate>delegate;
- (void)setTitle:(NSString *)title;
- (void)setDefaultSex:(UseInfoSex)sex;
- (void)setBottomLineHidden:(BOOL)bottomLineHidden;

@end
@interface LinePrejudicationUserInfoInputItem : UIView

@property (nonatomic, weak) id <LinePrejudicationInputItemDelegate> delegate;

- (void)setTitle:(NSString *)title;
- (void)setPlaceHolder:(NSString *)placeHolder;
- (void)setKeyboardType:(UIKeyboardType)keyboardType;
- (void)setBottomLineHidden:(BOOL)bottomLineHidden;

@end
@interface LinePrejudicationUserInfoView : UIView

+ (LinePrejudicationUserInfoView *)getUserInfoView;

+ (CGFloat)viewHeight;

- (NSString *)loanPersonName;
- (NSString *)loanPersonSex;
- (NSString *)loanPersonAdd;
- (NSString *)loanPersonPhone;
- (NSString *)loanPersonMoney;

@end

#pragma mark - 备注

@interface LinePrejudicationRemarksView : UIView

+ (LinePrejudicationRemarksView *)getRemarkView;

+ (CGFloat)viewHeight;

- (NSString *)remarkText;


@end
