//
//   SHSegmentControl.h
//   SHSegmentedControlTableView
//
//   Created by angle on 2017/10/10.
//   Copyright © 2017年 angle. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    /** 默认状态 */
    SHSegmentControlTypeNone,
    /** 涌入放大效果 */
    SHSegmentControlTypeWater,
    /** 右上角小标题 */
    SHSegmentControlTypeSubTitle,
    /** 涌入放大效果+右上角小标题 */
    SHSegmentControlTypeWaterSubTitle,
} SHSegmentControlType;

@interface SHSegmentControl : UIScrollView
/** 间距 */
@property (nonatomic, assign) CGFloat titleMargin;
/** 默认字体大小 (默认15) */
@property (nonatomic, assign) UIFont  *titleNormalFont;
/** 选中字体大小 (默认15) */
@property (nonatomic, assign) UIFont  *titleSelectFont;
/** 小标题字体大小 */
@property (nonatomic, assign) UIFont  *subTitleFont;
/** 字体默认颜色 */
@property (nonatomic, strong) UIColor *titleNormalColor;
/** 小标题默认字体颜色 */
@property (nonatomic, strong) UIColor *subTitleNormalColor;
/** 字体选中颜色 */
@property (nonatomic, strong) UIColor *titleSelectColor;
/** 小标题选中字体颜色 */
@property (nonatomic, strong) UIColor *subTitleSelectColor;
/** 指示器圆角 */
@property (nonatomic, assign) CGFloat progressCornerRadius;
/** 指示器高度 */
@property (nonatomic, assign) CGFloat progressHeight;
/** 指示器宽度（默认 title宽） */
@property (nonatomic, assign) CGFloat progressWidth;
/** 指示器颜色 */
@property (nonatomic, strong) UIColor *progressColor;
/** 分栏类型 */
@property (nonatomic, assign) SHSegmentControlType type;


/** 获取当前下标 */
@property (nonatomic, assign) NSInteger curIndex;
/** 设置下标 */
@property (nonatomic, assign) NSInteger index;
/** 分栏总数 */
@property (nonatomic, assign) NSInteger totalCount;


/** 分栏点击事件回调block */
@property (nonatomic, copy) void(^curClick)(NSInteger index);


/** 带分栏信息---初始化 */
- (instancetype)initWithFrame:(CGRect)frame items:(NSArray<NSString *> *)items;


/** 重新设置分栏 */
- (void)restItmes:(NSArray<NSString *> *)items;
/** 设置分栏子标题 （个数和分栏数相同，没有给@""） */
- (void)setItmesSubTitle:(NSArray<NSString *> *)items;
/** 属性设置后，手动刷新，提高性能 */
- (void)reloadViews;

@end



@interface SHTapButtonView : UIView
/** 字体大小 */
@property (nonatomic, assign) UIFont  *titleFont;
/** 小标题字体大小 */
@property (nonatomic, assign) UIFont  *subTitleFont;
/** 字体默认颜色 */
@property (nonatomic, strong) UIColor *titleNormalColor;
/** 小标题默认字体颜色 */
@property (nonatomic, strong) UIColor *subTitleNormalColor;
/** 字体选中颜色 */
@property (nonatomic, strong) UIColor *titleSelectColor;
/** 小标题选中字体颜色 */
@property (nonatomic, strong) UIColor *subTitleSelectColor;
/** 选中 */
@property (nonatomic, assign) BOOL selected;
/** 隐藏小标题 (默认隐藏 yes) */
@property (nonatomic, assign) BOOL subHide;
/** 标题 */
@property (nonatomic, copy) NSString *title;
/** 小标题 */
@property (nonatomic, copy) NSString *subTitle;

/** 点击事件回调block */
@property (nonatomic, copy) void(^tapClick)(SHTapButtonView *btn);

@end

