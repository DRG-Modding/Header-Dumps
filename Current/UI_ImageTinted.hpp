#ifndef UE4SS_SDK_UI_ImageTinted_HPP
#define UE4SS_SDK_UI_ImageTinted_HPP

class UUI_ImageTinted_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* ImageWidget;
    FSlateBrush Brush;
    TEnumAsByte<ENUM_MenuColors::Type> Tint;
    float Tint Opacity;

    void SetBrushSize(FVector2D Brush Image Size);
    void SelectTint(TEnumAsByte<ENUM_MenuColors::Type> FALSE, TEnumAsByte<ENUM_MenuColors::Type> TRUE, bool Condition);
    void GetBrush(FSlateBrush& Brush);
    void SetBrushFromTexture(class UTexture2D* Texture, bool MatchSize);
    void SetTint(TEnumAsByte<ENUM_MenuColors::Type> InTint, float InOpacity);
    void SetBrush(const FSlateBrush& InBrush);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_ImageTinted(int32 EntryPoint);
};

#endif
