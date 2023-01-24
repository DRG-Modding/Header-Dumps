#ifndef UE4SS_SDK_Cheat_SimulatePlayerCount_HPP
#define UE4SS_SDK_Cheat_SimulatePlayerCount_HPP

class UCheat_SimulatePlayerCount_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UComboBoxString* ComboBoxString_159;

    void Construct();
    void BndEvt__ComboBoxString_159_K2Node_ComponentBoundEvent_70_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void ExecuteUbergraph_Cheat_SimulatePlayerCount(int32 EntryPoint);
};

#endif
