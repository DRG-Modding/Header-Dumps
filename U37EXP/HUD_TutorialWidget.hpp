#ifndef UE4SS_SDK_HUD_TutorialWidget_HPP
#define UE4SS_SDK_HUD_TutorialWidget_HPP

class UHUD_TutorialWidget_C : public UTutorialWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Enter/Exit;
    class UITM_BasicTutorialWindow_C* ITM_BasicTutorialWindow;
    float AnimationSpeed;
    FText DefaultHeader;
    bool IsChangingHintText;

    void OnShow(const FText& Text, const FText& Title, const FText& TaskText, class UTexture2D* Image);
    void Construct();
    void OnHide(bool watched);
    void BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_0_RemoveAnimationFinished__DelegateSignature();
    void BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_1_CompleteAnimationFinished__DelegateSignature();
    void ContinueChange();
    void ExecuteUbergraph_HUD_TutorialWidget(int32 EntryPoint);
};

#endif
