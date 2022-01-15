#ifndef UE4SS_SDK_OnlineSubsystemUtils_HPP
#define UE4SS_SDK_OnlineSubsystemUtils_HPP

#include "OnlineSubsystemUtils_enums.hpp"

class UIpConnection : UNetConnection
{
    float SocketErrorDisconnectDelay;
}

class UIpNetDriver : UNetDriver
{
    uint8 LogPortUnreach;
    uint8 AllowPlayerPortUnreach;
    uint32 MaxPortCountToTry;
    uint32 ServerDesiredSocketReceiveBufferBytes;
    uint32 ServerDesiredSocketSendBufferBytes;
    uint32 ClientDesiredSocketReceiveBufferBytes;
    uint32 ClientDesiredSocketSendBufferBytes;
    double MaxSecondsInReceive;
    int32 NbPacketsBetweenReceiveTimeTest;
    float ResolutionConnectionTimeout;
}

class UAchievementBlueprintLibrary : UBlueprintFunctionLibrary
{

    void GetCachedAchievementProgress(UObject* WorldContextObject, UPlayerController* PlayerController, FName AchievementID, bool& bFoundID, float& Progress);
    void GetCachedAchievementDescription(UObject* WorldContextObject, UPlayerController* PlayerController, FName AchievementID, bool& bFoundID, FText& Title, FText& LockedDescription, FText& UnlockedDescription, bool& bHidden);
}

class UAchievementQueryCallbackProxy : UOnlineBlueprintCallProxyBase
{
    FAchievementQueryCallbackProxyOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FAchievementQueryCallbackProxyOnFailure OnFailure;
    void EmptyOnlineDelegate();

    UAchievementQueryCallbackProxy* CacheAchievements(UObject* WorldContextObject, UPlayerController* PlayerController);
    UAchievementQueryCallbackProxy* CacheAchievementDescriptions(UObject* WorldContextObject, UPlayerController* PlayerController);
}

class UAchievementWriteCallbackProxy : UOnlineBlueprintCallProxyBase
{
    FAchievementWriteCallbackProxyOnSuccess OnSuccess;
    void AchievementWriteDelegate(FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag);
    FAchievementWriteCallbackProxyOnFailure OnFailure;
    void AchievementWriteDelegate(FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag);

    UAchievementWriteCallbackProxy* WriteAchievementProgress(UObject* WorldContextObject, UPlayerController* PlayerController, FName AchievementName, float Progress, int32 UserTag);
}

class UConnectionCallbackProxy : UOnlineBlueprintCallProxyBase
{
    FConnectionCallbackProxyOnSuccess OnSuccess;
    void OnlineConnectionResult(int32 ErrorCode);
    FConnectionCallbackProxyOnFailure OnFailure;
    void OnlineConnectionResult(int32 ErrorCode);

    UConnectionCallbackProxy* ConnectToService(UObject* WorldContextObject, UPlayerController* PlayerController);
}

class UCreateSessionCallbackProxy : UOnlineBlueprintCallProxyBase
{
    FCreateSessionCallbackProxyOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FCreateSessionCallbackProxyOnFailure OnFailure;
    void EmptyOnlineDelegate();

    UCreateSessionCallbackProxy* CreateSession(UObject* WorldContextObject, UPlayerController* PlayerController, int32 PublicConnections, bool bUseLAN);
}

class UDestroySessionCallbackProxy : UOnlineBlueprintCallProxyBase
{
    FDestroySessionCallbackProxyOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FDestroySessionCallbackProxyOnFailure OnFailure;
    void EmptyOnlineDelegate();

    UDestroySessionCallbackProxy* DestroySession(UObject* WorldContextObject, UPlayerController* PlayerController);
}

class UEndMatchCallbackProxy : UOnlineBlueprintCallProxyBase
{
    FEndMatchCallbackProxyOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FEndMatchCallbackProxyOnFailure OnFailure;
    void EmptyOnlineDelegate();

    UEndMatchCallbackProxy* EndMatch(UObject* WorldContextObject, UPlayerController* PlayerController, InterfaceProperty MatchActor, FString MatchID, uint8 LocalPlayerOutcome, uint8 OtherPlayersOutcome);
}

