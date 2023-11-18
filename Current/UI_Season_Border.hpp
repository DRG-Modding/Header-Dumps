#ifndef UE4SS_SDK_UI_Season_Border_HPP
#define UE4SS_SDK_UI_Season_Border_HPP

class UUI_Season_Border_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_Background;
    class UImage* Image_Border;
    class UImage* Image_Glow;
    class UImage* Image_Shadow;
    FMenuColorAndTint BorderColor;
    FMenuColorAndTint BackgroundColor;
    FMenuColorAndTint GlowColor;
    FMenuColorAndTint ShadowColor;
    bool ShowGlow;
    bool ThickBorder;

    void SetThickBorder(bool ThickBorder);
    void ToggleGlow(bool InShowGlow);
    void SetShadowColor(FMenuColorAndTint InShadowColor);
    void SetGlowColor(FMenuColorAndTint InGlowColor);
    void SetBorderColor(FMenuColorAndTint InBorderColor);
    void SetBackgroundColor(FMenuColorAndTint BackgroundColor);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_Season_Border(int32 EntryPoint);
};

#endif
