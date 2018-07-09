/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCoreAudioCaptureSourceIOSListener : NSObject {
    struct CoreAudioCaptureSourceIOS { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; bool x3; struct WeakPtrFactory<WebCore::RealtimeMediaSource> { struct RefPtr<WTF::WeakReference<WebCore::RealtimeMediaSource>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::RealtimeMediaSource> > > { struct WeakReference<WebCore::RealtimeMediaSource> {} *x_1_2_1; } x_4_1_1; } x4; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_5_1_1; } x5; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_6_1_1; } x6; int x7; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_8_1_1; } x8; struct Vector<std::__1::reference_wrapper<WebCore::RealtimeMediaSource::Observer>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct reference_wrapper<WebCore::RealtimeMediaSource::Observer> {} *x_9_1_1; unsigned int x_9_1_2; unsigned int x_9_1_3; unsigned int x_9_1_4; } x9; } * _callback;
}

- (void)handleInterruption:(id)arg1;
- (id)initWithCallback:(struct CoreAudioCaptureSourceIOS { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; bool x3; struct WeakPtrFactory<WebCore::RealtimeMediaSource> { struct RefPtr<WTF::WeakReference<WebCore::RealtimeMediaSource>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::RealtimeMediaSource> > > { struct WeakReference<WebCore::RealtimeMediaSource> {} *x_1_2_1; } x_4_1_1; } x4; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_5_1_1; } x5; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_6_1_1; } x6; int x7; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_8_1_1; } x8; struct Vector<std::__1::reference_wrapper<WebCore::RealtimeMediaSource::Observer>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct reference_wrapper<WebCore::RealtimeMediaSource::Observer> {} *x_9_1_1; unsigned int x_9_1_2; unsigned int x_9_1_3; unsigned int x_9_1_4; } x9; }*)arg1;
- (void)invalidate;
- (void)sessionMediaServicesWereReset:(id)arg1;

@end