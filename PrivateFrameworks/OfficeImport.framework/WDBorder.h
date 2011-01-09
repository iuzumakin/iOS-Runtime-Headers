/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSColorStub;



@interface WDBorder : NSObject <NSCopying>
{
    NSInteger mStyle;
    NSColorStub *mColor;
    unsigned char mWidth;
    unsigned char mSpace;
    BOOL mShadow;
    BOOL mFrame;
}


- (void)setNullBorder;
- (void)setSingleBlackBorder;
- (BOOL)shadow;
- (void)setShadow:(BOOL)arg1;
- (BOOL)isEqualToBorder:(id)arg1;
- (void)setSpace:(unsigned char)arg1;
- (unsigned char)space;
- (id)color;
- (void)setColor:(id)arg1;
- (unsigned char)width;
- (void)setWidth:(unsigned char)arg1;
- (NSInteger)style;
- (void)setStyle:(NSInteger)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (BOOL)frame;
- (void)dealloc;
- (void)setFrame:(BOOL)arg1;
- (void)setBorder:(id)arg1;

@end