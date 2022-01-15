#ifndef UE4SS_SDK_ITM_PerkInfoBox_HPP
#define UE4SS_SDK_ITM_PerkInfoBox_HPP

class UITM_PerkInfoBox_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Window_CutCorner_C* Basic_Window_CutCorner_165;
    UHorizontalBox* HorizontalBox_ActrivePerks;
    UHorizontalBox* HorizontalBox_PassivePerks;
    UImage* Image_466;
    UTextBlock* TextBlock_ItemName;
    UUpgradableGearComponent* Upgradable;
    EItemCategory WeaponSlot;
    UPlayerCharacterID* Character;
    int32 PerkIndex;
    TArray<UITM_StatusScreen_PerkItem_C*> PerkItems;

    void GetEquippedPerkAt(int32 Idx, TArray<UPerkAsset*>& perks, UPerkAsset*& Perk, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UPerkAsset* CallFunc_Array_Get_Item);
    void CreateSlots(UPanelWidget* InSlotsBox, EPerkUsageType InType, UPerkAsset* Perk, TArray<UPerkAsset*> perks, TArray<EPerkSlotType> Layout, EPerkSlotType SlotType, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, EPerkSlotType CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UITM_StatusScreen_PerkItem_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, TSubclassOf<UPlayerCharacter> CallFunc_GetCharacterClass_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, UPanelSlot* CallFunc_AddChild_ReturnValue, TArray<UPerkAsset*>& CallFunc_GetEquippedPerksByType_Perks, TArray<EPerkSlotType>& CallFunc_GetPerkEquipSlotLayout_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UPerkAsset* CallFunc_GetEquippedPerkAt_Perk);
    void GetEquippedPerksByType(UPlayerCharacterID* InCharacter, EPerkUsageType InType, TArray<UPerkAsset*>& perks, TArray<UPerkAsset*> Result, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, TArray<UPerkAsset*>& CallFunc_GetCharacterEquippedPerks_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UPerkAsset* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsUsageType_ReturnValue);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void Update();
    void ExecuteUbergraph_ITM_PerkInfoBox(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, ESlateVisibility K2Node_Select_Default);
}

#endif