class UEndTurnCallbackProxy : UOnlineBlueprintCallProxyBase
{
    FEndTurnCallbackProxyOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FEndTurnCallbackProxyOnFailure OnFailure;
    void EmptyOnlineDelegate();

    UEndTurnCallbackProxy* EndTurn(UObject* WorldContextObject, UPlayerController* PlayerController, FString MatchID, InterfaceProperty TurnBasedMatchInterface);
}

class UFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase
{
    FFindSessionsCallbackProxyOnSuccess OnSuccess;
    void BlueprintFindSessionsResultDelegate(const TArray<FBlueprintSessionResult>& Results);
    FFindSessionsCallbackProxyOnFailure OnFailure;
    void BlueprintFindSessionsResultDelegate(const TArray<FBlueprintSessionResult>& Results);

    FString GetServerName(const FBlueprintSessionResult& Result);
    int32 GetPingInMs(const FBlueprintSessionResult& Result);
    int32 GetMaxPlayers(const FBlueprintSessionResult& Result);
    int32 GetCurrentPlayers(const FBlueprintSessionResult& Result);
    UFindSessionsCallbackProxy* FindSessions(UObject* WorldContextObject, UPlayerController* PlayerController, int32 MaxResults, bool bUseLAN);
}

class UFindTurnBasedMatchCallbackProxy : UOnlineBlueprintCallProxyBase
{
    FFindTurnBasedMatchCallbackProxyOnSuccess OnSuccess;
    void OnlineTurnBasedMatchResult(FString MatchID);
    FFindTurnBasedMatchCallbackProxyOnFailure OnFailure;
    void OnlineTurnBasedMatchResult(FString MatchID);

    UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(UObject* WorldContextObject, UPlayerController* PlayerController, InterfaceProperty MatchActor, int32 MinPlayers, int32 MaxPlayers, int32 PlayerGroup, bool ShowExistingMatches);
}

class UInAppPurchaseCallbackProxy : UObject
{
    FInAppPurchaseCallbackProxyOnSuccess OnSuccess;
    void InAppPurchaseResult(uint8 PurchaseStatus, const FInAppPurchaseProductInfo& InAppPurchaseReceipts);
    FInAppPurchaseCallbackProxyOnFailure OnFailure;
    void InAppPurchaseResult(uint8 PurchaseStatus, const FInAppPurchaseProductInfo& InAppPurchaseReceipts);

    UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(UPlayerController* PlayerController, const FInAppPurchaseProductRequest& ProductRequest);
}

class UInAppPurchaseCallbackProxy2 : UObject
{
    FInAppPurchaseCallbackProxy2OnSuccess OnSuccess;
    void InAppPurchaseResult2(EInAppPurchaseStatus PurchaseStatus, const TArray<FInAppPurchaseReceiptInfo2>& InAppPurchaseReceipts);
    FInAppPurchaseCallbackProxy2OnFailure OnFailure;
    void InAppPurchaseResult2(EInAppPurchaseStatus PurchaseStatus, const TArray<FInAppPurchaseReceiptInfo2>& InAppPurchaseReceipts);

    UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(UPlayerController* PlayerController);
    UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(UPlayerController* PlayerController);
    UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(UPlayerController* PlayerController, const FInAppPurchaseProductRequest2& ProductRequest);
}

class UInAppPurchaseQueryCallbackProxy : UObject
{
    FInAppPurchaseQueryCallbackProxyOnSuccess OnSuccess;
    void InAppPurchaseQueryResult(const TArray<FInAppPurchaseProductInfo>& InAppPurchaseInformation);
    FInAppPurchaseQueryCallbackProxyOnFailure OnFailure;
    void InAppPurchaseQueryResult(const TArray<FInAppPurchaseProductInfo>& InAppPurchaseInformation);

    UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(UPlayerController* PlayerController, const TArray<FString>& ProductIdentifiers);
}

