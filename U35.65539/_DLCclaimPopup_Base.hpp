#ifndef UE4SS_SDK__DLCclaimPopup_Base_HPP
#define UE4SS_SDK__DLCclaimPopup_Base_HPP

class U_DLCclaimPopup_Base_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Intro;
    UWidgetAnimation* GlowPulse;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_96;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1;
    UImage* bg1;
    UImage* bg2;
    UImage* BGglow;
    UBlurBackground_C* BlurBackground;
    UBorder* Border_0;
    USizeBox* BoxSizer;
    UImage* Glow01;
    UImage* Glow02;
    UImage* IMG_DLCicon;
    UITM_BigButton_C* ITM_BigButton;
    UNamedSlot* PutContentsHere;
    UTextBlock* TextBlock_91;
    UTextBlock* TextBlock_195;
    UTexture2D* HeaderTexture;
    FText HeaderText;
    FText BottomText;
    F_DLCclaimPopup_Base_COnCloseClicked OnCloseClicked;
    void OnCloseClicked();

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Unhandled_ReturnValue, bool CallFunc_IsCloseOrBackMenu_ReturnValue, FEventReply CallFunc_Handled_ReturnValue);
    void SetHeaderTexture(UTexture2D* HeaderTexture);
    void SetBottomText(FText BottomText);
    void SetHeader(FText InHeader, FText CallFunc_TextToUpper_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__ITM_BigButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void ExecuteUbergraph__DLCclaimPopup_Base(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
    void OnCloseClicked__DelegateSignature();
}

#endif
