//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BBObserverDelegate.h"
#import "SBAssertionDelegate.h"
#import "SBBannerPresentingAlertItemDelegate.h"
#import "SBVolumePressBandit.h"
#import "_UISettingsKeyObserver.h"

@class BBObserver, CPDistributedNotificationCenter, NSArray, NSHashTable, NSMutableArray, NSMutableSet, NSString, NSTimer, SBAlertItem, SBAlertItemsSettings;

@interface SBAlertItemsController : NSObject <_UISettingsKeyObserver, SBVolumePressBandit, SBAssertionDelegate, SBBannerPresentingAlertItemDelegate, BBObserverDelegate>
{
    NSMutableArray *_lockedAlertItems;
    NSMutableArray *_unlockedAlertItems;
    NSMutableArray *_pendingAlertItems;
    NSMutableArray *_superModalAlertItems;
    NSTimer *_autoDismissTimer;
    CPDistributedNotificationCenter *_notificationCenter;
    unsigned long long _notificationClientCount;
    _Bool _systemShuttingDown;
    _Bool _lockedButNotSetupYet;
    NSMutableSet *_forceAlertsToPendReasons;
    BBObserver *_bbObserver;
    NSHashTable *_observers;
    SBAlertItemsSettings *_settings;
    SBAlertItem *_testItem;
    NSMutableSet *_suppressionAssertions;
}

+ (id)sharedInstance;
@property(readonly, retain, nonatomic) NSArray *lockedAlertItems; // @synthesize lockedAlertItems=_lockedAlertItems;
- (void)presentBannerForBulletin:(id)arg1 action:(id)arg2;
- (void)assertionExpired:(id)arg1;
- (_Bool)captureSuppressionAssertionWithPort:(unsigned int)arg1 reason:(id)arg2;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_notifyObservers:(CDUnknownBlockType)arg1;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
- (void)_lockedButNotSetupYetChanged;
- (void)_buddyDidExit;
- (void)_notificationClientEnded:(id)arg1;
- (void)_notificationClientStarted:(id)arg1;
- (void)moveActiveAlertsToPendingWithAnimation:(_Bool)arg1;
- (void)setForceAlertsToPend:(_Bool)arg1 forReason:(id)arg2;
- (void)noteSystemShuttingDown;
- (void)notifySystemOfAlertItemActivation:(id)arg1;
- (void)_postAlertPresentedNotificationForType:(int)arg1 sender:(id)arg2 date:(id)arg3;
- (void)noteVolumeOrLockPressedOverLockedAlerts;
- (void)stopPendingAlertItemsForFullscreenAlert;
- (void)deactivateAlertItemsForFullscreenAlertActivationAndPendMiniAlerts:(_Bool)arg1;
- (_Bool)dontLockOverAlertItems;
- (_Bool)deactivateAlertForMenuClickOrSystemGestureWithAnimation:(_Bool)arg1;
- (_Bool)canDeactivateAlertForMenuClickOrSystemGesture;
- (id)visibleAlertItem;
- (_Bool)hasVisibleAlert;
- (_Bool)hasAlerts;
- (_Bool)hasAlertOfClass:(Class)arg1;
- (id)alertItemsOfClass:(Class)arg1;
- (void)autoDismissAlertItem:(id)arg1;
- (_Bool)deactivateAlertItemsOfClass:(Class)arg1 reason:(int)arg2 animated:(_Bool)arg3;
- (_Bool)deactivateAlertItemsOfClass:(Class)arg1 reason:(int)arg2;
- (_Bool)deactivateAlertItemsOfClass:(Class)arg1;
- (void)deactivateAlertItem:(id)arg1;
- (void)deactivateAlertItem:(id)arg1 reason:(int)arg2 animated:(_Bool)arg3;
- (void)activatePendedAlertsIfNecessary;
- (void)_activateSuperModalAlertsIfNecessary;
- (void)deactivateAlertItem:(id)arg1 reason:(int)arg2;
- (void)activateAlertItem:(id)arg1 animated:(_Bool)arg2;
- (void)activateAlertItem:(id)arg1;
- (void)resetAutoDismissTimer;
- (void)convertUnlockedAlertsToLockedAlerts;
@property(readonly, copy) NSString *description;
- (_Bool)hasVisibleSuperModalAlert;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

