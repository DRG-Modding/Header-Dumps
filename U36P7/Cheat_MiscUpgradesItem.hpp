#ifndef UE4SS_SDK_Cheat_MiscUpgradesItem_HPP
#define UE4SS_SDK_Cheat_MiscUpgradesItem_HPP

class UCheat_MiscUpgradesItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* ItemName;
    class UComboBoxString* ItemSelect;
    class UScrollBox* SB_MiscUpgrades;
    EItemCategory ItemCategory;

    void Initiate widget(EItemCategory First Upgrade Item);
    void BndEvt__ItemSelect_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void Initialize Current Item();
    void ExecuteUbergraph_Cheat_MiscUpgradesItem(int32 EntryPoint);
};

#endif
