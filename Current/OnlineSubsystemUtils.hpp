#ifndef UE4SS_SDK_OnlineSubsystemUtils_HPP
#define UE4SS_SDK_OnlineSubsystemUtils_HPP

#include "OnlineSubsystemUtils_enums.hpp"

struct FBlueprintSessionResult
{
};

struct FInAppPurchaseProductInfo2
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
    TMap<class FString, class FString> DynamicFields;

};

struct FInAppPurchaseProductRequest2
{
    FString ProductIdentifier;
    bool bIsConsumable;

};

struct FInAppPurchaseReceiptInfo
{
    FString ItemName;
    FString ItemID;
    FString ValidationInfo;

};

struct FInAppPurchaseReceiptInfo2
{
    FString ItemName;
    FString ItemID;
    FString ValidationInfo;

};

struct FInAppPurchaseRestoreInfo2
{
    FString ItemName;
    FString ItemID;
    FString ValidationInfo;

};

struct FOnlineProxyStoreOffer
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
    TMap<class FString, class FString> DynamicFields;

};

struct FPIELoginSettingsInternal
{
    FString ID;
    FString Token;
    FString Type;
    TArray<uint8> TokenBytes;

};

struct FPartyBeaconCrossplayPlatformMapping
{
    FString PlatformName;
    FString PlatformType;

};

struct FPartyReservation
{
    int32 TeamNum;
    FUniqueNetIdRepl PartyLeader;
    TArray<FPlayerReservation> PartyMembers;
    TArray<FPlayerReservation> RemovedPartyMembers;

};

struct FPlayerReservation
{
    FUniqueNetIdRepl UniqueId;
    FString ValidationStr;
    FString Platform;
    bool bAllowCrossplay;
    float ElapsedTime;

};

struct FSpectatorReservation
{
    FUniqueNetIdRepl SpectatorId;
    FPlayerReservation Spectator;

};

class AOnlineBeacon : public AActor
{
    float BeaconConnectionInitialTimeout;
    float BeaconConnectionTimeout;
    class UNetDriver* NetDriver;

};

class AOnlineBeaconClient : public AOnlineBeacon
{
    class AOnlineBeaconHostObject* BeaconOwner;
    class UNetConnection* BeaconConnection;
    EBeaconConnectionState ConnectionState;

    void ClientOnConnected();
};

class AOnlineBeaconHost : public AOnlineBeacon
{
    int32 ListenPort;
    TArray<class AOnlineBeaconClient*> ClientActors;

};

class AOnlineBeaconHostObject : public AActor
{
    FString BeaconTypeName;
    TSubclassOf<class AOnlineBeaconClient> ClientBeaconActorClass;
    TArray<class AOnlineBeaconClient*> ClientActors;

};

class APartyBeaconClient : public AOnlineBeaconClient
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
    void ServerAddOrUpdateReservationRequest(FString sessionId, const FPartyReservation& Reservation);
    void ClientSendReservationUpdates(int32 NumRemainingReservations);
    void ClientSendReservationFull();
    void ClientReservationResponse(TEnumAsByte<EPartyReservationResult::Type> ReservationResponse);
    void ClientCancelReservationResponse(TEnumAsByte<EPartyReservationResult::Type> ReservationResponse);
};

class APartyBeaconHost : public AOnlineBeaconHostObject
{
    class UPartyBeaconState* State;
    bool bLogoutOnSessionTimeout;
    float SessionTimeoutSecs;
    float TravelSessionTimeoutSecs;

};

class ASpectatorBeaconClient : public AOnlineBeaconClient
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
    void ClientReservationResponse(TEnumAsByte<ESpectatorReservationResult::Type> ReservationResponse);
    void ClientCancelReservationResponse(TEnumAsByte<ESpectatorReservationResult::Type> ReservationResponse);
};

class ASpectatorBeaconHost : public AOnlineBeaconHostObject
{
    class USpectatorBeaconState* State;
    bool bLogoutOnSessionTimeout;
    float SessionTimeoutSecs;
    float TravelSessionTimeoutSecs;

};

