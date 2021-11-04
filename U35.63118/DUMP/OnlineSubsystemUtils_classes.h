// Class OnlineSubsystemUtils.IpConnection
// Size: 0x1ad0 (Inherited: 0x1a30)
struct UIpConnection : UNetConnection {
	float SocketErrorDisconnectDelay; // 0x1a80(0x04)
};

// Class OnlineSubsystemUtils.IpNetDriver
// Size: 0x7b8 (Inherited: 0x748)
struct UIpNetDriver : UNetDriver {
	char LogPortUnreach : 1; // 0x748(0x01)
	char AllowPlayerPortUnreach : 1; // 0x748(0x01)
	uint32_t MaxPortCountToTry; // 0x74c(0x04)
	uint32_t ServerDesiredSocketReceiveBufferBytes; // 0x75c(0x04)
	uint32_t ServerDesiredSocketSendBufferBytes; // 0x760(0x04)
	uint32_t ClientDesiredSocketReceiveBufferBytes; // 0x764(0x04)
	uint32_t ClientDesiredSocketSendBufferBytes; // 0x768(0x04)
	double MaxSecondsInReceive; // 0x770(0x08)
	int32_t NbPacketsBetweenReceiveTimeTest; // 0x778(0x04)
	float ResolutionConnectionTimeout; // 0x77c(0x04)
};

// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAchievementBlueprintLibrary : UBlueprintFunctionLibrary {

	void GetCachedAchievementProgress(UObject* WorldContextObject, APlayerController* PlayerController, FName AchievementID, bool bFoundID, float Progress);
	void GetCachedAchievementDescription(UObject* WorldContextObject, APlayerController* PlayerController, FName AchievementID, bool bFoundID, FText Title, FText LockedDescription, FText UnlockedDescription, bool bHidden);
};

// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
// Size: 0x68 (Inherited: 0x30)
struct UAchievementQueryCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	FMulticastInlineDelegate OnFailure; // 0x40(0x10)

	UAchievementQueryCallbackProxy* CacheAchievements(UObject* WorldContextObject, APlayerController* PlayerController);
	UAchievementQueryCallbackProxy* CacheAchievementDescriptions(UObject* WorldContextObject, APlayerController* PlayerController);
};

// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
// Size: 0x80 (Inherited: 0x30)
struct UAchievementWriteCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	FMulticastInlineDelegate OnFailure; // 0x40(0x10)

	UAchievementWriteCallbackProxy* WriteAchievementProgress(UObject* WorldContextObject, APlayerController* PlayerController, FName AchievementName, float Progress, int32_t UserTag);
};

// Class OnlineSubsystemUtils.ConnectionCallbackProxy
// Size: 0x78 (Inherited: 0x30)
struct UConnectionCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	FMulticastInlineDelegate OnFailure; // 0x40(0x10)

	UConnectionCallbackProxy* ConnectToService(UObject* WorldContextObject, APlayerController* PlayerController);
};

// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
// Size: 0x98 (Inherited: 0x30)
struct UCreateSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	FMulticastInlineDelegate OnFailure; // 0x40(0x10)

	UCreateSessionCallbackProxy* CreateSession(UObject* WorldContextObject, APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN);
};

// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
// Size: 0x78 (Inherited: 0x30)
struct UDestroySessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	FMulticastInlineDelegate OnFailure; // 0x40(0x10)

	UDestroySessionCallbackProxy* DestroySession(UObject* WorldContextObject, APlayerController* PlayerController);
};

// Class OnlineSubsystemUtils.EndMatchCallbackProxy
// Size: 0x80 (Inherited: 0x30)
struct UEndMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	FMulticastInlineDelegate OnFailure; // 0x40(0x10)

	UEndMatchCallbackProxy* EndMatch(UObject* WorldContextObject, APlayerController* PlayerController, TScriptInterface<ITurnBasedMatchInterface> MatchActor, FString MatchID, enum class EMPMatchOutcome LocalPlayerOutcome, enum class EMPMatchOutcome OtherPlayersOutcome);
};

// Class OnlineSubsystemUtils.EndTurnCallbackProxy
// Size: 0x78 (Inherited: 0x30)
struct UEndTurnCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	FMulticastInlineDelegate OnFailure; // 0x40(0x10)

	UEndTurnCallbackProxy* EndTurn(UObject* WorldContextObject, APlayerController* PlayerController, FString MatchID, TScriptInterface<ITurnBasedMatchInterface> TurnBasedMatchInterface);
};

// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
// Size: 0x90 (Inherited: 0x30)
struct UFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	FMulticastInlineDelegate OnFailure; // 0x40(0x10)

	FString GetServerName(FBlueprintSessionResult Result);
	int32_t GetPingInMs(FBlueprintSessionResult Result);
	int32_t GetMaxPlayers(FBlueprintSessionResult Result);
	int32_t GetCurrentPlayers(FBlueprintSessionResult Result);
	UFindSessionsCallbackProxy* FindSessions(UObject* WorldContextObject, APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN);
};

// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// Size: 0x88 (Inherited: 0x30)
struct UFindTurnBasedMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	FMulticastInlineDelegate OnFailure; // 0x40(0x10)

	UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(UObject* WorldContextObject, APlayerController* PlayerController, TScriptInterface<ITurnBasedMatchInterface> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches);
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
// Size: 0x80 (Inherited: 0x28)
struct UInAppPurchaseCallbackProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	FMulticastInlineDelegate OnFailure; // 0x38(0x10)

	UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(APlayerController* PlayerController, FInAppPurchaseProductRequest ProductRequest);
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
// Size: 0xa8 (Inherited: 0x28)
struct UInAppPurchaseCallbackProxy2 : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	FMulticastInlineDelegate OnFailure; // 0x38(0x10)

	UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(APlayerController* PlayerController);
	UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(APlayerController* PlayerController);
	UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(APlayerController* PlayerController, FInAppPurchaseProductRequest2 ProductRequest);
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
// Size: 0x90 (Inherited: 0x28)
struct UInAppPurchaseQueryCallbackProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	FMulticastInlineDelegate OnFailure; // 0x38(0x10)

	UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(APlayerController* PlayerController, TArray<FString> ProductIdentifiers);
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
// Size: 0x68 (Inherited: 0x28)
struct UInAppPurchaseQueryCallbackProxy2 : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	FMulticastInlineDelegate OnFailure; // 0x38(0x10)

	UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(APlayerController* PlayerController, TArray<FString> ProductIdentifiers);
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
// Size: 0x90 (Inherited: 0x28)
struct UInAppPurchaseRestoreCallbackProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	FMulticastInlineDelegate OnFailure; // 0x38(0x10)

	UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(TArray<FInAppPurchaseProductRequest> ConsumableProductFlags, APlayerController* PlayerController);
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
// Size: 0xa8 (Inherited: 0x28)
struct UInAppPurchaseRestoreCallbackProxy2 : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	FMulticastInlineDelegate OnFailure; // 0x38(0x10)

	UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(TArray<FInAppPurchaseProductRequest2> ConsumableProductFlags, APlayerController* PlayerController);
};

// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
// Size: 0x180 (Inherited: 0x30)
struct UJoinSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	FMulticastInlineDelegate OnFailure; // 0x40(0x10)

	UJoinSessionCallbackProxy* JoinSession(UObject* WorldContextObject, APlayerController* PlayerController, FBlueprintSessionResult SearchResult);
};

// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULeaderboardBlueprintLibrary : UBlueprintFunctionLibrary {

	bool WriteLeaderboardInteger(APlayerController* PlayerController, FName StatName, int32_t StatValue);
};

// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// Size: 0x68 (Inherited: 0x28)
struct ULeaderboardFlushCallbackProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	FMulticastInlineDelegate OnFailure; // 0x38(0x10)

	ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(APlayerController* PlayerController, FName SessionName);
};

// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// Size: 0x98 (Inherited: 0x28)
struct ULeaderboardQueryCallbackProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	FMulticastInlineDelegate OnFailure; // 0x38(0x10)

	ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(APlayerController* PlayerController, FName StatName);
};

// Class OnlineSubsystemUtils.LogoutCallbackProxy
// Size: 0x68 (Inherited: 0x30)
struct ULogoutCallbackProxy : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	FMulticastInlineDelegate OnFailure; // 0x40(0x10)

	ULogoutCallbackProxy* Logout(UObject* WorldContextObject, APlayerController* PlayerController);
};

// Class OnlineSubsystemUtils.OnlineBeacon
// Size: 0x250 (Inherited: 0x220)
struct AOnlineBeacon : AActor {
	float BeaconConnectionInitialTimeout; // 0x228(0x04)
	float BeaconConnectionTimeout; // 0x22c(0x04)
	UNetDriver* NetDriver; // 0x230(0x08)
};

