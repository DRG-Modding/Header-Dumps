#ifndef UE4SS_SDK_Cheat_SetPromotionRank_HPP
#define UE4SS_SDK_Cheat_SetPromotionRank_HPP

class UCheat_SetPromotionRank_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_0;
    class UEditableTextBox* CountTextBox;

    void OnFailure_B68487534BCFBEC9FC0EF1A6F9C790B6();
    void OnSuccess_B68487534BCFBEC9FC0EF1A6F9C790B6();
    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Cheat_SetPromotionRank(int32 EntryPoint);
};

#endif
