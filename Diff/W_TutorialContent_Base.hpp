#ifndef UE4SS_SDK_W_TutorialContent_Base_HPP
#define UE4SS_SDK_W_TutorialContent_Base_HPP

class UW_TutorialContent_Base_C : public UTutorialContentWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* MainObjectiveAnim;
    class UITM_BasicTutorialWindow_C* ITM_BasicTutorialWindow;

    void CompleteWithAnim();
    void OnShown();
    void SetText(FText TaskHeader, FText TaskText, FText CheckBoxText);
    void SetImage(class UTexture2D* Image);
    void BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_0_CompleteAnimationFinished__DelegateSignature();
    void BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_1_RemoveAnimationFinished__DelegateSignature();
    void PlayTaskProgress();
    void OnRemoveWidget();
    void SetTaskCounter(int32 Counter, int32 Denominator);
    void ExecuteUbergraph_W_TutorialContent_Base(int32 EntryPoint);
};

#endif
