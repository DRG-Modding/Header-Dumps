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

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Handled_ReturnValue);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Unhandled_ReturnValue, bool CallFunc_IsCloseOrBackMenu_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
    void BeginFadeOut(float Duration, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void HideCancel();
    void OnShown();
    void Close();
    void ExecuteUbergraph_WND_Joining(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsVisible_ReturnValue);
};

#endif
