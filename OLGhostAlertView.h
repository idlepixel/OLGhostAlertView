//
//  OLGhostAlertView.h
//
//  Originally created by Radu Dutzan.
//  (c) 2012 Onda.
//

#import <UIKit/UIKit.h>

@class OLGhostAlertView;

@protocol OLGhostAlertViewDelegate <NSObject>

@optional
-(void)alertViewDidHide:(OLGhostAlertView *)alertView;

@end

@interface OLGhostAlertView : UIView

@property (nonatomic, weak) id delegate;
@property (nonatomic, assign, readonly) BOOL showing;

- (id)initWithTitle:(NSString *)title;
- (id)initWithTitle:(NSString *)title message:(NSString *)message;
- (id)initWithTitle:(NSString *)title message:(NSString *)message timeout:(NSTimeInterval)timeout dismissible:(BOOL)dismissible;
- (void)show;
- (void)hide;

@end
