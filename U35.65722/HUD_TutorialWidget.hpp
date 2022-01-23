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
    void ExecuteUbergraph_HUD_TutorialWidget(int32 EntryPoint, bool Temp_bool_Variable, bool K2Node_Event_watched, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const FText K2Node_Event_Text, const FText K2Node_Event_Title, const FText K2Node_Event_TaskText, class UTexture2D* K2Node_Event_Image, bool CallFunc_TextIsEmpty_ReturnValue, FText K2Node_Select_Default);
};

#endif
