#ifndef UE4SS_SDK_ITM_WeaponInfo_HPP
#define UE4SS_SDK_ITM_WeaponInfo_HPP

class UITM_WeaponInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Window_CutCorner_C* Basic_Window_CutCorner_165;
    class UImage* GearIcon_BG;
    class UImage* GearIcon_Outline;
    class UITM_Loadout_UpgradeBar_C* ITM_Loadout_UpgradeBar;
    class UITM_Overclock_Icon_C* ITM_Overclock_Icon;
    class UTextBlock* TextBlock_ItemName;
    class UUI_AdvancedLabel_C* UI_AdvancedLabel;
    class UBorder* Upgrades_BG;
    class UUpgradableGearComponent* Upgradable;
    EItemCategory WeaponSlot;
    FText IconName;
    class AFSDPlayerState* State;
    TSubclassOf<class APlayerCharacter> Character;
    TSubclassOf<class AActor> Item;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void Update();
    void ExecuteUbergraph_ITM_WeaponInfo(int32 EntryPoint, class UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, class UTexture2D* CallFunc_GetIconBG_ReturnValue, class UTexture2D* CallFunc_GetIconLine_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_1, FText CallFunc_GetGearName_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue_1, TSubclassOf<class AActor> CallFunc_GetEquippedItem_ReturnValue, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_2, class UItemUpgrade* CallFunc_GetEquippedOverclock_ReturnValue, class UUpgradableGearComponent* CallFunc_GetComponentFromClass_ReturnValue, class USchematicCategory* CallFunc_FromUpgrade_OutSchematicCategory, bool CallFunc_IsValid_ReturnValue_1);
};

#endif
