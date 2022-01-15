#ifndef UE4SS_SDK_ITM_Loadout_UpgradeBar_HPP
#define UE4SS_SDK_ITM_Loadout_UpgradeBar_HPP

class UITM_Loadout_UpgradeBar_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UITM_UpgGear_UpgIconSingle_C* ITM_UpgGear_UpgIconSingle;
    UITM_UpgGear_UpgIconSingle_C* ITM_UpgGear_UpgIconSingle_0;
    UITM_UpgGear_UpgIconSingle_C* ITM_UpgGear_UpgIconSingle_1;
    UITM_UpgGear_UpgIconSingle_C* ITM_UpgGear_UpgIconSingle_2;
    UITM_UpgGear_UpgIconSingle_C* ITM_UpgGear_UpgIconSingle_3;
    TArray<UITM_UpgGear_UpgIconSingle_C*> UpgradeWidgets;

    void ShowItemUpgrades(UPlayerCharacterID* InCharacterID, TSubclassOf<AActor> InItemClass, UFSDPlayerState* InPlayerState, bool EnableHoverTooltip, int32 tierIndex, TArray<FUpgradeTier> UpgradeTiers, UITM_UpgGear_UpgIconSingle_C* Widget, TArray<UItemUpgrade*> EquippedUpgrades, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FUpgradeTier CallFunc_Array_Get_Item, const TArray<FUpgradeTier>& CallFunc_GetItemUpgradeTiers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UITM_UpgGear_UpgIconSingle_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
    void GetUpgradeFromList(int32 Index, TArray<UItemUpgrade*>& upgrades, UItemUpgrade*& Output, UItemUpgrade* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_Loadout_UpgradeBar(int32 EntryPoint, bool K2Node_Event_IsDesignTime, TArray<UITM_UpgGear_UpgIconSingle_C*>& K2Node_MakeArray_Array);
}

#endif
