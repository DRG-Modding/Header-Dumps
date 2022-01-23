#ifndef UE4SS_SDK_Cheat_SetPerk_Row_HPP
#define UE4SS_SDK_Cheat_SetPerk_Row_HPP

class UCheat_SetPerk_Row_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCheckBox* CheckBox_0;
    class UTextBlock* TextBlock_PerkName;
    class UPerkAsset* PerkItem;
    FCheat_SetPerk_Row_COn PerkRow checked On PerkRow checked;
    void On PerkRow checked(class UCheat_SetPerk_Row_C* Buff row to skip);

    void Set Perk for row(class UPerkAsset* Perk for row);
    void BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_64_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void Check if owned perk is a active perk();
    void ExecuteUbergraph_Cheat_SetPerk_Row(int32 EntryPoint, class APlayerCharacter* CallFunc_GetLocalPlayerCharacter_ReturnValue, class UPerkAsset* K2Node_CustomEvent_Perk_for_row, bool K2Node_ComponentBoundEvent_bIsChecked, int32 CallFunc_GetCurrentRank_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2, FSlateColor K2Node_MakeStruct_SlateColor_1, FText CallFunc_Conv_StringToText_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor_2, FSlateColor K2Node_MakeStruct_SlateColor_3, class UGameData* CallFunc_GetFSDGameData_ReturnValue, bool CallFunc_Equip_ReturnValue, bool CallFunc_Unequip_ReturnValue, class APlayerCharacter* CallFunc_GetLocalPlayerCharacter_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, TArray<class UPerkAsset*>& CallFunc_GetCharacterEquippedPerks_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
    void On PerkRow checked__DelegateSignature(class UCheat_SetPerk_Row_C* Buff row to skip);
};

#endif
