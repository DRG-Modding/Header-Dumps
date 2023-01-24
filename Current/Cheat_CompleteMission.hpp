#ifndef UE4SS_SDK_Cheat_CompleteMission_HPP
#define UE4SS_SDK_Cheat_CompleteMission_HPP

class UCheat_CompleteMission_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_0;
    class UTextBlock* Label;

    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Cheat_CompleteMission(int32 EntryPoint);
};

#endif