// Class OnlineSubsystemUtils.OnlineBeaconClient
// Size: 0x2b0 (Inherited: 0x250)
struct AOnlineBeaconClient : AOnlineBeacon {
	AOnlineBeaconHostObject* BeaconOwner; // 0x250(0x08)
	UNetConnection* BeaconConnection; // 0x258(0x08)
	enum class EBeaconConnectionState ConnectionState; // 0x260(0x01)

	void ClientOnConnected();
};

// Class OnlineSubsystemUtils.OnlineBeaconHost
// Size: 0x308 (Inherited: 0x250)
struct AOnlineBeaconHost : AOnlineBeacon {
	int32_t ListenPort; // 0x250(0x04)
	TArray<AOnlineBeaconClient*> ClientActors; // 0x258(0x10)
};

// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// Size: 0x248 (Inherited: 0x220)
struct AOnlineBeaconHostObject : AActor {
	FString BeaconTypeName; // 0x220(0x10)
	AOnlineBeaconClient* ClientBeaconActorClass; // 0x230(0x08)
	TArray<AOnlineBeaconClient*> ClientActors; // 0x238(0x10)
};

// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// Size: 0x188 (Inherited: 0x28)
struct UOnlineEngineInterfaceImpl : UOnlineEngineInterface {
	TMap<FName, FName> MappedUniqueNetIdTypes; // 0x28(0x50)
	TArray<FName> CompatibleUniqueNetIdTypes; // 0x78(0x10)
	FName VoiceSubsystemNameOverride; // 0x88(0x08)
};

// Class OnlineSubsystemUtils.OnlinePIESettings
// Size: 0x50 (Inherited: 0x38)
struct UOnlinePIESettings : UDeveloperSettings {
	bool bOnlinePIEEnabled; // 0x38(0x01)
	TArray<FPIELoginSettingsInternal> Logins; // 0x40(0x10)
};

// Class OnlineSubsystemUtils.OnlineSessionClient
// Size: 0x1e0 (Inherited: 0x28)
struct UOnlineSessionClient : UOnlineSession {
	bool bIsFromInvite; // 0x1d8(0x01)
	bool bHandlingDisconnect; // 0x1d9(0x01)
};

// Class OnlineSubsystemUtils.PartyBeaconClient
// Size: 0x370 (Inherited: 0x2b0)
struct APartyBeaconClient : AOnlineBeaconClient {
	FString DestSessionId; // 0x2e0(0x10)
	FPartyReservation PendingReservation; // 0x2f0(0x50)
	enum class EClientRequestType requestType; // 0x340(0x01)
	bool bPendingReservationSent; // 0x341(0x01)
	bool bCancelReservation; // 0x342(0x01)

	void ServerUpdateReservationRequest(FString sessionId, FPartyReservation ReservationUpdate);
	void ServerReservationRequest(FString sessionId, FPartyReservation Reservation);
	void ServerRemoveMemberFromReservationRequest(FString sessionId, FPartyReservation ReservationUpdate);
	void ServerCancelReservationRequest(FUniqueNetIdRepl PartyLeader);
	void ClientSendReservationUpdates(int32_t NumRemainingReservations);
	void ClientSendReservationFull();
	void ClientReservationResponse(enum class EPartyReservationResult ReservationResponse);
	void ClientCancelReservationResponse(enum class EPartyReservationResult ReservationResponse);
};

// Class OnlineSubsystemUtils.PartyBeaconHost
// Size: 0x2c0 (Inherited: 0x248)
struct APartyBeaconHost : AOnlineBeaconHostObject {
	UPartyBeaconState* State; // 0x248(0x08)
	bool bLogoutOnSessionTimeout; // 0x2b0(0x01)
	float SessionTimeoutSecs; // 0x2b4(0x04)
	float TravelSessionTimeoutSecs; // 0x2b8(0x04)
};

// Class OnlineSubsystemUtils.PartyBeaconState
// Size: 0x78 (Inherited: 0x28)
struct UPartyBeaconState : UObject {
	FName SessionName; // 0x28(0x08)
	int32_t NumConsumedReservations; // 0x30(0x04)
	int32_t MaxReservations; // 0x34(0x04)
	int32_t NumTeams; // 0x38(0x04)
	int32_t NumPlayersPerTeam; // 0x3c(0x04)
	FName TeamAssignmentMethod; // 0x40(0x08)
	int32_t ReservedHostTeamNum; // 0x48(0x04)
	int32_t ForceTeamNum; // 0x4c(0x04)
	bool bRestrictCrossConsole; // 0x50(0x01)
	bool bEnableRemovalRequests; // 0x51(0x01)
	TArray<FPartyReservation> Reservations; // 0x58(0x10)
};

// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
// Size: 0x78 (Inherited: 0x30)
struct UQuitMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	FMulticastInlineDelegate OnFailure; // 0x40(0x10)

	UQuitMatchCallbackProxy* QuitMatch(UObject* WorldContextObject, APlayerController* PlayerController, FString MatchID, enum class EMPMatchOutcome Outcome, int32_t TurnTimeoutInSeconds);
};

// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
// Size: 0x60 (Inherited: 0x30)
struct UShowLoginUICallbackProxy : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	FMulticastInlineDelegate OnFailure; // 0x40(0x10)

	UShowLoginUICallbackProxy* ShowExternalLoginUI(UObject* WorldContextObject, APlayerController* InPlayerController);
};

// Class OnlineSubsystemUtils.SpectatorBeaconClient
// Size: 0x398 (Inherited: 0x2b0)
struct ASpectatorBeaconClient : AOnlineBeaconClient {
	FString DestSessionId; // 0x2e0(0x10)
	FSpectatorReservation PendingReservation; // 0x2f0(0x78)
	enum class ESpectatorClientRequestType requestType; // 0x368(0x01)
	bool bPendingReservationSent; // 0x369(0x01)
	bool bCancelReservation; // 0x36a(0x01)

	void ServerReservationRequest(FString sessionId, FSpectatorReservation Reservation);
	void ServerCancelReservationRequest(FUniqueNetIdRepl Spectator);
	void ClientSendReservationUpdates(int32_t NumRemainingReservations);
	void ClientSendReservationFull();
	void ClientReservationResponse(enum class ESpectatorReservationResult ReservationResponse);
	void ClientCancelReservationResponse(enum class ESpectatorReservationResult ReservationResponse);
};

// Class OnlineSubsystemUtils.SpectatorBeaconHost
// Size: 0x2c0 (Inherited: 0x248)
struct ASpectatorBeaconHost : AOnlineBeaconHostObject {
	USpectatorBeaconState* State; // 0x248(0x08)
	bool bLogoutOnSessionTimeout; // 0x2b0(0x01)
	float SessionTimeoutSecs; // 0x2b4(0x04)
	float TravelSessionTimeoutSecs; // 0x2b8(0x04)
};

// Class OnlineSubsystemUtils.SpectatorBeaconState
// Size: 0x60 (Inherited: 0x28)
struct USpectatorBeaconState : UObject {
	FName SessionName; // 0x28(0x08)
	int32_t NumConsumedReservations; // 0x30(0x04)
	int32_t MaxReservations; // 0x34(0x04)
	bool bRestrictCrossConsole; // 0x38(0x01)
	TArray<FSpectatorReservation> Reservations; // 0x40(0x10)
};

// Class OnlineSubsystemUtils.TestBeaconClient
// Size: 0x2b0 (Inherited: 0x2b0)
struct ATestBeaconClient : AOnlineBeaconClient {

	void ServerPong();
	void ClientPing();
};

// Class OnlineSubsystemUtils.TestBeaconHost
// Size: 0x248 (Inherited: 0x248)
struct ATestBeaconHost : AOnlineBeaconHostObject {
};

// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTurnBasedBlueprintLibrary : UBlueprintFunctionLibrary {

	void RegisterTurnBasedMatchInterfaceObject(UObject* WorldContextObject, APlayerController* PlayerController, UObject* Object);
	void GetPlayerDisplayName(UObject* WorldContextObject, APlayerController* PlayerController, FString MatchID, int32_t PlayerIndex, FString PlayerDisplayName);
	void GetMyPlayerIndex(UObject* WorldContextObject, APlayerController* PlayerController, FString MatchID, int32_t PlayerIndex);
	void GetIsMyTurn(UObject* WorldContextObject, APlayerController* PlayerController, FString MatchID, bool bIsMyTurn);
};

// Class OnlineSubsystemUtils.VoipListenerSynthComponent
// Size: 0x730 (Inherited: 0x6d0)
struct UVoipListenerSynthComponent : USynthComponent {

	bool IsIdling();
};

