#ifndef UE4SS_SDK_Basic_Dropdown_HPP
#define UE4SS_SDK_Basic_Dropdown_HPP

class UBasic_Dropdown_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UComboBoxString* ComboBoxString_70;
    FString ItemText;

    class UWidget* OnGenerateWidget_0(FString Itemclass UBasic_DropdownItem_C* CallFunc_Create_ReturnValue);
    void BndEvt__ComboBoxString_70_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void ExecuteUbergraph_Basic_Dropdown(int32 EntryPoint, FString K2Node_ComponentBoundEvent_SelectedItem, TEnumAsByte<ESelectInfo::Type> K2Node_ComponentBoundEvent_SelectionType);
};

#endif
