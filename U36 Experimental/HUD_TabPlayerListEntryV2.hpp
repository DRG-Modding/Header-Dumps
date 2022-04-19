#ifndef UE4SS_SDK_HUD_TabPlayerListEntryV2_HPP
#define UE4SS_SDK_HUD_TabPlayerListEntryV2_HPP

class UHUD_TabPlayerListEntryV2_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_SupplyBar_C* AmmoBar;
    class UBorder* Border_CharacterLevel;
    class UBorder* Border_PlayerRank;
    class UTextBlock* DATA_ClassName;
    class UTextBlock* DATA_PlayerName;
    class UVerticalBox* InfoBox;
    class UITM_CharacterIcon_C* ITM_CharacterIcon;
    class UITM_HealthBar_C* ITM_HealthBar;
    class UTextBlock* PingText;
    class UNamedSlot* PutStuffHere_Rightside;
    class UUI_NameTags_C* UI_NameTags;
    class UUI_PlayerSpeaking_C* UI_PlayerSpeaking;
    class UVerticalBox* VerticalBox_AmmoHealth;
    class AFSDPlayerState* PlayerState;
    FSlateFontInfo NameFont;

    void UpdatePlayerClass();
    void UpdateVolatileStats();
    void Set Data(class AFSDPlayerState* State);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PreConstruct(bool IsDesignTime);
    void ShowInfoBar(bool shouldShow);
    void CharacterChanged(class APlayerCharacter* PlayerCharacter);
    void ExecuteUbergraph_HUD_TabPlayerListEntryV2(int32 EntryPoint);
};

#endif
