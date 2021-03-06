//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/DVTAccountBasedSession-Protocol.h>

@class DVTDeveloperAccount, DVTDeveloperAccountSession, DVTDispatchLock, DVTLogAspect, NSData, NSNumber, NSString;
@protocol DVTDeveloperPortalDefaultsProtocol;

@interface DVTServicesAccountBasedSession : NSObject <DVTAccountBasedSession>
{
    id _wrappingLogHandlerToken;
    DVTServicesAccountBasedSession *_parentSession;
    DVTDispatchLock *_sessionIDLock;
    DVTLogAspect *_backingLogAspect;
    DVTDeveloperAccount *_account;
    long long _executionContext;
    id <DVTDeveloperPortalDefaultsProtocol> _defaults;
    NSString *_portalSessionID;
    DVTLogAspect *_logAspect;
    DVTDeveloperAccountSession *_accountSession;
}

+ (id)_servicesSessionErrorFromAccountError:(id)arg1 account:(id)arg2;
+ (id)servicesSessionWithDeveloperAccountSession:(id)arg1 executionContext:(long long)arg2;
+ (id)sessionForAuthenticatingAccount:(id)arg1;
+ (id)servicesSessionByLoggingInWithAccount:(id)arg1 executionContext:(long long)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) DVTDeveloperAccountSession *accountSession; // @synthesize accountSession=_accountSession;
@property(retain, nonatomic) DVTLogAspect *logAspect; // @synthesize logAspect=_logAspect;
@property(readonly, nonatomic) id <DVTDeveloperPortalDefaultsProtocol> defaults; // @synthesize defaults=_defaults;
@property(readonly) long long executionContext; // @synthesize executionContext=_executionContext;
@property(readonly) DVTDeveloperAccount *account; // @synthesize account=_account;
@property(readonly, copy) NSString *description;
@property(readonly) NSString *portalServiceHostname;
- (void)updateWithResponseHeaders:(id)arg1;
- (id)authenticationHeadersForRequest:(id)arg1;
- (void)_clearWrappingLogAspect;
- (void)_setWrappingLogAspect:(id)arg1;
@property(readonly) NSData *sessionData;
@property(copy, nonatomic) NSString *portalSessionID; // @synthesize portalSessionID=_portalSessionID;
@property(readonly) NSString *sessionID;
@property(readonly) NSNumber *portalServicePort;
@property(readonly) NSString *portalServiceScheme;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 accountSession:(id)arg2 parentSession:(id)arg3 executionContext:(long long)arg4 logAspect:(id)arg5;
- (id)sessionWithAdditionalLogAspect:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

