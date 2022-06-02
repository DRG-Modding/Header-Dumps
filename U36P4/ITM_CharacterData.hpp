#ifndef UE4SS_SDK_ITM_CharacterData_HPP
#define UE4SS_SDK_ITM_CharacterData_HPP

class UITM_CharacterData_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* DATA_CharacterLevel;
    class UTextBlock* DATA_CharName;
    class UTextBlock* DATA_PlayerName;
    class UTextBlock* DATA_PlayerRank;
    class UTextBlock* DATA_xp;
    class UBorder* Holder_CharLevel;
    class UBorder* Holder_CharName;
    class UBorder* Holder_PlayerName;
    class UBorder* Holder_PlayerRank;
    class UVerticalBox* Holder_XP;
    class USizeBox* Holder_XPbar;
    class UImage* Icon_CharacterLevel;
    class UImage* Image_2;
    class UImage* Image_6;
    class UBorder* OuterBorder;
    class UUI_PlayerSpeaking_C* PlayerSpeakingIcon;
    class USizeBox* SizeBox_1;
    class USizeBox* SizeBox_4;
    class USizeBox* SizeBox_5;
    class UUI_Character_Supplies_C* UI_Character_Supplies;
    class UProgressBar* XPbar_Base;
    class UProgressBar* XPbar_Edge;
    float Width;
    bool ShowPlayerName;
    bool ShowPlayerRank;
    bool ShowCharacterName;
    bool ShowCharacterLevel;
    bool ShowXPbar;
    bool ShowXPcounter;
    bool ShowSupplies;
    bool ShowHealth;
    bool ShowSpeakerIcon;
    class AFSDPlayerState* CurrentPlayerState;

    void FromPlayerState(class AFSDPlayerState* InPlayerState, class UPlayerCharacterID* OptionalCharacterClass);
    void FromPlayerCharacter(class APlayerCharacter* SetCharacter);
    void SetData(FString PlayerName, const FText& HeroName, int32 PlayerRank, int32 CharacterLevel, float LevelProgress, int32 CurrentXP, int32 RequiredXP, class AFSDPlayerState* PlayerState);
    void SetToggles(bool PlayerName, bool PlayerRank, bool CharacterName, bool CharacterLevel, bool XPcounter, bool XPbar, bool Supplies);
    void PreConstruct(bool IsDesignTime);
    void RefreshSpeakVisibility();
    void OnPlayerJoined_Event(class AFSDPlayerState* PlayerState);
    void OnPlayerLeave_Event(class AFSDPlayerState* PlayerState);
    void ExecuteUbergraph_ITM_CharacterData(int32 EntryPoint);
};

#endif
