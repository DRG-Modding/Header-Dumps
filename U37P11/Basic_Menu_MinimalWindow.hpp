#ifndef UE4SS_SDK_Basic_Menu_MinimalWindow_HPP
#define UE4SS_SDK_Basic_Menu_MinimalWindow_HPP

class UBasic_Menu_MinimalWindow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USizeBox* Arrow;
    class UImage* Arrow_WindowBottom;
    class UImage* Arrow_WindowBottomBG;
    class UImage* ArrowMarker;
    class UBasic_Menu_ColorBar_C* BasicWindow_ColorBar_Bottom_Left;
    class UBasic_Menu_ColorBar_C* BasicWindow_ColorBar_Bottom_Right;
    class UBasic_Menu_ColorBar_C* BasicWindow_ColorBar_Top;
    class UBackgroundBlur* BlurBackground;
    class UHorizontalBox* BottomBorder;
    class UBorder* HeaderBorder;
    class UBorder* MainBG;
    class UNamedSlot* PutStuffHere;
    FBasic_Menu_MinimalWindow_COn Clicked On Clicked;
    void On Clicked();
    bool BottomArrow;
    FBasic_Menu_MinimalWindow_CThickBars ThickBars;
    void ThickBars();
    bool Thick Bars;
    bool MouseOver;
    FBasic_Menu_MinimalWindow_COnCursorEnter OnCursorEnter;
    void OnCursorEnter(class UBasic_Menu_MinimalWindow_C* Window);
    FBasic_Menu_MinimalWindow_COnCursorLeave OnCursorLeave;
    void OnCursorLeave(class UBasic_Menu_MinimalWindow_C* Window);
    FBasic_Menu_MinimalWindow_COnReceivedFocus OnReceivedFocus;
    void OnReceivedFocus(class UBasic_Menu_MinimalWindow_C* Window);
    FBasic_Menu_MinimalWindow_COnLostFocus OnLostFocus;
    void OnLostFocus(class UBasic_Menu_MinimalWindow_C* Window);
    float WindowOpacity;
    float BlurStrength;

    void IsMouseOver(bool& MouseOver);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void PreConstruct(bool IsDesignTime);
    void OnFocusLost(FFocusEvent InFocusEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_Basic_Menu_MinimalWindow(int32 EntryPoint);
    void OnLostFocus__DelegateSignature(class UBasic_Menu_MinimalWindow_C* Window);
    void OnReceivedFocus__DelegateSignature(class UBasic_Menu_MinimalWindow_C* Window);
    void OnCursorLeave__DelegateSignature(class UBasic_Menu_MinimalWindow_C* Window);
    void OnCursorEnter__DelegateSignature(class UBasic_Menu_MinimalWindow_C* Window);
    void ThickBars__DelegateSignature();
    void On Clicked__DelegateSignature();
};

#endif
