#ifndef UE4SS_SDK_Cheat_PerkListItem_HPP
#define UE4SS_SDK_Cheat_PerkListItem_HPP

class UCheat_PerkListItem_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCheckBox* CheckBox_49;
    UTextBlock* NameOfProperty;
    UTextBlock* TextBlock_Desc;
    FCheat_PerkListItem_COnCheckStateChanged OnCheckStateChanged;
    void OnCheckStateChanged(bool is Checked, UItemUpgrade* Item, EItemCategory Item Category);
    UItemUpgrade* myItemUpgrade;
    EItemCategory myItemCategory;
    bool IsEquipped;
    int32 Original name Size;
    int32 Original Desc size;

    void Construct();
    void BndEvt__CheckBox_49_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void Increase font size();
    void ExecuteUbergraph_Cheat_PerkListItem(int32 EntryPoint, int32 Temp_int_Variable, ECheckBoxState Temp_byte_Variable, ECheckBoxState Temp_byte_Variable_1, bool Temp_bool_Variable, int32 Temp_int_Variable_1, bool K2Node_ComponentBoundEvent_bIsChecked, ECheckBoxState K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, FSlateFontInfo K2Node_MakeStruct_SlateFontInfo);
    void OnCheckStateChanged__DelegateSignature(bool is Checked, UItemUpgrade* Item, EItemCategory Item Category);
}

#endif
