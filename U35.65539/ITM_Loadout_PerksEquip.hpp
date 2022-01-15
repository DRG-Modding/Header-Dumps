#ifndef UE4SS_SDK_ITM_Loadout_PerksEquip_HPP
#define UE4SS_SDK_ITM_Loadout_PerksEquip_HPP

class UITM_Loadout_PerksEquip_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UVerticalBox* ActiveSlotsBox;
    UITM_Loadout_PerksEquip_Selection_C* ITM_Loadout_PerksEquip_Selection;
    UVerticalBox* PassiveSlotsBox;
    UImage* PerkStar;
    UPlayerCharacterID* CharacterClass;
    UITM_LoadOut_PerksEquip_Slot_C* SelectedSlot;

    void GetEquippedPerksByType(UPlayerCharacterID* InCharacterClass, EPerkUsageType InType, TArray<UPerkAsset*>& OutPerks, TArray<UPerkAsset*> Result, TArray<UPerkAsset*> perks, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UPerkAsset* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsUsageType_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, TArray<UPerkAsset*>& CallFunc_GetCharacterEquippedPerks_ReturnValue);
    void SelectSlot(UITM_LoadOut_PerksEquip_Slot_C* InSlot, bool CallFunc_IsValid_ReturnValue, EPerkUsageType CallFunc_GetSlotType_SlotType, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
    void CreateSlots(UVerticalBox* InSlotsBox, UPlayerCharacterID* InCharacter, EPerkUsageType InType, UPerkAsset* PassivePerk, FText PerkLockToolTip, FText PromotionLockToolTip, int32 PerkIndex, UPerkAsset* Perk, EPerkSlotType SlotType, TArray<EPerkSlotType> Layout, TArray<UPerkAsset*> perks, UITM_LoadOut_PerksEquip_Slot_C* Widget, UTexture2D* Temp_object_Variable, FText CallFunc_Select_Character_Class_Text_OutText, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Variable, bool Temp_bool_Variable, UTexture2D* Temp_object_Variable_1, bool Temp_bool_Variable_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, UPerkAsset* Temp_object_Variable_2, EPerkSlotType CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, FText K2Node_Select_Default, bool Temp_bool_Variable_2, OnClicked__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, UPerkAsset* CallFunc_GetEquippedPerkAt_Perk, UPerkAsset* K2Node_Select_Default_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, UTexture2D* K2Node_Select_Default_2, bool CallFunc_NotEqual_ByteByte_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UITM_LoadOut_PerksEquip_Slot_C* CallFunc_Create_ReturnValue, TArray<UPerkAsset*>& CallFunc_GetEquippedPerksByType_OutPerks, TSubclassOf<UPlayerCharacter> CallFunc_GetCharacterClass_ReturnValue, TArray<EPerkSlotType>& CallFunc_GetPerkEquipSlotLayout_ReturnValue);
    void UpdateSlots();
    UWidget* Get_PerkStar_ToolTipWidget_0(UBasic_ToolTip_C* ToolTip, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UBasic_ToolTip_C* CallFunc_Create_ReturnValue);
    void GetEquippedPerkAt(int32 Index, const TArray<UPerkAsset*>& TargetArray, UPerkAsset*& Perk, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UPerkAsset* CallFunc_Array_Get_Item);
    void UpdateEquippedPerks(UITM_LoadOut_PerksEquip_Slot_C* SlotWidget, UVerticalBox* Container, TArray<UVerticalBox*> SlotContainers, TArray<UPerkAsset*> perks, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, UPerkAsset* CallFunc_GetPerkAsset_PerkAsset, UVerticalBox* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, UITM_LoadOut_PerksEquip_Slot_C* K2Node_DynamicCast_AsITM_Load_Out_Perks_Equip_Slot, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, TArray<UVerticalBox*>& K2Node_MakeArray_Array);
    void Set Character Class(UPlayerCharacterID* characterID);
    void BndEvt__ITM_Loadout_PerksEquip_Selection_K2Node_ComponentBoundEvent_4_OnPerkClicked__DelegateSignature(UPerkAsset* PerkAsset);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_Loadout_PerksEquip(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, UPlayerCharacterID* K2Node_CustomEvent_characterID, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, UPerkAsset* K2Node_ComponentBoundEvent_PerkAsset, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_1, ESlateVisibility K2Node_Select_Default);
}

#endif