class ATestBeaconClient : public AOnlineBeaconClient
{

    void ServerPong();
    void ClientPing();
};

class ATestBeaconHost : public AOnlineBeaconHostObject
{
};

class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, FName AchievementID, bool& bFoundID, float& Progress);
    void GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, FName AchievementID, bool& bFoundID, FText& Title, FText& LockedDescription, FText& UnlockedDescription, bool& bHidden);
};

class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FAchievementQueryCallbackProxyOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FAchievementQueryCallbackProxyOnFailure OnFailure;
    void EmptyOnlineDelegate();

    class UAchievementQueryCallbackProxy* CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController);
    class UAchievementQueryCallbackProxy* CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FAchievementWriteCallbackProxyOnSuccess OnSuccess;
    void AchievementWriteDelegate(FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag);
    FAchievementWriteCallbackProxyOnFailure OnFailure;
    void AchievementWriteDelegate(FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag);

    class UAchievementWriteCallbackProxy* WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, FName AchievementName, float Progress, int32 UserTag);
};

class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FConnectionCallbackProxyOnSuccess OnSuccess;
    void OnlineConnectionResult(int32 ErrorCode);
    FConnectionCallbackProxyOnFailure OnFailure;
    void OnlineConnectionResult(int32 ErrorCode);

    class UConnectionCallbackProxy* ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FCreateSessionCallbackProxyOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FCreateSessionCallbackProxyOnFailure OnFailure;
    void EmptyOnlineDelegate();

    class UCreateSessionCallbackProxy* CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int32 PublicConnections, bool bUseLAN);
};

class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FDestroySessionCallbackProxyOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FDestroySessionCallbackProxyOnFailure OnFailure;
    void EmptyOnlineDelegate();

    class UDestroySessionCallbackProxy* DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FEndMatchCallbackProxyOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FEndMatchCallbackProxyOnFailure OnFailure;
    void EmptyOnlineDelegate();

    class UEndMatchCallbackProxy* EndMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, TScriptInterface<class ITurnBasedMatchInterface> MatchActor, FString MatchID, TEnumAsByte<EMPMatchOutcome::Type> LocalPlayerOutcome, TEnumAsByte<EMPMatchOutcome::Type> OtherPlayersOutcome);
};

class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FEndTurnCallbackProxyOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FEndTurnCallbackProxyOnFailure OnFailure;
    void EmptyOnlineDelegate();

    class UEndTurnCallbackProxy* EndTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, TScriptInterface<class ITurnBasedMatchInterface> TurnBasedMatchInterface);
};

class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FFindSessionsCallbackProxyOnSuccess OnSuccess;
    void BlueprintFindSessionsResultDelegate(const TArray<FBlueprintSessionResult>& Results);
    FFindSessionsCallbackProxyOnFailure OnFailure;
    void BlueprintFindSessionsResultDelegate(const TArray<FBlueprintSessionResult>& Results);

    FString GetServerName(const FBlueprintSessionResult& Result);
    int32 GetPingInMs(const FBlueprintSessionResult& Result);
    int32 GetMaxPlayers(const FBlueprintSessionResult& Result);
    int32 GetCurrentPlayers(const FBlueprintSessionResult& Result);
    class UFindSessionsCallbackProxy* FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int32 MaxResults, bool bUseLAN);
};

class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FFindTurnBasedMatchCallbackProxyOnSuccess OnSuccess;
    void OnlineTurnBasedMatchResult(FString MatchID);
    FFindTurnBasedMatchCallbackProxyOnFailure OnFailure;
    void OnlineTurnBasedMatchResult(FString MatchID);

    class UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, TScriptInterface<class ITurnBasedMatchInterface> MatchActor, int32 MinPlayers, int32 MaxPlayers, int32 PlayerGroup, bool ShowExistingMatches);
};

