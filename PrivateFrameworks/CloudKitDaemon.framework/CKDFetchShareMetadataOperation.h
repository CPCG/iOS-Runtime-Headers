/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchShareMetadataOperation : CKDOperation {
    BOOL  _clientWillDisplaySystemAcceptPrompt;
    BOOL  _errorOnOON;
    BOOL  _forceDSRefetch;
    NSSet * _rootRecordDesiredKeysSet;
    id /* block */  _shareMetadataFetchedBlock;
    NSMutableDictionary * _shareTokenMetadatasToFetchByURL;
    NSMutableArray * _shareURLsToFetch;
    BOOL  _shouldFetchRootRecord;
}

@property (nonatomic) BOOL clientWillDisplaySystemAcceptPrompt;
@property (nonatomic) BOOL errorOnOON;
@property (nonatomic) BOOL forceDSRefetch;
@property (nonatomic, retain) NSSet *rootRecordDesiredKeysSet;
@property (nonatomic, copy) id /* block */ shareMetadataFetchedBlock;
@property (nonatomic, retain) NSMutableDictionary *shareTokenMetadatasToFetchByURL;
@property (nonatomic, retain) NSMutableArray *shareURLsToFetch;
@property (nonatomic) BOOL shouldFetchRootRecord;

- (void).cxx_destruct;
- (id)_decodeProtectedFullToken:(id)arg1 tokenMetadata:(id)arg2;
- (void)_fetchShortTokenMetadata;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_performCallbackAfterFetchingRootRecordForURL:(id)arg1 withMetadata:(id)arg2;
- (void)_performCallbackForURL:(id)arg1 withMetadata:(id)arg2 error:(id)arg3;
- (void)_prepareShortTokens;
- (id)activityCreate;
- (BOOL)clientWillDisplaySystemAcceptPrompt;
- (BOOL)errorOnOON;
- (BOOL)forceDSRefetch;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (BOOL)makeStateTransition;
- (id)nameForState:(unsigned int)arg1;
- (id)rootRecordDesiredKeysSet;
- (void)setClientWillDisplaySystemAcceptPrompt:(BOOL)arg1;
- (void)setErrorOnOON:(BOOL)arg1;
- (void)setForceDSRefetch:(BOOL)arg1;
- (void)setRootRecordDesiredKeysSet:(id)arg1;
- (void)setShareMetadataFetchedBlock:(id /* block */)arg1;
- (void)setShareTokenMetadatasToFetchByURL:(id)arg1;
- (void)setShareURLsToFetch:(id)arg1;
- (void)setShouldFetchRootRecord:(BOOL)arg1;
- (id /* block */)shareMetadataFetchedBlock;
- (id)shareTokenMetadatasToFetchByURL;
- (id)shareURLsToFetch;
- (BOOL)shouldFetchRootRecord;

@end
