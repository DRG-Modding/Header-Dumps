#ifndef UE4SS_SDK_ITM_Loadout_UpgradeBar_HPP
#define UE4SS_SDK_ITM_Loadout_UpgradeBar_HPP

class UITM_Loadout_UpgradeBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_UpgGear_UpgIconSingle_C* ITM_UpgGear_UpgIconSingle;
    class UITM_UpgGear_UpgIconSingle_C* ITM_UpgGear_UpgIconSingle_0;
    class UITM_UpgGear_UpgIconSingle_C* ITM_UpgGear_UpgIconSingle_1;
    class UITM_UpgGear_UpgIconSingle_C* ITM_UpgGear_UpgIconSingle_2;
    class UITM_UpgGear_UpgIconSingle_C* ITM_UpgGear_UpgIconSingle_3;
    TArray<class UITM_UpgGear_UpgIconSingle_C*> UpgradeWidgets;

    void ShowItemUpgrades(class UPlayerCharacterID* InCharacterID, TSubclassOf<class AActor> InItemClass, class AFSDPlayerState* InPlayerState, bool EnableHoverTooltip, int32 tierIndex, TArray<FUpgradeTier> UpgradeTiers, class UITM_UpgGear_UpgIconSingle_C* Widget, TArray<class UItemUpgrade*> EquippedUpgrades, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FUpgradeTier CallFunc_Array_Get_Item, const TArray<FUpgradeTier>& CallFunc_GetItemUpgradeTiers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UITM_UpgGear_UpgIconSingle_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
    void GetUpgradeFromList(int32 Index, TArray<class UItemUpgrade*>& upgrades, class UItemUpgrade*& Output, class UItemUpgrade* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_Loadout_UpgradeBar(int32 EntryPoint, bool K2Node_Event_IsDesignTime, TArray<class UITM_UpgGear_UpgIconSingle_C*>& K2Node_MakeArray_Array);
};

#endif
