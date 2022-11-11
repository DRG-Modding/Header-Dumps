#ifndef UE4SS_SDK_ShowProfile_ToolTip_HPP
#define UE4SS_SDK_ShowProfile_ToolTip_HPP

class UShowProfile_ToolTip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimFadeIn;
    class UWidgetAnimation* Intro;
    class UImage* BackgroundImage;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    class UTextBlock* CountryTxt;
    class UTextBlock* ServernameTxt;
    class URichTextSizable* ShowProfileTxt;
    FText Text;
    FVector2D Position;
    FVector2D Alignment;
    FText ServerName;
    FText CountryName;

    void FadeIn(float Duration);
    void SetPostionAndAlignment(FVector2D InPosition, FVector2D InAlignment);
    void SetText(FText ToolTip, FText Region, FText Name);
    void SetTarget(class UWidget* Target Widget);
    void PreConstruct(bool IsDesignTime);
    void Set Tool Tip Owner(class UWidget* Owner);
    void ExecuteUbergraph_ShowProfile_ToolTip(int32 EntryPoint);
};

#endif