class UInAppPurchaseCallbackProxy : public UObject
{
    FInAppPurchaseCallbackProxyOnSuccess OnSuccess;
    void InAppPurchaseResult(TEnumAsByte<EInAppPurchaseState::Type> PurchaseStatus, const FInAppPurchaseProductInfo& InAppPurchaseReceipts);
    FInAppPurchaseCallbackProxyOnFailure OnFailure;
    void InAppPurchaseResult(TEnumAsByte<EInAppPurchaseState::Type> PurchaseStatus, const FInAppPurchaseProductInfo& InAppPurchaseReceipts);

    class UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const FInAppPurchaseProductRequest& ProductRequest);
};

class UInAppPurchaseCallbackProxy2 : public UObject
{
    FInAppPurchaseCallbackProxy2OnSuccess OnSuccess;
    void InAppPurchaseResult2(EInAppPurchaseStatus PurchaseStatus, const TArray<FInAppPurchaseReceiptInfo2>& InAppPurchaseReceipts);
    FInAppPurchaseCallbackProxy2OnFailure OnFailure;
    void InAppPurchaseResult2(EInAppPurchaseStatus PurchaseStatus, const TArray<FInAppPurchaseReceiptInfo2>& InAppPurchaseReceipts);

    class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(class APlayerController* PlayerController);
    class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(class APlayerController* PlayerController);
    class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const FInAppPurchaseProductRequest2& ProductRequest);
};

class UInAppPurchaseQueryCallbackProxy : public UObject
{
    FInAppPurchaseQueryCallbackProxyOnSuccess OnSuccess;
    void InAppPurchaseQueryResult(const TArray<FInAppPurchaseProductInfo>& InAppPurchaseInformation);
    FInAppPurchaseQueryCallbackProxyOnFailure OnFailure;
    void InAppPurchaseQueryResult(const TArray<FInAppPurchaseProductInfo>& InAppPurchaseInformation);

    class UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, const TArray<FString>& ProductIdentifiers);
};

class UInAppPurchaseQueryCallbackProxy2 : public UObject
{
    FInAppPurchaseQueryCallbackProxy2OnSuccess OnSuccess;
    void InAppPurchaseQuery2Result(const TArray<FOnlineProxyStoreOffer>& InAppOfferInformation);
    FInAppPurchaseQueryCallbackProxy2OnFailure OnFailure;
    void InAppPurchaseQuery2Result(const TArray<FOnlineProxyStoreOffer>& InAppOfferInformation);

    class UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, const TArray<FString>& ProductIdentifiers);
};

class UInAppPurchaseRestoreCallbackProxy : public UObject
{
    FInAppPurchaseRestoreCallbackProxyOnSuccess OnSuccess;
    void InAppPurchaseRestoreResult(TEnumAsByte<EInAppPurchaseState::Type> CompletionStatus, const TArray<FInAppPurchaseRestoreInfo>& InAppRestorePurchaseInformation);
    FInAppPurchaseRestoreCallbackProxyOnFailure OnFailure;
    void InAppPurchaseRestoreResult(TEnumAsByte<EInAppPurchaseState::Type> CompletionStatus, const TArray<FInAppPurchaseRestoreInfo>& InAppRestorePurchaseInformation);

    class UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(const TArray<FInAppPurchaseProductRequest>& ConsumableProductFlags, class APlayerController* PlayerController);
};

class UInAppPurchaseRestoreCallbackProxy2 : public UObject
{
    FInAppPurchaseRestoreCallbackProxy2OnSuccess OnSuccess;
    void InAppPurchaseRestoreResult2(EInAppPurchaseStatus PurchaseStatus, const TArray<FInAppPurchaseRestoreInfo2>& InAppPurchaseRestoreInfo);
    FInAppPurchaseRestoreCallbackProxy2OnFailure OnFailure;
    void InAppPurchaseRestoreResult2(EInAppPurchaseStatus PurchaseStatus, const TArray<FInAppPurchaseRestoreInfo2>& InAppPurchaseRestoreInfo);

