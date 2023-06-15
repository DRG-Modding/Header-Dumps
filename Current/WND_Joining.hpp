#ifndef UE4SS_SDK_WND_Joining_HPP
#define UE4SS_SDK_WND_Joining_HPP

class UWND_Joining_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeOut;
    class UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal;
    class UBlurBackground_C* BlurBackground;
    class UBasic_ButtonScalable2_C* Button_Close;
    class UCircularThrobber* CircularThrobber_2;
    class UImage* FadeImage;
    class UTextBlock* TextBlock_0;
    bool ShowCancelButton;

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void BeginFadeOut(float Duration);
    void HideCancel();
    void OnShown();
    void Close();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_WND_Joining(int32 EntryPoint);
};

#endif
