//
//  MONActivityIndicatorView.h
//
//  Created by Mounir Ybanez on 4/24/14.
//

#import <UIKit/UIKit.h>

@protocol MONActivityIndicatorViewDelegate;

@interface MONActivityIndicatorView : UIView <UIAppearanceContainer>

/** The number of circle indicators. */
@property (nonatomic) IBInspectable NSUInteger numberOfCircles; //UI_APPEARANCE_SELECTOR

/** The spacing between circles. */
@property (nonatomic) IBInspectable CGFloat internalSpacing; //UI_APPEARANCE_SELECTOR

/** The radius of each circle. */
@property (nonatomic) IBInspectable CGFloat radius; //UI_APPEARANCE_SELECTOR

/** The base animation delay of each circle. */
@property (nonatomic) IBInspectable CGFloat delay; //UI_APPEARANCE_SELECTOR

/** The base animation duration of each circle*/
@property (nonatomic) IBInspectable CGFloat duration; //UI_APPEARANCE_SELECTOR

/** The assigned delegate */
@property (nonatomic, weak) id<MONActivityIndicatorViewDelegate> delegate;


/**
 Starts the animation of the activity indicator.
 */
- (void)startAnimating;

/**
 Stops the animation of the acitivity indciator.
 */
- (void)stopAnimating;

@end

@protocol MONActivityIndicatorViewDelegate <NSObject>

@optional

/**
 Gets the user-defined background color for a particular circle.
 @param activityIndicatorView The activityIndicatorView owning the circle.
 @param index The index of a particular circle.
 @return The background color of a particular circle.
 */
- (UIColor *)activityIndicatorView:(MONActivityIndicatorView *)activityIndicatorView dotColorAtIndex:(NSUInteger)index;

@end
