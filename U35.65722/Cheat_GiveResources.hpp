#ifndef UE4SS_SDK_Cheat_GiveResources_HPP
#define UE4SS_SDK_Cheat_GiveResources_HPP

class UCheat_GiveResources_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_0;
    class UComboBoxString* ComboBoxString_0;
    class UEditableTextBox* CountTextBox;
    TArray<class UResourceData*> Resources;

    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Cheat_GiveResources(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UResourceData* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

#endif
