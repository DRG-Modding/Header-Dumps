#ifndef UE4SS_SDK_Lore_List_Element_HPP
#define UE4SS_SDK_Lore_List_Element_HPP

class ULore_List_Element_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeOutNavigationIcon;
    class UWidgetAnimation* IntroAnim;
    class UButton* Button_Outer;
    class UCategoryImage_C* CategoryImage;
    class UImage* Image_Arrow;
    class UImage* Image_ArrowDown;
    class UImage* Image_ArrowUp;
    class UImage* Image_DPad;
    class UTextBlock* TextBlock_Header;
    class UTextBlock* TextBlock_Subtext;
    class UUI_AdvancedLabel_C* UI_AdvancedLabel;
    class UUI_AdvancedLabel_C* UI_AdvancedLabel_C_1;
    class UWidgetSwitcher* WidgetSwitcher_Navigation;
    FText Header;
    FText SubText;
    class UTexture2D* BGImage;
    FLinearColor BackgroundColor;
    class UTexture2D* FrontImage;
    FObjectiveMissionIcon MissionIcon;
    TEnumAsByte<E_MM_ButtonStyle::Type> IsEnabled;
    int32 Index;
    bool IsSelected;
    FLore_List_Element_COnClicked OnClicked;
    void OnClicked(int32 Index);
    bool ShowArrow;

    void SetData(FText Header, FText SubText, class UTexture2D* BackgroundImage, FLinearColor BackgroundColor, class UTexture2D* FrontImage, int32 Index, FObjectiveMissionIcon MissionIcon, bool ShowArrow, TEnumAsByte<E_MM_ButtonStyle::Type> IsEnabled);
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void SetSelected(bool IsSelected);
    void Construct();
    void UpdateBorder();
    void PlayIntroAnim();
    void InputSourceChanged(EFSDInputSource InputSource);
    void HideNavIcon();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Lore_List_Element(int32 EntryPoint);
    void OnClicked__DelegateSignature(int32 Index);
};

#endif
