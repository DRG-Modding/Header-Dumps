// Enum OnlineSubsystemUtils.EInAppPurchaseStatus
enum class EInAppPurchaseStatus : uint8 {
	Invalid = 0,
	Failed = 1,
	Deferred = 2,
	Canceled = 3,
	Purchased = 4,
	Restored = 5,
	EInAppPurchaseStatus_MAX = 6
};

// Enum OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
enum class EOnlineProxyStoreOfferDiscountType : uint8 {
	NotOnSale = 0,
	Percentage = 1,
	DiscountAmount = 2,
	PayAmount = 3,
	EOnlineProxyStoreOfferDiscountType_MAX = 4
};

// Enum OnlineSubsystemUtils.EBeaconConnectionState
enum class EBeaconConnectionState : uint8 {
	Invalid = 0,
	Closed = 1,
	Pending = 2,
	Open = 3,
	EBeaconConnectionState_MAX = 4
};

// Enum OnlineSubsystemUtils.EClientRequestType
enum class EClientRequestType : uint8 {
	NonePending = 0,
	ExistingSessionReservation = 1,
	ReservationUpdate = 2,
	EmptyServerReservation = 3,
	Reconnect = 4,
	Abandon = 5,
	ReservationRemoveMembers = 6,
	EClientRequestType_MAX = 7
};

// Enum OnlineSubsystemUtils.EPartyReservationResult
enum class EPartyReservationResult : uint8 {
	NoResult = 0,
	RequestPending = 1,
	GeneralError = 2,
	PartyLimitReached = 3,
	IncorrectPlayerCount = 4,
	RequestTimedOut = 5,
	ReservationDuplicate = 6,
	ReservationNotFound = 7,
	ReservationAccepted = 8,
	ReservationDenied = 9,
	ReservationDenied_CrossPlayRestriction = 10,
	ReservationDenied_Banned = 11,
	ReservationRequestCanceled = 12,
	ReservationInvalid = 13,
	BadSessionId = 14,
	ReservationDenied_ContainsExistingPlayers = 15,
	EPartyReservationResult_MAX = 16
};

// Enum OnlineSubsystemUtils.ESpectatorClientRequestType
enum class ESpectatorClientRequestType : uint8 {
	NonePending = 0,
	ExistingSessionReservation = 1,
	ReservationUpdate = 2,
	EmptyServerReservation = 3,
	Reconnect = 4,
	Abandon = 5,
	ESpectatorClientRequestType_MAX = 6
};

// Enum OnlineSubsystemUtils.ESpectatorReservationResult
enum class ESpectatorReservationResult : uint8 {
	NoResult = 0,
	RequestPending = 1,
	GeneralError = 2,
	SpectatorLimitReached = 3,
	IncorrectPlayerCount = 4,
	RequestTimedOut = 5,
	ReservationDuplicate = 6,
	ReservationNotFound = 7,
	ReservationAccepted = 8,
	ReservationDenied = 9,
	ReservationDenied_CrossPlayRestriction = 10,
	ReservationDenied_Banned = 11,
	ReservationRequestCanceled = 12,
	ReservationInvalid = 13,
	BadSessionId = 14,
	ReservationDenied_ContainsExistingPlayers = 15,
	ESpectatorReservationResult_MAX = 16
};

// ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
// Size: 0x108 (Inherited: 0x00)
struct FBlueprintSessionResult {
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo2
// Size: 0x30 (Inherited: 0x00)
struct FInAppPurchaseReceiptInfo2 {
	FString ItemName; // 0x00(0x10)
	FString ItemID; // 0x10(0x10)
	FString ValidationInfo; // 0x20(0x10)
};

// ScriptStruct OnlineSubsystemUtils.OnlineProxyStoreOffer
// Size: 0x110 (Inherited: 0x00)
struct FOnlineProxyStoreOffer {
	FString OfferId; // 0x00(0x10)
	FText Title; // 0x10(0x18)
	FText Description; // 0x28(0x18)
	FText LongDescription; // 0x40(0x18)
	FText RegularPriceText; // 0x58(0x18)
	int32_t RegularPrice; // 0x70(0x04)
	FText PriceText; // 0x78(0x18)
	int32_t NumericPrice; // 0x90(0x04)
	FString CurrencyCode; // 0x98(0x10)
	FDateTime ReleaseDate; // 0xa8(0x08)
	FDateTime ExpirationDate; // 0xb0(0x08)
	enum class EOnlineProxyStoreOfferDiscountType DiscountType; // 0xb8(0x01)
	TMap<FString, FString> DynamicFields; // 0xc0(0x50)
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseRestoreInfo2
// Size: 0x30 (Inherited: 0x00)
struct FInAppPurchaseRestoreInfo2 {
	FString ItemName; // 0x00(0x10)
	FString ItemID; // 0x10(0x10)
	FString ValidationInfo; // 0x20(0x10)
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo
// Size: 0x30 (Inherited: 0x00)
struct FInAppPurchaseReceiptInfo {
	FString ItemName; // 0x00(0x10)
	FString ItemID; // 0x10(0x10)
	FString ValidationInfo; // 0x20(0x10)
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductInfo2
// Size: 0xf8 (Inherited: 0x00)
struct FInAppPurchaseProductInfo2 {
	FString Identifier; // 0x00(0x10)
	FString TransactionIdentifier; // 0x10(0x10)
	FString DisplayName; // 0x20(0x10)
	FString DisplayDescription; // 0x30(0x10)
	FString DisplayPrice; // 0x40(0x10)
	float RawPrice; // 0x50(0x04)
	FString CurrencyCode; // 0x58(0x10)
	FString CurrencySymbol; // 0x68(0x10)
	FString DecimalSeparator; // 0x78(0x10)
	FString GroupingSeparator; // 0x88(0x10)
	FString ReceiptData; // 0x98(0x10)
	TMap<FString, FString> DynamicFields; // 0xa8(0x50)
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductRequest2
// Size: 0x18 (Inherited: 0x00)
struct FInAppPurchaseProductRequest2 {
	FString ProductIdentifier; // 0x00(0x10)
	bool bIsConsumable; // 0x10(0x01)
};

// ScriptStruct OnlineSubsystemUtils.PlayerReservation
// Size: 0x50 (Inherited: 0x00)
struct FPlayerReservation {
	FUniqueNetIdRepl UniqueId; // 0x00(0x28)
	FString ValidationStr; // 0x28(0x10)
	FString Platform; // 0x38(0x10)
	bool bAllowCrossplay; // 0x48(0x01)
	float ElapsedTime; // 0x4c(0x04)
};

// ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
// Size: 0x40 (Inherited: 0x00)
struct FPIELoginSettingsInternal {
	FString ID; // 0x00(0x10)
	FString Token; // 0x10(0x10)
	FString Type; // 0x20(0x10)
	TArray<char> TokenBytes; // 0x30(0x10)
};

// ScriptStruct OnlineSubsystemUtils.PartyReservation
// Size: 0x50 (Inherited: 0x00)
struct FPartyReservation {
	int32_t TeamNum; // 0x00(0x04)
	FUniqueNetIdRepl PartyLeader; // 0x08(0x28)
	TArray<FPlayerReservation> PartyMembers; // 0x30(0x10)
	TArray<FPlayerReservation> RemovedPartyMembers; // 0x40(0x10)
};

// ScriptStruct OnlineSubsystemUtils.SpectatorReservation
// Size: 0x78 (Inherited: 0x00)
struct FSpectatorReservation {
	FUniqueNetIdRepl SpectatorId; // 0x00(0x28)
	FPlayerReservation Spectator; // 0x28(0x50)
};

