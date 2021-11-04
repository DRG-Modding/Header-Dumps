// Class EngineSettings.ConsoleSettings
// Size: 0x70 (Inherited: 0x28)
struct UConsoleSettings : UObject {
	int32_t MaxScrollbackSize; // 0x28(0x04)
	TArray<FAutoCompleteCommand> ManualAutoCompleteList; // 0x30(0x10)
	TArray<FString> AutoCompleteMapPaths; // 0x40(0x10)
	float BackgroundOpacityPercentage; // 0x50(0x04)
	bool bOrderTopToBottom; // 0x54(0x01)
	bool bDisplayHelpInAutoComplete; // 0x55(0x01)
	FColor InputColor; // 0x58(0x04)
	FColor HistoryColor; // 0x5c(0x04)
	FColor AutoCompleteCommandColor; // 0x60(0x04)
	FColor AutoCompleteCVarColor; // 0x64(0x04)
	FColor AutoCompleteFadedColor; // 0x68(0x04)
};

// Class EngineSettings.GameMapsSettings
// Size: 0xf0 (Inherited: 0x28)
struct UGameMapsSettings : UObject {
	FString LocalMapOptions; // 0x28(0x10)
	FSoftObjectPath TransitionMap; // 0x38(0x18)
	bool bUseSplitscreen; // 0x50(0x01)
	enum class ETwoPlayerSplitScreenType TwoPlayerSplitscreenLayout; // 0x51(0x01)
	enum class EThreePlayerSplitScreenType ThreePlayerSplitscreenLayout; // 0x52(0x01)
	enum class EFourPlayerSplitScreenType FourPlayerSplitscreenLayout; // 0x53(0x01)
	bool bOffsetPlayerGamepadIds; // 0x54(0x01)
	FSoftClassPath GameInstanceClass; // 0x58(0x18)
	FSoftObjectPath GameDefaultMap; // 0x70(0x18)
	FSoftObjectPath ServerDefaultMap; // 0x88(0x18)
	FSoftClassPath GlobalDefaultGameMode; // 0xa0(0x18)
	FSoftClassPath GlobalDefaultServerGameMode; // 0xb8(0x18)
	TArray<FGameModeName> GameModeMapPrefixes; // 0xd0(0x10)
	TArray<FGameModeName> GameModeClassAliases; // 0xe0(0x10)

	void SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer);
	bool GetSkipAssigningGamepadToPlayer1();
	UGameMapsSettings* GetGameMapsSettings();
};

// Class EngineSettings.GameNetworkManagerSettings
// Size: 0x58 (Inherited: 0x28)
struct UGameNetworkManagerSettings : UObject {
	int32_t MinDynamicBandwidth; // 0x28(0x04)
	int32_t MaxDynamicBandwidth; // 0x2c(0x04)
	int32_t TotalNetBandwidth; // 0x30(0x04)
	int32_t BadPingThreshold; // 0x34(0x04)
	char bIsStandbyCheckingEnabled : 1; // 0x38(0x01)
	float StandbyRxCheatTime; // 0x3c(0x04)
	float StandbyTxCheatTime; // 0x40(0x04)
	float PercentMissingForRxStandby; // 0x44(0x04)
	float PercentMissingForTxStandby; // 0x48(0x04)
	float PercentForBadPing; // 0x4c(0x04)
	float JoinInProgressStandbyWaitTime; // 0x50(0x04)
};

// Class EngineSettings.GameSessionSettings
// Size: 0x38 (Inherited: 0x28)
struct UGameSessionSettings : UObject {
	int32_t MaxSpectators; // 0x28(0x04)
	int32_t MaxPlayers; // 0x2c(0x04)
	char bRequiresPushToTalk : 1; // 0x30(0x01)
};

// Class EngineSettings.GeneralEngineSettings
// Size: 0x28 (Inherited: 0x28)
struct UGeneralEngineSettings : UObject {
};

// Class EngineSettings.GeneralProjectSettings
// Size: 0x118 (Inherited: 0x28)
struct UGeneralProjectSettings : UObject {
	FString CompanyName; // 0x28(0x10)
	FString CompanyDistinguishedName; // 0x38(0x10)
	FString CopyrightNotice; // 0x48(0x10)
	FString Description; // 0x58(0x10)
	FString Homepage; // 0x68(0x10)
	FString LicensingTerms; // 0x78(0x10)
	FString PrivacyPolicy; // 0x88(0x10)
	FGuid ProjectID; // 0x98(0x10)
	FString ProjectName; // 0xa8(0x10)
	FString ProjectVersion; // 0xb8(0x10)
	FString SupportContact; // 0xc8(0x10)
	FText ProjectDisplayedTitle; // 0xd8(0x18)
	FText ProjectDebugTitleInfo; // 0xf0(0x18)
	bool bShouldWindowPreserveAspectRatio; // 0x108(0x01)
	bool bUseBorderlessWindow; // 0x109(0x01)
	bool bStartInVR; // 0x10a(0x01)
	bool bStartInAR; // 0x10b(0x01)
	bool bSupportAR; // 0x10c(0x01)
	bool bAllowWindowResize; // 0x10d(0x01)
	bool bAllowClose; // 0x10e(0x01)
	bool bAllowMaximize; // 0x10f(0x01)
	bool bAllowMinimize; // 0x110(0x01)
};

// Class EngineSettings.HudSettings
// Size: 0x40 (Inherited: 0x28)
struct UHudSettings : UObject {
	char bShowHUD : 1; // 0x28(0x01)
	TArray<FName> DebugDisplay; // 0x30(0x10)
};

