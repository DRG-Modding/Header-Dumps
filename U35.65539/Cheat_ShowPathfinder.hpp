#ifndef UE4SS_SDK_Cheat_ShowPathfinder_HPP
#define UE4SS_SDK_Cheat_ShowPathfinder_HPP

class UCheat_ShowPathfinder_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UComboBoxString* ComboBoxString_0;

    void Construct();
    void BndEvt__ComboBoxString_0_K2Node_ComponentBoundEvent_26_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, uint8 SelectionType);
    void ExecuteUbergraph_Cheat_ShowPathfinder(int32 EntryPoint, FString K2Node_ComponentBoundEvent_SelectedItem, uint8 K2Node_ComponentBoundEvent_SelectionType, bool K2Node_SwitchString_CmpSuccess);
}

#endif
