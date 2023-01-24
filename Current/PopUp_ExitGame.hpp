#ifndef UE4SS_SDK_PopUp_ExitGame_HPP
#define UE4SS_SDK_PopUp_ExitGame_HPP

class UPopup_ExitGame_C : public UYesNoPromptWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Arrow_Left;
    class UImage* Arrow_Right;
    class UBasic_Menu_ColorBar_C* BasicWindow_ColorBar_Middle;
    class UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal;
    class UBasic_ButtonScalable2_C* BTN_No;
    class UBasic_ButtonScalable2_C* BTN_SignUp;
    class UBasic_ButtonScalable2_C* BTN_Yes;
    class UTextBlock* DATA_Content;
    class UTextBlock* DATA_Header;
    class UITM_MenuBackground_C* ITM_MenuBackground;
    class UITM_SocialMediaButtons_C* ITM_SocialMediaButtons;
    class UTextBlock* TextBlock_0;
    class UTextBlock* TextBlock_1;
    class UVerticalBox* VerticalBox_Survey;

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void OnShow(const FText& Title, const FText& Message);
    void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void Yes();
    void No();
    void BndEvt__BTN_Survey2_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void ExecuteUbergraph_Popup_ExitGame(int32 EntryPoint);
};

#endif
