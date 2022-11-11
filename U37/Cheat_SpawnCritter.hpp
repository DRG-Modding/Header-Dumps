#ifndef UE4SS_SDK_Cheat_SpawnCritter_HPP
#define UE4SS_SDK_Cheat_SpawnCritter_HPP

class UCheat_SpawnCritter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_0;
    class UComboBoxString* ComboBoxString_0;
    class UEditableTextBox* CountTextBox;
    TArray<class UBaseCritterDescriptor*> Critters;

    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Cheat_SpawnCritter(int32 EntryPoint);
};

#endif
