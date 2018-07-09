/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@interface OBPrivacySplashListView : UIStackView {
    bool  _darkMode;
    UITextView * _footerTextView;
    NSMutableArray * _stackedIconTextLists;
    NSMutableArray * _textViews;
}

@property (getter=isDarkMode, nonatomic) bool darkMode;
@property (nonatomic, readonly) UITextView *footerTextView;
@property (nonatomic, retain) NSMutableArray *stackedIconTextLists;
@property (nonatomic, retain) NSMutableArray *textViews;

- (void).cxx_destruct;
- (id)footerTextView;
- (id)initWithContentList:(id)arg1 dataDetectorTypes:(unsigned long long)arg2;
- (id)initWithContentList:(id)arg1 dataDetectorTypes:(unsigned long long)arg2 displayingPrivacyPane:(bool)arg3;
- (bool)isDarkMode;
- (void)setDarkMode:(bool)arg1;
- (void)setStackedIconTextLists:(id)arg1;
- (void)setTextViews:(id)arg1;
- (id)stackedIconTextLists;
- (id)textViews;

@end