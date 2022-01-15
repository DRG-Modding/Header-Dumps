#ifndef UE4SS_SDK_EngineSettings_HPP
#define UE4SS_SDK_EngineSettings_HPP

#include "EngineSettings_enums.hpp"

class UConsoleSettings : UObject
{
    int32 MaxScrollbackSize;
    TArray<FAutoCompleteCommand> ManualAutoCompleteList;
    TArray<FString> AutoCompleteMapPaths;
    float BackgroundOpacityPercentage;
    bool bOrderTopToBottom;
    bool bDisplayHelpInAutoComplete;
    FColor InputColor;
    FColor HistoryColor;
    FColor AutoCompleteCommandColor;
    FColor AutoCompleteCVarColor;
    FColor AutoCompleteFadedColor;
}

class UGameMapsSettings : UObject
{
    FString LocalMapOptions;
    FSoftObjectPath TransitionMap;
    bool bUseSplitscreen;
    TEnumAsByte<ETwoPlayerSplitScreenType::Type> TwoPlayerSplitscreenLayout;
    TEnumAsByte<EThreePlayerSplitScreenType::Type> ThreePlayerSplitscreenLayout;
    EFourPlayerSplitScreenType FourPlayerSplitscreenLayout;
    bool bOffsetPlayerGamepadIds;
    FSoftClassPath GameInstanceClass;
    FSoftObjectPath GameDefaultMap;
    FSoftObjectPath ServerDefaultMap;
    FSoftClassPath GlobalDefaultGameMode;
    FSoftClassPath GlobalDefaultServerGameMode;
    TArray<FGameModeName> GameModeMapPrefixes;
    TArray<FGameModeName> GameModeClassAliases;

    void SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer);
    bool GetSkipAssigningGamepadToPlayer1();
    UGameMapsSettings* GetGameMapsSettings();
}

class UGameNetworkManagerSettings : UObject
{
    int32 MinDynamicBandwidth;
    int32 MaxDynamicBandwidth;
    int32 TotalNetBandwidth;
    int32 BadPingThreshold;
    uint8 bIsStandbyCheckingEnabled;
    float StandbyRxCheatTime;
    float StandbyTxCheatTime;
    float PercentMissingForRxStandby;
    float PercentMissingForTxStandby;
    float PercentForBadPing;
    float JoinInProgressStandbyWaitTime;
}

class UGameSessionSettings : UObject
{
    int32 MaxSpectators;
    int32 MaxPlayers;
    uint8 bRequiresPushToTalk;
}

class UGeneralEngineSettings : UObject
{
}

class UGeneralProjectSettings : UObject
{
    FString CompanyName;
    FString CompanyDistinguishedName;
    FString CopyrightNotice;
    FString Description;
    FString Homepage;
    FString LicensingTerms;
    FString PrivacyPolicy;
    FGuid ProjectID;
    FString ProjectName;
    FString ProjectVersion;
    FString SupportContact;
    FText ProjectDisplayedTitle;
    FText ProjectDebugTitleInfo;
    bool bShouldWindowPreserveAspectRatio;
    bool bUseBorderlessWindow;
    bool bStartInVR;
    bool bStartInAR;
    bool bSupportAR;
    bool bAllowWindowResize;
    bool bAllowClose;
    bool bAllowMaximize;
    bool bAllowMinimize;
}

class UHudSettings : UObject
{
    uint8 bShowHUD;
    TArray<FName> DebugDisplay;
}

struct UAutoCompleteCommand
{
    FString Command;
    FString Desc;
}

struct UGameModeName
{
    FString Name;
    FSoftClassPath GameMode;
}

#endif
