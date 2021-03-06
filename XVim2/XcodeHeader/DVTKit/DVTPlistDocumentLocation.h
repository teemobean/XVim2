//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTDocumentLocation.h>

@class DVTPlistModel, DVTPlistSelection;

@interface DVTPlistDocumentLocation : DVTDocumentLocation
{
    DVTPlistModel *_model;
    DVTPlistSelection *_selection;
    BOOL _pointsBackwards;
}

- (void).cxx_destruct;
@property BOOL pointsBackwards; // @synthesize pointsBackwards=_pointsBackwards;
@property(readonly) DVTPlistModel *model; // @synthesize model=_model;
@property(readonly) DVTPlistSelection *selection; // @synthesize selection=_selection;
- (long long)compare:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 model:(id)arg3 selection:(id)arg4;

@end

