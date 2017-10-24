//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSPointerArray, XBStatusBarSettings;

@interface SBAppStatusBarManager : NSObject
{
    NSHashTable *_disableAlphaChangeAssertions;
    NSHashTable *_disableUserInteractionChangeAssertions;
    NSMutableOrderedSet *_windowLevelOverrideReasons;
    NSMutableDictionary *_windowLevelOverrideMap;
    double _defaultWindowLevel;
    NSMutableDictionary *_edgeInsetsDictionary;
    NSPointerArray *_statusBarSettingsAssertionsByLevel[9];
    NSMutableSet *_activeLayoutLayers;
    XBStatusBarSettings *_currentStatusBarSettings;
}

+ (id)sharedInstance;
- (void)didTransitionFromSpringBoard;
- (void)willTransitionToSpringBoard;
- (void)_applyEdgeInsetsToStatusBar;
- (void)removeActiveLayoutLayer:(unsigned long long)arg1;
- (void)addActiveLayoutLayer:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long topmostActiveLayoutLayer;
@property(readonly, nonatomic) struct UIEdgeInsets statusBarEdgeInsets;
- (void)setStatusBarEdgeInsets:(struct UIEdgeInsets)arg1 forLayoutLayer:(unsigned long long)arg2;
- (void)_removeDisableAppStatusBarUserInteractionChangesAssertion:(id)arg1;
- (void)_addDisableAppStatusBarUserInteractionChangesAssertion:(id)arg1;
- (void)_removeDisableAppStatusBarAlphaChangesAssertion:(id)arg1;
- (void)_addDisableAppStatusBarAlphaChangesAssertion:(id)arg1;
- (void)_removeAssertion:(id)arg1 fromAssertions:(id)arg2;
- (void)_addAssertion:(id)arg1 toAssertions:(id)arg2;
- (void)_updateWindowLevel;
- (void)removeWindowLevelOverrideReason:(id)arg1;
- (void)setWindowLevel:(double)arg1 forOverrideReason:(id)arg2;
- (void)setDefaultWindowLevel:(double)arg1;
- (_Bool)isStatusBarUserInteractionEnabled;
- (void)setStatusBarUserInteractionEnabled:(_Bool)arg1;
- (void)hideStatusBar;
- (void)showStatusBar;
- (_Bool)isStatusBarHidden;
- (void)setStatusBarAlpha:(double)arg1;
- (void)_setStatusBarValueForPropertyWithAssertions:(id)arg1 setter:(CDUnknownBlockType)arg2;
- (id)_descriptionForPropertyWithAssertions:(id)arg1;
- (void)_evaluateSettings;
- (void)_cleanUpAllStatusBarSettingsAssertions;
- (void)_removeStatusBarSettingsAssertion:(id)arg1;
- (void)_addStatusBarSettingsAssertion:(id)arg1;
- (void)dealloc;
- (id)init;

@end

