//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBScreenManager, UIScreen;

@protocol SBScreenConnectionHandler <NSObject>
- (void)screenManager:(SBScreenManager *)arg1 didTriggerConnectionHandlerEvent:(long long)arg2 forScreen:(UIScreen *)arg3;
- (_Bool)screenManager:(SBScreenManager *)arg1 shouldBindConnectionHandlerToScreen:(UIScreen *)arg2;
@end

