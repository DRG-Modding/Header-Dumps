#ifndef UE4SS_SDK_ITM_PerkInfoBox_HPP
#define UE4SS_SDK_ITM_PerkInfoBox_HPP

class UITM_PerkInfoBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Window_CutCorner_C* Basic_Window_CutCorner_165;
    class UHorizontalBox* HorizontalBox_ActrivePerks;
    class UHorizontalBox* HorizontalBox_PassivePerks;
    class UImage* Image_466;
    class UTextBlock* TextBlock_ItemName;
    class UUpgradableGearComponent* Upgradable;
    EItemCategory WeaponSlot;
    class UPlayerCharacterID* Character;
    int32 PerkIndex;
    TArray<class UITM_StatusScreen_PerkItem_C*> PerkItems;

    void GetEquippedPerkAt(int32 Idx, TArray<class UPerkAsset*>& perks, class UPerkAsset*& Perk, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPerkAsset* CallFunc_Array_Get_Item);
    void CreateSlots(class UPanelWidget* InSlotsBox, EPerkUsageType InType, class UPerkAsset* Perk, TArray<class UPerkAsset*> perks, TArray<EPerkSlotType> Layout, EPerkSlotType SlotType, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, EPerkSlotType CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UITM_StatusScreen_PerkItem_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, TSubclassOf<class APlayerCharacter> CallFunc_GetCharacterClass_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, TArray<class UPerkAsset*>& CallFunc_GetEquippedPerksByType_Perks, TArray<EPerkSlotType>& CallFunc_GetPerkEquipSlotLayout_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UPerkAsset* CallFunc_GetEquippedPerkAt_Perk);
    void GetEquippedPerksByType(class UPlayerCharacterID* InCharacter, EPerkUsageType InType, TArray<class UPerkAsset*>& perks, TArray<class UPerkAsset*> Result, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue, TArray<class UPerkAsset*>& CallFunc_GetCharacterEquippedPerks_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UPerkAsset* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsUsageType_ReturnValue);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void Update();
    void ExecuteUbergraph_ITM_PerkInfoBox(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, class UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, ESlateVisibility K2Node_Select_Default);
};

#endif
