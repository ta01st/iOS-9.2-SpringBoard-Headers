//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCProfileConnectionObserver.h"

@class NSHashTable, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface SBApplicationRestrictionController : NSObject <MCProfileConnectionObserver>
{
    id <SBApplicationRestrictionDataSource> _dataSource;
    NSHashTable *_observers;
    NSMutableDictionary *_tagValidityMap;
    NSMutableDictionary *_validTagsByIdentifier;
    struct MGNotificationTokenStruct *_tagsNotificationToken;
    NSMutableSet *_enabledTags;
    NSMutableDictionary *_ratingRanksByIdentifier;
    _Bool _hasSMSCapability;
    NSSet *_restrictedIdentifiers;
    _Bool _showInternalApps;
    _Bool _hasHideNonDefaultSystemAppsCapability;
    _Bool _showAllSystemApps;
    _Bool _canPostRestrictionState;
}

- (void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)_postRestrictionStateToObservers:(id)arg1;
- (void)_postRestrictionState;
- (void)updateVisibilityPreferences;
- (void)_updateRestrictionsAndForcePost:(_Bool)arg1;
- (void)updateRestrictions;
- (void)beginPostingChanges;
- (void)noteVisibilityOverridesDidChange;
- (void)noteApplicationIdentifiersDidChangeWithAdded:(id)arg1 modified:(id)arg2 removed:(id)arg3;
- (_Bool)isApplicationIdentifierRestricted:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