    class UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(const TArray<FInAppPurchaseProductRequest2>& ConsumableProductFlags, class APlayerController* PlayerController);
};

class UIpConnection : public UNetConnection
{
    float SocketErrorDisconnectDelay;

};

class UIpNetDriver : public UNetDriver
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

};

class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FJoinSessionCallbackProxyOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FJoinSessionCallbackProxyOnFailure OnFailure;
    void EmptyOnlineDelegate();

    class UJoinSessionCallbackProxy* JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const FBlueprintSessionResult& SearchResult);
};

class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{

    bool WriteLeaderboardInteger(class APlayerController* PlayerController, FName StatName, int32 StatValue);
};

class ULeaderboardFlushCallbackProxy : public UObject
{
    FLeaderboardFlushCallbackProxyOnSuccess OnSuccess;
    void OnLeaderboardFlushed(FName SessionName);
    FLeaderboardFlushCallbackProxyOnFailure OnFailure;
    void OnLeaderboardFlushed(FName SessionName);

    class ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(class APlayerController* PlayerController, FName SessionName);
};

class ULeaderboardQueryCallbackProxy : public UObject
{
    FLeaderboardQueryCallbackProxyOnSuccess OnSuccess;
    void LeaderboardQueryResult(int32 LeaderboardValue);
    FLeaderboardQueryCallbackProxyOnFailure OnFailure;
    void LeaderboardQueryResult(int32 LeaderboardValue);

    class ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(class APlayerController* PlayerController, FName StatName);
};

class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{
    FLogoutCallbackProxyOnSuccess OnSuccess;
    void OnlineLogoutResult(class APlayerController* PlayerController);
    FLogoutCallbackProxyOnFailure OnFailure;
    void OnlineLogoutResult(class APlayerController* PlayerController);

    class ULogoutCallbackProxy* Logout(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{
    TMap<class FName, class FName> MappedUniqueNetIdTypes;
    TArray<FName> CompatibleUniqueNetIdTypes;
    FName VoiceSubsystemNameOverride;

};

class UOnlinePIESettings : public UDeveloperSettings
{
    bool bOnlinePIEEnabled;
    TArray<FPIELoginSettingsInternal> Logins;

};

class UOnlineSessionClient : public UOnlineSession
{
    bool bIsFromInvite;
    bool bHandlingDisconnect;

};

class UPartyBeaconState : public UObject
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
    TArray<FString> PlatformCrossplayRestrictions;
    TArray<FPartyBeaconCrossplayPlatformMapping> PlatformTypeMapping;
    bool bEnableRemovalRequests;
    TArray<FPartyReservation> Reservations;

};

class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FQuitMatchCallbackProxyOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FQuitMatchCallbackProxyOnFailure OnFailure;
    void EmptyOnlineDelegate();

    class UQuitMatchCallbackProxy* QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, TEnumAsByte<EMPMatchOutcome::Type> Outcome, int32 TurnTimeoutInSeconds);
};

class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{
    FShowLoginUICallbackProxyOnSuccess OnSuccess;
    void OnlineShowLoginUIResult(class APlayerController* PlayerController);
    FShowLoginUICallbackProxyOnFailure OnFailure;
    void OnlineShowLoginUIResult(class APlayerController* PlayerController);

    class UShowLoginUICallbackProxy* ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController);
};

class USpectatorBeaconState : public UObject
{
    FName SessionName;
    int32 NumConsumedReservations;
    int32 MaxReservations;
    bool bRestrictCrossConsole;
    TArray<FSpectatorReservation> Reservations;

};

class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object);
    void GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, int32 PlayerIndex, FString& PlayerDisplayName);
    void GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, int32& PlayerIndex);
    void GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, bool& bIsMyTurn);
};

class UVoipListenerSynthComponent : public USynthComponent
{

    bool IsIdling();
};

#endif
