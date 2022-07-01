#ifndef UE4SS_SDK_Menu_Options_HPP
#define UE4SS_SDK_Menu_Options_HPP

class UMenu_Options_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ScrollBarBox_C* Basic_ScrollBarBox;
    class UBasic_Window_CutCorner_C* Basic_Window_CutCorner;
    class UBasic_ButtonTab_C* BTN_Audio;
    class UBasic_ButtonTab_C* BTN_Controls;
    class UBasic_ButtonTab_C* BTN_Credits;
    class UBasic_ButtonTab_C* BTN_Gameplay;
    class UBasic_ButtonTab_C* BTN_Graphics;
    class UBasic_ButtonTab_C* BTN_Layout;
    class UBasic_ButtonTab_C* BTN_Privacy;
    class UBasic_ButtonTab_C* BTN_Saves;
    class UBasic_ButtonTab_C* BTN_UI;
    class UWidgetSwitcher* ContentSwitcher;
    class UUI_AdvancedLabel_C* OptionIconNext;
    class UUI_AdvancedLabel_C* OptionIconPrev;
    class UOptions_Tab_Audio_C* Options_Tab_Audio;
    class UOptions_ControlLayout_C* Options_Tab_ControlLayout;
    class UOptions_Tab_Controls_C* Options_Tab_Controls;
    class UOptions_Tab_Gameplay_C* Options_Tab_Gameplay;
    class UOptions_Tab_GFX_C* Options_Tab_GFX;
    class UOptions_Tab_Privacy_C* Options_Tab_Privacy;
    class UOptions_Tab_Saves_C* Options_Tab_Saves;
    class UOptions_Tab_UI_C* Options_Tab_UI;
    class UBasic_ButtonTab_C* ActiveTabButton;
    int32 CurrTabIndex;
    TArray<class UBasic_ButtonTab_C*> Tabs;
    TArray<class UUserWidget*> Pages;
    FMenu_Options_CCreditsClicked CreditsClicked;
    void CreditsClicked();

    void HandleKeyInput(FKeyEvent InKeyEvent, bool InPressed, FEventReply& OutReply);
    void ReplaceGFXOptionsWithConsoleGFOptions();
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void DeselectTab(class UBasic_ButtonTab_C* Tab);
    void SelectTab(int32 Index, bool WithSound);
    void BndEvt__BTN_Gameplay_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature();
    void BndEvt__BTN_Privacy_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature();
    void OnClosed();
    void OnShown();
    void BndEvt__BTN_Layout_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void UpdateTabs(EFSDInputSource InputSource);
    void BndEvt__BTN_Credits_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__BTN_UI_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void BndEvt__BTN_Saves_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void BndEvt__BTN_Graphics_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void Construct();
    void BndEvt__BTN_Audio_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void SelectFirstTab();
    void ExecuteUbergraph_Menu_Options(int32 EntryPoint);
    void CreditsClicked__DelegateSignature();
};

#endif
