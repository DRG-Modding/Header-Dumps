#ifndef UE4SS_SDK_Discord_Popup_YesNoPrompt_HPP
#define UE4SS_SDK_Discord_Popup_YesNoPrompt_HPP

class UDiscord_Popup_YesNoPrompt_C : public UYesNoPromptWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal;
    class UBlurBackground_C* BlurBackground;
    class UBasic_ButtonScalable2_C* BTN_No;
    class UBasic_ButtonScalable2_C* BTN_Yes;
    class UTextBlock* DATA_Content;
    class UTextBlock* DATA_Header;
    class UTextBlock* DiscordMoreInfo;
    class UTextBlock* TextBlock_1;
    class UTextBlock* TextBlock_2;
    class UTextBlock* TextBlock_3;
    class UUI_HorizontalResourceBar_C* UI_HorizontalResourceBar;

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void OnShow(const FText& Title, const FText& Message);
    void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void Yes();
    void No();
    void Clear Resources();
    void Add Resource(class UResourceData* InResource, float InAmount);
    void SetResources(const TArray<FCraftingCost>& Resources);
    void ExecuteUbergraph_Discord_Popup_YesNoPrompt(int32 EntryPoint);
};

#endif
