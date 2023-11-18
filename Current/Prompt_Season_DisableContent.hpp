#ifndef UE4SS_SDK_Prompt_Season_DisableContent_HPP
#define UE4SS_SDK_Prompt_Season_DisableContent_HPP

class UPrompt_Season_DisableContent_C : public UYesNoPromptWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimShow;
    class UITM_MenuBackground_C* MenuBackground;
    class UITM_Special_ButtonCutCorner_C* NoBtn;
    class UUI_Season_Popup_C* Season_Popup;
    class UITM_Special_ButtonCutCorner_C* YesBtn;

    void BndEvt__Prompt_Season_DisableContent_YesBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__Prompt_Season_DisableContent_NoBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void Yes();
    void No();
    void OnShown();
    void ExecuteUbergraph_Prompt_Season_DisableContent(int32 EntryPoint);
};

#endif
