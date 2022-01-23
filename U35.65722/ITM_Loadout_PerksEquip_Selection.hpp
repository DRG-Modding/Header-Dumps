#ifndef UE4SS_SDK_ITM_Loadout_PerksEquip_Selection_HPP
#define UE4SS_SDK_ITM_Loadout_PerksEquip_Selection_HPP

class UITM_Loadout_PerksEquip_Selection_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UWrapBox* ItemsBox;
    class UTextBlock* SelectionTitle;
    FITM_Loadout_PerksEquip_Selection_COnPerkClicked OnPerkClicked;
    void OnPerkClicked(class UPerkAsset* PerkAsset);
    class UPlayerCharacterID* CharacterClass;

    void PreConstruct(bool IsDesignTime);
    void Refresh(class UPlayerCharacterID* characterID, EPerkUsageType PerkType);
    void Add Perk(class UPerkAsset* Perk);
    void OnClicked_Event(class UITM_LoadOut_PerksEquip_Item_C* Item);
    void Add None();
    void OnNoneClicked_Event();
    void ExecuteUbergraph_ITM_Loadout_PerksEquip_Selection(int32 EntryPoint, FText Temp_text_Variable, int32 Temp_int_Array_Index_Variable, FText Temp_text_Variable_1, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, class UPlayerCharacterID* K2Node_CustomEvent_characterID, EPerkUsageType K2Node_CustomEvent_PerkType, TArray<class UPerkAsset*>& CallFunc_GetOwnedPerksByType_ReturnValue, class UPerkAsset* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UPerkAsset* K2Node_CustomEvent_Perk, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UITM_LoadOut_PerksEquip_Item_C* CallFunc_Create_ReturnValue, class UPerkAsset* CallFunc_GetPerkAsset_PerkAsset, class UITM_LoadOut_PerksEquip_Item_C* K2Node_CustomEvent_Item, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue, class UPerkAsset* CallFunc_GetPerkAsset_PerkAsset_1, EPerkUsageType Temp_byte_Variable, int32 Temp_int_Loop_Counter_Variable, FText K2Node_Select_Default, FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsEquippedBy_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class UITM_LoadOut_PerksEquip_None_C* CallFunc_Create_ReturnValue_1, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue_1, FExecuteUbergraph_ITM_Loadout_PerksEquip_SelectionK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class UITM_LoadOut_PerksEquip_Item_C* CallFunc_Create_ReturnValue_2, FExecuteUbergraph_ITM_Loadout_PerksEquip_SelectionK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue_2);
    void OnPerkClicked__DelegateSignature(class UPerkAsset* PerkAsset);
};

#endif