class UInAppPurchaseQueryCallbackProxy2 : UObject
{
    FInAppPurchaseQueryCallbackProxy2OnSuccess OnSuccess;
    void InAppPurchaseQuery2Result(const TArray<FOnlineProxyStoreOffer>& InAppOfferInformation);
    FInAppPurchaseQueryCallbackProxy2OnFailure OnFailure;
    void InAppPurchaseQuery2Result(const TArray<FOnlineProxyStoreOffer>& InAppOfferInformation);

    UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(UPlayerController* PlayerController, const TArray<FString>& ProductIdentifiers);
}

class UInAppPurchaseRestoreCallbackProxy : UObject
{
    FInAppPurchaseRestoreCallbackProxyOnSuccess OnSuccess;
    void InAppPurchaseRestoreResult(uint8 CompletionStatus, const TArray<FInAppPurchaseRestoreInfo>& InAppRestorePurchaseInformation);
    FInAppPurchaseRestoreCallbackProxyOnFailure OnFailure;
    void InAppPurchaseRestoreResult(uint8 CompletionStatus, const TArray<FInAppPurchaseRestoreInfo>& InAppRestorePurchaseInformation);

    UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(const TArray<FInAppPurchaseProductRequest>& ConsumableProductFlags, UPlayerController* PlayerController);
}

class UInAppPurchaseRestoreCallbackProxy2 : UObject
{
    FInAppPurchaseRestoreCallbackProxy2OnSuccess OnSuccess;
    void InAppPurchaseRestoreResult2(EInAppPurchaseStatus PurchaseStatus, const TArray<FInAppPurchaseRestoreInfo2>& InAppPurchaseRestoreInfo);
    FInAppPurchaseRestoreCallbackProxy2OnFailure OnFailure;
    void InAppPurchaseRestoreResult2(EInAppPurchaseStatus PurchaseStatus, const TArray<FInAppPurchaseRestoreInfo2>& InAppPurchaseRestoreInfo);

    UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(const TArray<FInAppPurchaseProductRequest2>& ConsumableProductFlags, UPlayerController* PlayerController);
}

class UJoinSessionCallbackProxy : UOnlineBlueprintCallProxyBase
{
    FJoinSessionCallbackProxyOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FJoinSessionCallbackProxyOnFailure OnFailure;
    void EmptyOnlineDelegate();

    UJoinSessionCallbackProxy* JoinSession(UObject* WorldContextObject, UPlayerController* PlayerController, const FBlueprintSessionResult& SearchResult);
}

class ULeaderboardBlueprintLibrary : UBlueprintFunctionLibrary
{

    bool WriteLeaderboardInteger(UPlayerController* PlayerController, FName StatName, int32 StatValue);
}

class ULeaderboardFlushCallbackProxy : UObject
{
    FLeaderboardFlushCallbackProxyOnSuccess OnSuccess;
    void OnLeaderboardFlushed(FName SessionName);
    FLeaderboardFlushCallbackProxyOnFailure OnFailure;
    void OnLeaderboardFlushed(FName SessionName);

    ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(UPlayerController* PlayerController, FName SessionName);
}

class ULeaderboardQueryCallbackProxy : UObject
{
    FLeaderboardQueryCallbackProxyOnSuccess OnSuccess;
    void LeaderboardQueryResult(int32 LeaderboardValue);
    FLeaderboardQueryCallbackProxyOnFailure OnFailure;
    void LeaderboardQueryResult(int32 LeaderboardValue);

    ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(UPlayerController* PlayerController, FName StatName);
}

class ULogoutCallbackProxy : UBlueprintAsyncActionBase
{
    FLogoutCallbackProxyOnSuccess OnSuccess;
    void OnlineLogoutResult(UPlayerController* PlayerController);
    FLogoutCallbackProxyOnFailure OnFailure;
    void OnlineLogoutResult(UPlayerController* PlayerController);

    ULogoutCallbackProxy* Logout(UObject* WorldContextObject, UPlayerController* PlayerController);
}

class AOnlineBeacon : AActor
{
    float BeaconConnectionInitialTimeout;
    float BeaconConnectionTimeout;
    UNetDriver* NetDriver;
}

