#ifndef UE4SS_SDK_UI_Perks_Column_Items_HPP
#define UE4SS_SDK_UI_Perks_Column_Items_HPP

class UUI_Perks_Column_Items_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UUniformGridPanel* PerksGrid;
    class UBorder* TierBorder;
    class UUI_Perks_Column_Unlocks_C* UI_Perks_Column_Unlocks;
    int32 Tier;
    TArray<class UUI_Perks_Item_C*> PerkWidgets;
    int32 PerkRows;
    FUI_Perks_Column_Items_COnPerkClicked OnPerkClicked;
    void OnPerkClicked(class UUI_Perks_Item_C* PerkWidget);
    bool TierUnLocked;

    bool IsInteractable();
    void RefreshTier(int32 TotalCount, int32 LockedCount, int32 ClaimedCount, bool Temp_bool_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default, class UUI_Perks_Item_C* CallFunc_Array_Get_Item, FLinearColor CallFunc_MenuColors_OutputColor, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue, bool CallFunc_GetPerkTierState_TierUnLocked, int32 CallFunc_GetPerkTierState_NextRequiredCount, int32 CallFunc_GetPerkTierState_NextProgressCount);
    void AddPerk(class UPerkAsset* Perk, class UPerkAsset*& OutPerk, class UUI_Perks_Item_C*& OutWidget, int32 Index, class UUniformGridSlot* GridWidget, class UUI_Perks_Item_C* Widget, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_Perks_Item_C* CallFunc_Create_ReturnValue, bool CallFunc_IsPerkAvailableInTier_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnPerkClicked_Event(class UUI_Perks_Item_C* Widget);
    void OnPerkClaimed_Event(class UPerkAsset* Perk, int32 ClaimedTier);
    void SetPerks(TArray<class UPerkAsset*>& Array);
    void ExecuteUbergraph_UI_Perks_Column_Items(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FExecuteUbergraph_UI_Perks_Column_ItemsK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_UI_Perks_Column_ItemsK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, class UGameData* CallFunc_GetFSDGameData_ReturnValue, int32 CallFunc_GetHighestPerkTier_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UUI_Perks_Item_C* K2Node_CustomEvent_Widget, ESlateVisibility Temp_byte_Variable, class UPerkAsset* K2Node_CustomEvent_Perk, int32 K2Node_CustomEvent_ClaimedTier, ESlateVisibility Temp_byte_Variable_1, TArray<class UPerkAsset*>& K2Node_CustomEvent_Array, class UPerkAsset* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UPerkAsset* CallFunc_AddPerk_OutPerk, class UUI_Perks_Item_C* CallFunc_AddPerk_OutWidget, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UPerkDelegateItem* CallFunc_GetDelegates_ReturnValue, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default);
    void OnPerkClicked__DelegateSignature(class UUI_Perks_Item_C* PerkWidget);
};

#endif
