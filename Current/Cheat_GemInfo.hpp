#ifndef UE4SS_SDK_Cheat_GemInfo_HPP
#define UE4SS_SDK_Cheat_GemInfo_HPP

class UCheat_GemInfo_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* TextBlock_0;
    class UTextBlock* TextBlock_Material;
    class UGemResourceData* GemResource;

    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Cheat_GemInfo(int32 EntryPoint);
};

#endif