class AOnlineBeaconClient : AOnlineBeacon
{
    AOnlineBeaconHostObject* BeaconOwner;
    UNetConnection* BeaconConnection;
    EBeaconConnectionState ConnectionState;

    void ClientOnConnected();
}

class AOnlineBeaconHost : AOnlineBeacon
{
    int32 ListenPort;
    TArray<AOnlineBeaconClient*> ClientActors;
}

class AOnlineBeaconHostObject : AActor
{
    FString BeaconTypeName;
    TSubclassOf<AOnlineBeaconClient> ClientBeaconActorClass;
    TArray<AOnlineBeaconClient*> ClientActors;
}

class UOnlineEngineInterfaceImpl : UOnlineEngineInterface
{
    TMap<FName, FName> MappedUniqueNetIdTypes;
    TArray<FName> CompatibleUniqueNetIdTypes;
    FName VoiceSubsystemNameOverride;
}

class UOnlinePIESettings : UDeveloperSettings
{
    bool bOnlinePIEEnabled;
    TArray<FPIELoginSettingsInternal> Logins;
}

class UOnlineSessionClient : UOnlineSession
{
    bool bIsFromInvite;
    bool bHandlingDisconnect;
}

class APartyBeaconClient : UOnlineBeaconClient
{
    FString DestSessionId;
    FPartyReservation PendingReservation;
    EClientRequestType requestType;
    bool bPendingReservationSent;
    bool bCancelReservation;

    void ServerUpdateReservationRequest(FString sessionId, const FPartyReservation& ReservationUpdate);
    void ServerReservationRequest(FString sessionId, const FPartyReservation& Reservation);
    void ServerRemoveMemberFromReservationRequest(FString sessionId, const FPartyReservation& ReservationUpdate);
    void ServerCancelReservationRequest(const FUniqueNetIdRepl& PartyLeader);
    void ClientSendReservationUpdates(int32 NumRemainingReservations);
    void ClientSendReservationFull();
    void ClientReservationResponse(uint8 ReservationResponse);
    void ClientCancelReservationResponse(uint8 ReservationResponse);
}

class APartyBeaconHost : AOnlineBeaconHostObject
{
    UPartyBeaconState* State;
    bool bLogoutOnSessionTimeout;
    float SessionTimeoutSecs;
    float TravelSessionTimeoutSecs;
}

class UPartyBeaconState : UObject
{
    FName SessionName;
    int32 NumConsumedReservations;
    int32 MaxReservations;
    int32 NumTeams;
    int32 NumPlayersPerTeam;
    FName TeamAssignmentMethod;
    int32 ReservedHostTeamNum;
    int32 ForceTeamNum;
    bool bRestrictCrossConsole;
    bool bEnableRemovalRequests;
    TArray<FPartyReservation> Reservations;
}

class UQuitMatchCallbackProxy : UOnlineBlueprintCallProxyBase
{
    FQuitMatchCallbackProxyOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FQuitMatchCallbackProxyOnFailure OnFailure;
    void EmptyOnlineDelegate();

    UQuitMatchCallbackProxy* QuitMatch(UObject* WorldContextObject, UPlayerController* PlayerController, FString MatchID, uint8 Outcome, int32 TurnTimeoutInSeconds);
}

class UShowLoginUICallbackProxy : UBlueprintAsyncActionBase
{
    FShowLoginUICallbackProxyOnSuccess OnSuccess;
    void OnlineShowLoginUIResult(UPlayerController* PlayerController);
    FShowLoginUICallbackProxyOnFailure OnFailure;
    void OnlineShowLoginUIResult(UPlayerController* PlayerController);

    UShowLoginUICallbackProxy* ShowExternalLoginUI(UObject* WorldContextObject, UPlayerController* InPlayerController);
}

class ASpectatorBeaconClient : UOnlineBeaconClient
{
    FString DestSessionId;
    FSpectatorReservation PendingReservation;
    ESpectatorClientRequestType requestType;
    bool bPendingReservationSent;
    bool bCancelReservation;

