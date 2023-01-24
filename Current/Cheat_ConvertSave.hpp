#ifndef UE4SS_SDK_Cheat_ConvertSave_HPP
#define UE4SS_SDK_Cheat_ConvertSave_HPP

class UCheat_ConvertSave_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Moddedbutton;
    class UTextBlock* TextBlock;
    class UTextBlock* TextBlock_1;
    class UButton* VanillaButton;
    FSoftClassPath NewVar_0;
    TSoftClassPtr<UObject> NewVar_1;

    void BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Moddedbutton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Cheat_ConvertSave(int32 EntryPoint);
};

#endif
