#ifndef UE4SS_SDK_Cheat_ConvertSave_HPP
#define UE4SS_SDK_Cheat_ConvertSave_HPP

class UCheat_ConvertSave_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UButton* Moddedbutton;
    UTextBlock* TextBlock;
    UTextBlock* TextBlock_1;
    UButton* VanillaButton;
    FSoftClassPath NewVar_0;
    TSoftClassPtr<UObject> NewVar_1;

    void BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Moddedbutton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Cheat_ConvertSave(int32 EntryPoint, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_2);
}

#endif
