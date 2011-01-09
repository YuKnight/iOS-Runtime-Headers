/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */



@interface MFRangedDataFilter : MFBaseFilterDataConsumer 
{
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    } _range;
    NSUInteger _consumedLength;
}

@property _NSRange range;

+ (id)rangedFilterWithConsumers:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
+ (id)rangedFilterWithConsumer:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;

- (void)setRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (NSInteger)appendData:(id)arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })range;

@end