    void ServerReservationRequest(FString sessionId, const FSpectatorReservation& Reservation);
    void ServerCancelReservationRequest(const FUniqueNetIdRepl& Spectator);
    void ClientSendReservationUpdates(int32 NumRemainingReservations);
    void ClientSendReservationFull();
    void ClientReservationResponse(uint8 ReservationResponse);
    void ClientCancelReservationResponse(uint8 ReservationResponse);
}

class ASpectatorBeaconHost : AOnlineBeaconHostObject
{
    USpectatorBeaconState* State;
    bool bLogoutOnSessionTimeout;
    float SessionTimeoutSecs;
    float TravelSessionTimeoutSecs;
}

class USpectatorBeaconState : UObject
{
    FName SessionName;
    int32 NumConsumedReservations;
    int32 MaxReservations;
    bool bRestrictCrossConsole;
    TArray<FSpectatorReservation> Reservations;
}

class ATestBeaconClient : UOnlineBeaconClient
{

    void ServerPong();
    void ClientPing();
}

class ATestBeaconHost : AOnlineBeaconHostObject
{
}

class UTurnBasedBlueprintLibrary : UBlueprintFunctionLibrary
{

    void RegisterTurnBasedMatchInterfaceObject(UObject* WorldContextObject, UPlayerController* PlayerController, UObject* Object);
    void GetPlayerDisplayName(UObject* WorldContextObject, UPlayerController* PlayerController, FString MatchID, int32 PlayerIndex, FString& PlayerDisplayName);
    void GetMyPlayerIndex(UObject* WorldContextObject, UPlayerController* PlayerController, FString MatchID, int32& PlayerIndex);
    void GetIsMyTurn(UObject* WorldContextObject, UPlayerController* PlayerController, FString MatchID, bool& bIsMyTurn);
}

class UVoipListenerSynthComponent : USynthComponent
{

    bool IsIdling();
}

struct UBlueprintSessionResult
{
}

struct UInAppPurchaseReceiptInfo2
{
    FString ItemName;
    FString ItemID;
    FString ValidationInfo;
}

struct UOnlineProxyStoreOffer
{
    FString OfferId;
    FText Title;
    FText Description;
    FText LongDescription;
    FText RegularPriceText;
    int32 RegularPrice;
    FText PriceText;
    int32 NumericPrice;
    FString CurrencyCode;
    FDateTime ReleaseDate;
    FDateTime ExpirationDate;
    EOnlineProxyStoreOfferDiscountType DiscountType;
    TMap<FString, FString> DynamicFields;
}

struct UInAppPurchaseRestoreInfo2
{
    FString ItemName;
    FString ItemID;
    FString ValidationInfo;
}

struct UInAppPurchaseReceiptInfo
{
    FString ItemName;
    FString ItemID;
    FString ValidationInfo;
}

struct UInAppPurchaseProductInfo2
{
    FString Identifier;
    FString TransactionIdentifier;
    FString DisplayName;
    FString DisplayDescription;
    FString DisplayPrice;
    float RawPrice;
    FString CurrencyCode;
    FString CurrencySymbol;
    FString DecimalSeparator;
    FString GroupingSeparator;
    FString ReceiptData;
    TMap<FString, FString> DynamicFields;
}

struct UInAppPurchaseProductRequest2
{
    FString ProductIdentifier;
    bool bIsConsumable;
}

struct UPlayerReservation
{
    FUniqueNetIdRepl UniqueId;
    FString ValidationStr;
    FString Platform;
    bool bAllowCrossplay;
    float ElapsedTime;
}

struct UPIELoginSettingsInternal
{
    FString ID;
    FString Token;
    FString Type;
    TArray<uint8> TokenBytes;
}

struct UPartyReservation
{
    int32 TeamNum;
    FUniqueNetIdRepl PartyLeader;
    TArray<FPlayerReservation> PartyMembers;
    TArray<FPlayerReservation> RemovedPartyMembers;
}

struct USpectatorReservation
{
    FUniqueNetIdRepl SpectatorId;
    FPlayerReservation Spectator;
}

#endif
