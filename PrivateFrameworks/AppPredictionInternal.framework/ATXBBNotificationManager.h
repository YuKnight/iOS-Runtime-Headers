/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXBBNotificationManager : NSObject <BBObserverDelegate> {
    bool  _debugOutput;
    BBObserver * _observer;
    NSMutableDictionary * _recentNotifications;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_addNotificationForBundleId:(id)arg1 withPublicationDate:(id)arg2;
- (bool)_purgeNotificationsWithMinDate:(id)arg1;
- (id)init;
- (id)initWithDebugOutput:(bool)arg1 withObserverEnabled:(bool)arg2;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(bool)arg4 withReply:(id /* block */)arg5;
- (void)observer:(id)arg1 noteServerConnectionStateChanged:(bool)arg2;
- (id)recentNotifications;

@end
