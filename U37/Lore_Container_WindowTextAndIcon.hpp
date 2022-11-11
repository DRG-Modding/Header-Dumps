#ifndef UE4SS_SDK_Lore_Container_WindowTextAndIcon_HPP
#define UE4SS_SDK_Lore_Container_WindowTextAndIcon_HPP

class ULore_Container_WindowTextAndIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Glow;
    class UBasic_IconWithOutline_C* Basic_HexIcon;
    class UBasic_Window_CutCorner_C* Basic_Window;
    class UHorizontalBox* HorizontalBox_Headline;
    class UImage* IconBackgroundGlow;
    class URichTextBlock* RichTextBlock_Body;
    class UTextBlock* TextBlock_Headline;
    class UUI_RunningText_C* UI_RunningText;
    FText Headline;
    FText TextBody;
    EDamageType DamageType;
    class UTexture2D* Icon;
    TEnumAsByte<M_IconShapes::Type> IconShape;
    FLinearColor IconTint;
    float IconScale;
    bool IconOutline;
    bool IconAtRightSide;

    void SetText(FText Headline, FText TextBody);
    void PreConstruct(bool IsDesignTime);
    void SetBackgruondGlow(bool IsVisible, TEnumAsByte<ENUM_MenuColors::Type> Color);
    void ActiveRunningText();
    void OnFinished();
    void ExecuteUbergraph_Lore_Container_WindowTextAndIcon(int32 EntryPoint);
};

#endif
