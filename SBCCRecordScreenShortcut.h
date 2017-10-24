//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBCCShortcutModule.h"

@class NSDateFormatter, NSString;

@interface SBCCRecordScreenShortcut : SBCCShortcutModule
{
    struct OpaqueFigVirtualDisplaySession *_session;
    NSString *_lastRecordingPath;
    NSDateFormatter *_dateFormatter;
}

+ (_Bool)enabledByDefault;
+ (_Bool)isSupported:(int)arg1;
+ (id)displayName;
+ (id)identifier;
- (id)glyphImageForState:(int)arg1;
- (id)statusUpdate;
- (_Bool)_toggleState;
- (void)_videoAtPath:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)_stopRecording;
- (void)_startRecording;
- (void)deactivate;
- (void)activate;
- (void)dealloc;

@end

