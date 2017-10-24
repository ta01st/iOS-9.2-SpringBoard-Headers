//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBBulletinWindowClient.h"
#import "SBCoordinatedPresenting.h"
#import "SBExtensionHandling.h"
#import "SBNotificationCenterViewControllerDelegate.h"
#import "SBReachabilityObserver.h"
#import "SBSystemGestureRecognizerDelegate.h"
#import "SBWidgetViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIViewControllerAnimatedTransitioning.h"
#import "UIViewControllerInteractiveTransitioning.h"
#import "UIViewControllerTransitioningDelegate.h"
#import "_UISettingsKeyObserver.h"

@class FBDisplayLayoutElement, FBUIApplicationSceneDeactivationAssertion, NCLaunchStats, NSMutableSet, NSSet, NSString, NSTimer, SBChevronView, SBLockScreenActionContext, SBNotificationCenterBounceAnimator, SBNotificationCenterSettings, SBNotificationCenterViewController, SBScreenEdgePanGestureRecognizer, SBWindow, UILongPressGestureRecognizer, UIScreenEdgePanGestureRecognizer, UIView, _SBNotificationCenterTransitionContext;

@interface SBNotificationCenterController : NSObject <SBBulletinWindowClient, SBNotificationCenterViewControllerDelegate, SBWidgetViewControllerDelegate, _UISettingsKeyObserver, UIGestureRecognizerDelegate, SBExtensionHandling, SBReachabilityObserver, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, SBSystemGestureRecognizerDelegate, SBCoordinatedPresenting>
{
    SBNotificationCenterViewController *_viewController;
    UIView *_coveredContentSnapshot;
    SBChevronView *_borrowedGrabberView;
    CDUnknownBlockType _borrowedGrabberWillPresentBlock;
    CDUnknownBlockType _borrowedGrabberHideBlock;
    CDUnknownBlockType _borrowedGrabberCompletionBlock;
    UILongPressGestureRecognizer *_grabberPressGesture;
    id _keyboardNotificationObserverToken;
    SBLockScreenActionContext *_lockScreenActionContext;
    long long _transitionState;
    long long _presentedState;
    SBNotificationCenterSettings *_settings;
    _Bool _grabberEnabled;
    _Bool _didCoalesceWidgetsConnections;
    NSTimer *_widgetConnectionsTimer;
    FBUIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    FBDisplayLayoutElement *_displayLayoutElement;
    NCLaunchStats *_launchStats;
    SBScreenEdgePanGestureRecognizer *_showSystemGestureRecognizer;
    UIScreenEdgePanGestureRecognizer *_dismissGestureRecognizer;
    SBNotificationCenterBounceAnimator *_currentBounceAnimator;
    NSMutableSet *_bulletinWindowClients;
    id <UIViewControllerContextTransitioning> _activeTransitionContext;
    _SBNotificationCenterTransitionContext *_activeNCTransitionContext;
}

