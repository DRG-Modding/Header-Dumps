#ifndef UE4SS_SDK_Basic_Popup_YesNoPrompt_HPP
#define UE4SS_SDK_Basic_Popup_YesNoPrompt_HPP

class UBasic_Popup_YesNoPrompt_C : public UYesNoPromptWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ScrollBarBox_C* Basic_ScrollBarBox;
    class UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal;
    class UBasic_ButtonScalable2_C* BTN_No;
    class UBasic_ButtonScalable2_C* BTN_Yes;
    class UTextBlock* DATA_Content;
    class UTextBlock* DATA_Header;
    class UITM_MenuBackground_C* ITM_MenuBackground;
    class UUI_HorizontalResourceBar_C* UI_HorizontalResourceBar;
    FBasic_Popup_YesNoPrompt_COnClickedYesNo OnClickedYesNo;
    void OnClickedYesNo(bool InYes);

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
    void SetMappedResources(const TMap<UResourceData*, int32>& Resources);
    void OnClicked(bool Yes);
    void ExecuteUbergraph_Basic_Popup_YesNoPrompt(int32 EntryPoint);
    void OnClickedYesNo__DelegateSignature(bool InYes);
};

#endif
