#ifndef UE4SS_SDK_UI_DLC_Season_HPP
#define UE4SS_SDK_UI_DLC_Season_HPP

class UUI_DLC_Season_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Click;
    class UWidgetAnimation* Hover;
    class UWidgetAnimation* Idle;
    class UButton* Button_Outer;
    class UCanvasPanel* CanvasPanel_Outer;
    class UImage* DLCImage;
    class UImage* Shadow;
    class UGameDLC* dlc;

    void OpenDLCInSteamBrowser();
    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_DLC_Season(int32 EntryPoint);
};

#endif
