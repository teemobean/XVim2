//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class DVTTableCellView;

@protocol DVTTableCellViewTitleEditingDelegate <NSObject>
- (void)titleDidChangeForTableCellView:(DVTTableCellView *)arg1;
- (struct _NSRange)initialSelectionRangeForTableCellView:(DVTTableCellView *)arg1 usingProposedRange:(struct _NSRange)arg2;

@optional
- (void)titleEditingDidAbortForTableCellView:(DVTTableCellView *)arg1;
- (BOOL)titleIsEditableForTableCellView:(DVTTableCellView *)arg1;
@end

