#ifndef UE4SS_SDK_UI_InfoScreen_Overlay_FocusedDLC_HPP
#define UE4SS_SDK_UI_InfoScreen_Overlay_FocusedDLC_HPP

class UUI_InfoScreen_Overlay_FocusedDLC_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Click;
    class UWidgetAnimation* Hover;
    class UWidgetAnimation* Idle;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_0;
    class UBlurBackground_C* BlurBackground;
    class UButton* Button_0;
    class UImage* DLC_Label_Overlay;
    class UImage* DLCImage;
    class UImage* Glow1;
    class UImage* Glow2;
    bool NewVar_0;
    class UGameDLC* dlc;

    void OpenDLCInSteamBrowser();
    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_InfoScreen_Overlay_FocusedDLC(int32 EntryPoint);
};

#endif
