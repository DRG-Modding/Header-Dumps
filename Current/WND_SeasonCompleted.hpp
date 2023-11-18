#ifndef UE4SS_SDK_WND_SeasonCompleted_HPP
#define UE4SS_SDK_WND_SeasonCompleted_HPP

class UWND_SeasonCompleted_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimShow;
    class UButton* CloseButton;
    class UITM_SeasonContentToggle_C* ITM_SeasonContentToggle_1;
    class UITM_MenuBackground_C* MenuBackground;
    class UUI_Season_Popup_C* UI_Season_Popup;

    void SequenceEvent__ENTRYPOINTWND_SeasonCompleted_0(class UUI_Season_Popup_C* UI_Season_Popup);
    void Finished_D60067AF43B35249409EB2A2A048F4AB();
    void BndEvt__WND_SeasonCompleted_CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void OnShown();
    void PlaySlamAudio(class UUI_Season_Popup_C* UI_Season_Popup);
    void ExecuteUbergraph_WND_SeasonCompleted(int32 EntryPoint);
};

#endif
