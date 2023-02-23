#ifndef UE4SS_SDK_UI_Bar_OrderMenu_Preview_HPP
#define UE4SS_SDK_UI_Bar_OrderMenu_Preview_HPP

class UUI_Bar_OrderMenu_Preview_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Open;
    class UWidgetAnimation* FadeOut;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_0;
    class UBlurBackground_C* BlurBackground;
    class UTextBlock* BuffDescription;
    class UTextBlock* PreviewDescription;
    class UTextBlock* PreviewHeader;
    class UImage* PreviewIcon;
    class UTextBlock* PreviewStrength;
    class UTextBlock* StrengthLabel;
    class UUI_Bar_DrinkCost_C* UI_Bar_DrinkCost;
    class USpaceRigBarMenuItem* PreviewItem;
    FUI_Bar_OrderMenu_Preview_COnPreviewItemChanged OnPreviewItemChanged;
    void OnPreviewItemChanged(class USpaceRigBarMenuItem* Previous Item, class USpaceRigBarMenuItem* New Item);
    class UTemporaryBuff* PreviewBuf;

    void PreConstruct(bool IsDesignTime);
    void Set Preview Item(class USpaceRigBarMenuItem* currentItem);
    void Construct();
    void Fade In();
    void Fade Out();
    void FadeOutFinished();
    void Refresh Visuals();
    void ExecuteUbergraph_UI_Bar_OrderMenu_Preview(int32 EntryPoint);
    void OnPreviewItemChanged__DelegateSignature(class USpaceRigBarMenuItem* Previous Item, class USpaceRigBarMenuItem* New Item);
};

#endif
