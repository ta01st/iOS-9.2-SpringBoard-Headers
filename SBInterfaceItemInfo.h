//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface SBInterfaceItemInfo : NSObject
{
    id _representedObject;
    UIImage *_icon;
    UIImage *_settingsIcon;
    NSString *_displayName;
    NSString *_settingsDisplayName;
}

+ (id)infoWithRepresentedObject:(id)arg1;
@property(copy, nonatomic) NSString *settingsDisplayName; // @synthesize settingsDisplayName=_settingsDisplayName;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) UIImage *settingsIcon; // @synthesize settingsIcon=_settingsIcon;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(readonly, retain, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)invalidateCachedLayoutData;
- (double)heightForReusableViewForNotificationCenterTableViewController:(id)arg1 layoutMode:(long long)arg2 sectionLocation:(long long)arg3;
- (void)populateReusableView:(id)arg1;
- (id)reusableViewIdentifier;
- (Class)reusableViewClass;
@property(readonly, nonatomic) NSString *identifier;
- (void)dealloc;
- (id)initWithRepresentedObject:(id)arg1;

@end

