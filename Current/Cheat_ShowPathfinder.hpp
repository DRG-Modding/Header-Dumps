#ifndef UE4SS_SDK_Cheat_ShowPathfinder_HPP
#define UE4SS_SDK_Cheat_ShowPathfinder_HPP

class UCheat_ShowPathfinder_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UComboBoxString* ComboBoxString_0;

    void Construct();
    void BndEvt__ComboBoxString_0_K2Node_ComponentBoundEvent_26_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void ExecuteUbergraph_Cheat_ShowPathfinder(int32 EntryPoint);
};

#endif
