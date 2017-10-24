//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBLockOverlayViewController.h"

#import "SBLockScreenBuddyViewDelegate.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, NSTimer, SBActivationInfoViewController, SBBuddyRegulatoryInfoViewController, SBBuddyWiFiScanner, SBLockScreenViewController;

@interface SBLockScreenBuddyViewController : SBLockOverlayViewController <SBLockScreenBuddyViewDelegate>
{
    NSMutableArray *_currentStringsOrdering;
    _Bool _needsTransitionFromFakeLogoToWelcomeStrings;
    _Bool _cyclingLabels;
    _Bool _viewVisible;
    _Bool _canShowActivationInfo;
    _Bool _showingBootLogo;
    _Bool _startsWithBlackBackground;
    _Bool _hasResultsFromWifiScan;
    _Bool _shouldResetOrderingOnNextCycle;
    SBLockScreenViewController *_lockScreenViewController;
    NSDictionary *_localizedStrings;
    NSArray *_stringsOrdering;
    unsigned long long _currentStringIndex;
    NSTimer *_stringCycleTimer;
    SBActivationInfoViewController *_activationInfoViewController;
    NSString *_telephonyPrimaryLanguage;
    NSString *_wifiPrimaryLanguage;
    SBBuddyRegulatoryInfoViewController *_regulatoryInfoViewController;
    SBBuddyWiFiScanner *_wifiScanner;
}

@property(retain, nonatomic) SBBuddyWiFiScanner *wifiScanner; // @synthesize wifiScanner=_wifiScanner;
@property(nonatomic) _Bool shouldResetOrderingOnNextCycle; // @synthesize shouldResetOrderingOnNextCycle=_shouldResetOrderingOnNextCycle;
@property(nonatomic) _Bool hasResultsFromWifiScan; // @synthesize hasResultsFromWifiScan=_hasResultsFromWifiScan;
@property(retain, nonatomic) SBBuddyRegulatoryInfoViewController *regulatoryInfoViewController; // @synthesize regulatoryInfoViewController=_regulatoryInfoViewController;
@property(copy, nonatomic) NSString *wifiPrimaryLanguage; // @synthesize wifiPrimaryLanguage=_wifiPrimaryLanguage;
@property(copy, nonatomic) NSString *telephonyPrimaryLanguage; // @synthesize telephonyPrimaryLanguage=_telephonyPrimaryLanguage;
@property(nonatomic) _Bool startsWithBlackBackground; // @synthesize startsWithBlackBackground=_startsWithBlackBackground;
@property(nonatomic, getter=isShowingBootLogo) _Bool showingBootLogo; // @synthesize showingBootLogo=_showingBootLogo;
@property(retain, nonatomic) SBActivationInfoViewController *activationInfoViewController; // @synthesize activationInfoViewController=_activationInfoViewController;
@property(retain, nonatomic) NSTimer *stringCycleTimer; // @synthesize stringCycleTimer=_stringCycleTimer;
@property(nonatomic) unsigned long long currentStringIndex; // @synthesize currentStringIndex=_currentStringIndex;
@property(copy, nonatomic) NSArray *stringsOrdering; // @synthesize stringsOrdering=_stringsOrdering;
@property(copy, nonatomic) NSDictionary *localizedStrings; // @synthesize localizedStrings=_localizedStrings;
@property(nonatomic) SBLockScreenViewController *lockScreenViewController; // @synthesize lockScreenViewController=_lockScreenViewController;
- (void)handleTapGestureFromView:(id)arg1;
- (void)buddyView:(id)arg1 didChangeToStyle:(unsigned long long)arg2;
- (void)_cancelWifiScan;
- (void)_startWifiScan;
- (void)_didHideBootSetupLogo:(id)arg1;
- (void)_didShowBootSetupLogo:(id)arg1;
- (void)_regulatoryInfoButtonTapped:(id)arg1;
- (void)_infoButtonTapped:(id)arg1;
- (void)_cycleTimerDidFire:(id)arg1;
- (void)_updateDisplayedStrings;
- (void)_resetDisplayedLocalizedStringsImmediately:(_Bool)arg1;
- (void)_startCyclingLocalizedStringsWithDelay:(double)arg1;
- (void)_startCyclingLocalizedStrings;
- (void)_updateWifiPrimaryLanguageFromGuessedCountries:(id)arg1;
- (void)_fetchLanguageFromTelephony;
- (id)_importantLanguageIdentifiers;
- (id)_currentLanguageIdentifier;
- (id)_currentStringsDictionary;
- (void)_transitionFromFakeBootLogoToWelcomeStrings;
- (void)_noteLogoVisible:(_Bool)arg1;
- (void)_removeAllHiddenReasons;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)buddyView;
- (void)loadView;
- (void)stopCyclingLocalizedStrings;
- (void)setInScreenOffMode:(_Bool)arg1;
@property(readonly, nonatomic) NSString *slideToUnlockText;
- (void)dealloc;
- (id)initWithLockScreenViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

