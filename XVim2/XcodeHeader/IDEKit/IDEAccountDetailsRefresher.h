//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTDeveloperAccount, DVTStackBacktrace, NSString;
@protocol IDEAccountDetailsRefresherDelegate;

@interface IDEAccountDetailsRefresher : NSObject <DVTInvalidation>
{
    id <IDEAccountDetailsRefresherDelegate> _delegate;
    DVTDeveloperAccount *_developerAccount;
}

+ (void)initialize;
@property(readonly, nonatomic) DVTDeveloperAccount *developerAccount; // @synthesize developerAccount=_developerAccount;
@property(readonly, nonatomic) id <IDEAccountDetailsRefresherDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)_logAspect;
- (void)start;
- (id)initWithDelegate:(id)arg1 developerAccount:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
