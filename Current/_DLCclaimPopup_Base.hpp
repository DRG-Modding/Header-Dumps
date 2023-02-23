#ifndef UE4SS_SDK__DLCclaimPopup_Base_HPP
#define UE4SS_SDK__DLCclaimPopup_Base_HPP

class U_DLCclaimPopup_Base_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Intro;
    class UWidgetAnimation* GlowPulse;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_96;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1;
    class UImage* bg1;
    class UImage* bg2;
    class UImage* BGglow;
    class UBlurBackground_C* BlurBackground;
    class UBorder* Border_0;
    class USizeBox* BoxSizer;
    class UImage* Glow01;
    class UImage* Glow02;
    class UImage* IMG_DLCicon;
    class UITM_BigButton_C* ITM_BigButton;
    class UNamedSlot* PutContentsHere;
    class UTextBlock* TextBlock_91;
    class UTextBlock* TextBlock_195;
    class UTexture2D* HeaderTexture;
    FText HeaderText;
    FText BottomText;
    F_DLCclaimPopup_Base_COnCloseClicked OnCloseClicked;
    void OnCloseClicked();
    FText ButtonText;

    void SetButtonText(FText InText);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void SetHeaderTexture(class UTexture2D* HeaderTexture);
    void SetBottomText(FText BottomText);
    void SetHeader(FText InHeader);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__ITM_BigButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void ExecuteUbergraph__DLCclaimPopup_Base(int32 EntryPoint);
    void OnCloseClicked__DelegateSignature();
};

#endif
