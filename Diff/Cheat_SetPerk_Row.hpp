#ifndef UE4SS_SDK_Cheat_SetPerk_Row_HPP
#define UE4SS_SDK_Cheat_SetPerk_Row_HPP

class UCheat_SetPerk_Row_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCheckBox* CheckBox_0;
    class UButton* MinusBtn;
    class UButton* PlusBtn;
    class UTextBlock* TextBlock_PerkName;
    class UTextBlock* TextBlock_Rank;
    class UPerkAsset* PerkItem;
    FCheat_SetPerk_Row_COn PerkRow checked On PerkRow checked;
    void On PerkRow checked(class UCheat_SetPerk_Row_C* Buff row to skip);

    void Set Perk for row(class UPerkAsset* Perk for row);
    void BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_64_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void Check if owned perk is a active perk();
    void BndEvt__Cheat_SetPerk_Row_MinusBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Cheat_SetPerk_Row_PlusBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void ChangedRank(int32 InChange);
    void UpdateTextColor();
    void ExecuteUbergraph_Cheat_SetPerk_Row(int32 EntryPoint);
    void On PerkRow checked__DelegateSignature(class UCheat_SetPerk_Row_C* Buff row to skip);
};

#endif
