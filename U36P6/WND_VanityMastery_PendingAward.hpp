#ifndef UE4SS_SDK_WND_VanityMastery_PendingAward_HPP
#define UE4SS_SDK_WND_VanityMastery_PendingAward_HPP

class UWND_VanityMastery_PendingAward_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimFadeIn;
    class URichTextSizable* BodyText;
    class UBasic_ButtonScalable2_C* ContinueBtn;
    class UITM_MenuBackground_C* MenuBackground;
    class UBasic_Image_C* ResourceIcon;

    void Finished_8C36011C4DFA52BA25DA7285ADF20DA5();
    void OnShown();
    void ReceiveCloseCommand();
    void BndEvt__WND_VanityMastery_PendingAward_ContinueBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void ExecuteUbergraph_WND_VanityMastery_PendingAward(int32 EntryPoint);
};

#endif
