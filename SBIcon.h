//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBIconIndexNode.h"

@class NSHashTable, NSString, UIImage;

@interface SBIcon : NSObject <SBIconIndexNode>
{
    NSHashTable *_observers;
    id _badgeNumberOrString;
    unsigned int _uninstalled:1;
    UIImage *_cachedIconImages[14];
}

- (_Bool)canReceiveGrabbedIcon;
- (id)folderFallbackTitle;
- (id)folderTitleOptions;
- (id)uninstallAlertCancelTitle;
- (id)uninstallAlertConfirmTitle;
- (id)uninstallAlertBodyForAppWithDocumentUpdatesPending;
- (id)uninstallAlertBodyForAppWithDocumentsInCloud;
- (id)uninstallAlertBody;
- (id)uninstallAlertTitleForAppWithDocumentUpdatesPending;
- (id)uninstallAlertTitleForAppWithDocumentsInCloud;
- (id)uninstallAlertTitle;
- (_Bool)isUninstalled;
- (void)setUninstalled;
- (void)completeUninstall;
- (_Bool)allowsUninstall;
- (_Bool)shouldAnimateProgress;
- (_Bool)progressIsPaused;
- (double)progressPercent;
- (long long)progressState;
- (void)launchFromLocation:(int)arg1 context:(id)arg2;
- (id)automationID;
- (_Bool)isBeta;
- (_Bool)isRecentlyUpdated;
- (void)setBadge:(id)arg1;
- (void)noteBadgeDidChange;
- (int)accessoryTypeForLocation:(int)arg1;
- (id)accessoryTextForLocation:(int)arg1;
- (id)badgeNumberOrString;
- (long long)badgeValue;
- (void)reloadIconImagePurgingImageCache:(_Bool)arg1;
- (void)reloadIconImage;
- (void)purgeCachedImages;
- (id)gridCellImage;
- (id)getGenericIconImage:(int)arg1;
- (id)getUnmaskedIconImage:(int)arg1;
- (id)getCachedIconImage:(int)arg1;
- (id)getIconImage:(int)arg1;
- (id)getStandardIconImageForLocation:(int)arg1;
- (_Bool)shouldCacheImageForFormat:(int)arg1;
- (id)generateIconImage:(int)arg1;
- (_Bool)launchEnabled;
- (id)tags;
- (_Bool)matchesEntity:(id)arg1;
- (long long)localizedCompareDisplayNames:(id)arg1;
- (_Bool)canTightenLabel;
- (_Bool)canEllipsizeLabel;
- (id)displayNameForLocation:(int)arg1;
- (void)localeChanged;
- (void)dealloc;
- (id)init;
- (int)iconFormatForLocation:(int)arg1;
@property(readonly, nonatomic) _Bool shouldWarmUp;
- (id)nodeDescriptionWithPrefix:(id)arg1;
- (void)removeNodeObserver:(id)arg1;
- (void)addNodeObserver:(id)arg1;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)containedNodeIdentifiers;
- (_Bool)containsNodeIdentifier:(id)arg1;
- (id)nodeIdentifier;
- (_Bool)hasObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

