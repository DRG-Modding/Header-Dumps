#ifndef UE4SS_SDK_Basic_Menu_MinimalWindow_HPP
#define UE4SS_SDK_Basic_Menu_MinimalWindow_HPP

class UBasic_Menu_MinimalWindow_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    USizeBox* Arrow;
    UImage* Arrow_WindowBottom;
    UImage* Arrow_WindowBottomBG;
    UImage* ArrowMarker;
    UBasic_Menu_ColorBar_C* BasicWindow_ColorBar_Bottom_Left;
    UBasic_Menu_ColorBar_C* BasicWindow_ColorBar_Bottom_Right;
    UBasic_Menu_ColorBar_C* BasicWindow_ColorBar_Top;
    UBackgroundBlur* BlurBackground;
    UHorizontalBox* BottomBorder;
    UBorder* HeaderBorder;
    UBorder* MainBG;
    UNamedSlot* PutStuffHere;
    FBasic_Menu_MinimalWindow_COn Clicked On Clicked;
    void On Clicked();
    bool BottomArrow;
    FBasic_Menu_MinimalWindow_CThickBars ThickBars;
    void ThickBars();
    bool Thick Bars;
    bool MouseOver;
    FBasic_Menu_MinimalWindow_COnCursorEnter OnCursorEnter;
    void OnCursorEnter(UBasic_Menu_MinimalWindow_C* Window);
    FBasic_Menu_MinimalWindow_COnCursorLeave OnCursorLeave;
    void OnCursorLeave(UBasic_Menu_MinimalWindow_C* Window);
    FBasic_Menu_MinimalWindow_COnReceivedFocus OnReceivedFocus;
    void OnReceivedFocus(UBasic_Menu_MinimalWindow_C* Window);
    FBasic_Menu_MinimalWindow_COnLostFocus OnLostFocus;
    void OnLostFocus(UBasic_Menu_MinimalWindow_C* Window);
    float WindowOpacity;
    float BlurStrength;

    void IsMouseOver(bool& MouseOver);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEventFEventReply CallFunc_Unhandled_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void OnFocusLost(FFocusEvent InFocusEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_Basic_Menu_MinimalWindow(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, ESlateVisibility K2Node_Select_Default, FFocusEvent K2Node_Event_InFocusEvent, FGeometry K2Node_Event_MyGeometry, const FPointerEvent K2Node_Event_MouseEvent_1, const FPointerEvent K2Node_Event_MouseEvent, float CallFunc_Multiply_FloatFloat_ReturnValue, FLinearColor K2Node_MakeStruct_LinearColor);
    void OnLostFocus__DelegateSignature(UBasic_Menu_MinimalWindow_C* Window);
    void OnReceivedFocus__DelegateSignature(UBasic_Menu_MinimalWindow_C* Window);
    void OnCursorLeave__DelegateSignature(UBasic_Menu_MinimalWindow_C* Window);
    void OnCursorEnter__DelegateSignature(UBasic_Menu_MinimalWindow_C* Window);
    void ThickBars__DelegateSignature();
    void On Clicked__DelegateSignature();
}

#endif
