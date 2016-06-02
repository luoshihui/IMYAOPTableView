//
//  UITableView+IMYADTableUtils.h
//  IMYAdvertisementDemo
//
//  Created by ljh on 16/4/16.
//  Copyright © 2016年 IMY. All rights reserved.
//

#import "IMYAOPTableViewUtils.h"
#import <UIKit/UIKit.h>

@interface UITableView (IMYAOPTableOperation)
+ (SEL)aop_userSelectRowAtPendingSelectionIndexPathSEL;
+ (SEL)aop_updateRowDataSEL;
+ (SEL)aop_rebuildGeometrySEL;
+ (SEL)aop_updateContentSizeSEL;

+ (Class)imy_aopClass;
@end


@interface _IMYAOPTableView : UITableView
- (void)aop_realReloadData;
- (void)aop_refreshDelegate;
- (void)aop_refreshDataSource;
@end