#ifndef UE4SS_SDK_Basic_Dropdown_HPP
#define UE4SS_SDK_Basic_Dropdown_HPP

class UBasic_Dropdown_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UComboBoxString* ComboBoxString_70;
    FString ItemText;

    UWidget* OnGenerateWidget_0(FString ItemUBasic_DropdownItem_C* CallFunc_Create_ReturnValue);
    void BndEvt__ComboBoxString_70_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, uint8 SelectionType);
    void ExecuteUbergraph_Basic_Dropdown(int32 EntryPoint, FString K2Node_ComponentBoundEvent_SelectedItem, uint8 K2Node_ComponentBoundEvent_SelectionType);
}

#endif
