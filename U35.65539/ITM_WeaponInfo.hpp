#ifndef UE4SS_SDK_ITM_WeaponInfo_HPP
#define UE4SS_SDK_ITM_WeaponInfo_HPP

class UITM_WeaponInfo_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Window_CutCorner_C* Basic_Window_CutCorner_165;
    UImage* GearIcon_BG;
    UImage* GearIcon_Outline;
    UITM_Loadout_UpgradeBar_C* ITM_Loadout_UpgradeBar;
    UITM_Overclock_Icon_C* ITM_Overclock_Icon;
    UTextBlock* TextBlock_ItemName;
    UUI_AdvancedLabel_C* UI_AdvancedLabel;
    UBorder* Upgrades_BG;
    UUpgradableGearComponent* Upgradable;
    EItemCategory WeaponSlot;
    FText IconName;
    AFSDPlayerState* State;
    TSubclassOf<APlayerCharacter> Character;
    TSubclassOf<AActor> Item;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void Update();
    void ExecuteUbergraph_ITM_WeaponInfo(int32 EntryPoint, UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, UTexture2D* CallFunc_GetIconBG_ReturnValue, UTexture2D* CallFunc_GetIconLine_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_1, FText CallFunc_GetGearName_ReturnValue, bool CallFunc_IsValid_ReturnValue, UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue_1, TSubclassOf<AActor> CallFunc_GetEquippedItem_ReturnValue, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_2, UItemUpgrade* CallFunc_GetEquippedOverclock_ReturnValue, UUpgradableGearComponent* CallFunc_GetComponentFromClass_ReturnValue, USchematicCategory* CallFunc_FromUpgrade_OutSchematicCategory, bool CallFunc_IsValid_ReturnValue_1);
}

#endif
