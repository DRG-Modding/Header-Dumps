#ifndef UE4SS_SDK_Cheat_PerkListItem_HPP
#define UE4SS_SDK_Cheat_PerkListItem_HPP

class UCheat_PerkListItem_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCheckBox* CheckBox_49;
    class UTextBlock* NameOfProperty;
    class UTextBlock* TextBlock_Desc;
    FCheat_PerkListItem_COnCheckStateChanged OnCheckStateChanged;
    void OnCheckStateChanged(bool Is Checked, class UItemUpgrade* Item, EItemCategory Item Category);
    class UItemUpgrade* myItemUpgrade;
    EItemCategory myItemCategory;
    bool IsEquipped;
    int32 Original name Size;
    int32 Original Desc size;

    void Construct();
    void BndEvt__CheckBox_49_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void Increase font size();
    void ExecuteUbergraph_Cheat_PerkListItem(int32 EntryPoint);
    void OnCheckStateChanged__DelegateSignature(bool Is Checked, class UItemUpgrade* Item, EItemCategory Item Category);
};

#endif