+ (double)transitionAnimationDuration;
+ (id)newDynamicAnimationForShow:(_Bool)arg1 targetValue:(double)arg2 withInitialValue:(double)arg3 velocity:(double)arg4 extraPull:(_Bool)arg5;
+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNecessary:(_Bool)arg1;
@property(nonatomic, getter=isGrabberEnabled) _Bool grabberEnabled; // @synthesize grabberEnabled=_grabberEnabled;
@property(readonly, retain, nonatomic) SBNotificationCenterSettings *settings; // @synthesize settings=_settings;
@property(readonly, retain, nonatomic) SBLockScreenActionContext *lockScreenActionContext; // @synthesize lockScreenActionContext=_lockScreenActionContext;
@property(readonly, retain, nonatomic) SBNotificationCenterViewController *viewController; // @synthesize viewController=_viewController;
- (void)handleReachabilityModeDeactivated;
- (void)handleReachabilityModeActivated;
- (void)runWidgetLaunchTestWithWidgetWithIdentifier:(id)arg1 prelude:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_loadViewForWidget:(id)arg1 prelude:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)enableAllWidgets:(CDUnknownBlockType)arg1;
- (void)finishedScrollTest;
- (void)runScrollTest:(id)arg1 iterations:(long long)arg2 delta:(long long)arg3 useAAGView:(_Bool)arg4;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)launchExtensionWithBundleID:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_makeVisibleWidgetWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleWidgetLaunchRecommendation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shouldRequestWidgetRemoteViewControllers;
- (void)widget:(id)arg1 requestsLaunchOfURL:(id)arg2;
- (void)remoteViewControllerDidConnectForWidget:(id)arg1;
- (void)_didCoalesceWidgetsConnections:(id)arg1;
- (void)invalidateLockScreenActionContext;
- (_Bool)handleAction:(id)arg1 forBulletin:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)widgetViewControllerHostDelegate:(id)arg1;
- (void)abortAnimatedTransition;
- (void)endTransitionWithVelocity:(struct CGPoint)arg1 wasCancelled:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateTransitionWithTouchLocation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)beginPresentationWithTouchLocation:(struct CGPoint)arg1 presentationBegunHandler:(CDUnknownBlockType)arg2;
- (_Bool)isPresentingControllerTransitioning;
@property(readonly, nonatomic) unsigned long long hintEdge;
@property(readonly, nonatomic) double hintDisplacement;
@property(readonly, nonatomic) long long coordinatedPresentingControllerIdentifier;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)_lockScreenViewController;
- (void)_handleActionContextRequiringAuthentication:(id)arg1;
- (_Bool)_requiresAuthenticationForActionContext:(id)arg1;
- (void)_handleActionContextRequiringUIUnlock:(id)arg1;
- (_Bool)_requiresUIUnlockForActionContext:(id)arg1;
- (_Bool)_handleActionOrRequestWithDefaultAction:(CDUnknownBlockType)arg1 lockedAction:(CDUnknownBlockType)arg2;
- (void)biometricEventMonitorDidAuthenticate:(id)arg1;
- (void)_updateForChangeInLockedState;
- (void)handleGrabberPress:(id)arg1;
@property(readonly, nonatomic, getter=isGrabberVisible) _Bool grabberVisible;
- (void)_hideGrabberForSystemGesture;
- (void)hideGrabberAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)canShowHideGrabberView;
- (void)_setGrabberEnabled:(_Bool)arg1;
- (void)unregisterSharedGrabberView;
- (void)registerSharedGrabberView:(id)arg1 withWillPresentBlock:(CDUnknownBlockType)arg2 hideBlock:(CDUnknownBlockType)arg3 andCompletion:(CDUnknownBlockType)arg4;
- (void)_updateShouldShowGrabberOnFirstSwipe;
- (_Bool)_shouldShowGrabberOnFirstSwipe;
- (void)startInteractiveTransition:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1 withStepper:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 fromCurrentState:(_Bool)arg4;
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissAnimated:(_Bool)arg1;
- (void)presentAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentAnimated:(_Bool)arg1 setupPrelude:(CDUnknownBlockType)arg2 setupPostlude:(CDUnknownBlockType)arg3 animationPrelude:(CDUnknownBlockType)arg4 animationPostlude:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_presentAnimated:(_Bool)arg1 setupPrelude:(CDUnknownBlockType)arg2 setupPostlude:(CDUnknownBlockType)arg3 animationPrelude:(CDUnknownBlockType)arg4 animationPostlude:(CDUnknownBlockType)arg5;
- (void)presentAnimated:(_Bool)arg1;
- (void)_present:(_Bool)arg1 withStandardAnimation:(_Bool)arg2 stepper:(CDUnknownBlockType)arg3 fromCurrentState:(_Bool)arg4;
- (void)_present:(_Bool)arg1 stepper:(CDUnknownBlockType)arg2;
- (void)_cancelTransition;
- (void)endTransitionWithVelocity:(struct CGPoint)arg1 additionalValueApplier:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_endTransitionWithVelocity:(struct CGPoint)arg1 additionalValueApplier:(CDUnknownBlockType)arg2 animationPostlude:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_beginDismissalWithTouchLocation:(struct CGPoint)arg1;
- (void)_beginPresentationWithTouchLocation:(struct CGPoint)arg1 setupPrelude:(CDUnknownBlockType)arg2 setupPostlude:(CDUnknownBlockType)arg3 presentationBegunHandler:(CDUnknownBlockType)arg4 animationPrelude:(CDUnknownBlockType)arg5;
- (void)prepareLayoutForPresentationFromBanner;
- (void)_cleanupAfterTransition:(_Bool)arg1;
- (void)_setupForDismissal;
- (void)_setupForPresentationWithTouchLocation:(struct CGPoint)arg1;
- (void)_setupForViewPresentation;
- (void)_setViewUserInteractionEnabled:(_Bool)arg1;
- (void)_removeCoveredContentSnapshot;
- (void)_insertCoveredContentSnapshotIfNecessary:(id)arg1;
- (void)_invalidateCoveredContentSnapshot;
- (void)_updateCoveredContentSnapshot;
- (_Bool)_shouldSelectViewControllerAtTouchLocation;
- (void)_handleDismissGesture:(id)arg1;
- (void)_showNotificationCenterGestureCancelled;
- (void)_showNotificationCenterGestureFailed;
- (void)_showNotificationCenterGestureEndedWithGestureRecognizer:(id)arg1;
- (void)_showNotificationCenterGestureChangedWithGestureRecognizer:(id)arg1 duration:(double)arg2;
- (void)_showNotificationCenterGestureBeganWithGestureRecognizer:(id)arg1;
- (void)_handleShowNotificationCenterGesture:(id)arg1;
- (void)unregisterPresentedViewController:(id)arg1;
- (void)registerPresentedViewController:(id)arg1;
- (void)_unregisterNotificationCenterBulletinWindowClient:(id)arg1;
- (void)_registerNotificationCenterBulletinWindowClient:(id)arg1;
- (_Bool)handleMenuButtonTap;
@property(nonatomic) _Bool blursBackground;
@property(readonly, nonatomic, getter=isNotificationsViewAvailableWhileLocked) _Bool notificationsViewAvailableWhileLocked;
@property(readonly, nonatomic, getter=isTodayViewAvailableWhileLocked) _Bool todayViewAvailableWhileLocked;
- (_Bool)_isNotificationCenterViewAvailableWhileLockedWithProfileBlock:(CDUnknownBlockType)arg1 counterpartBlock:(CDUnknownBlockType)arg2;
- (_Bool)_isNotificationCenterViewWithFeatureKeyAvailableWhileLocked:(id)arg1 isLockedDownByRestrictions:(_Bool *)arg2;
@property(readonly, nonatomic, getter=isAvailableWhileLocked) _Bool availableWhileLocked;
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
@property(readonly, nonatomic, getter=isTransitioning) _Bool transitioning;
@property(readonly, nonatomic) SBWindow *window;
@property(readonly, nonatomic) long long layoutMode;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) NSSet *conflictingGestures;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSSet *gestures;
@property(readonly) unsigned long long hash;
@property(nonatomic) id <SBPresentingDelegate> presentingDelegate;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSSet *tapExcludedViews;

@end

