#ifndef UE4SS_SDK_UI_ImageTinted_HPP
#define UE4SS_SDK_UI_ImageTinted_HPP

class UUI_ImageTinted_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* ImageWidget;
    FSlateBrush Brush;
    TEnumAsByte<ENUM_MenuColors::Type> Tint;
    float Tint Opacity;

    void SetBrushSize(FVector2D Brush Image Size, FSlateBrush K2Node_MakeStruct_SlateBrush);
    void SelectTint(uint8 FALSE, uint8 TRUE, bool Condition, bool Temp_bool_Variable, uint8 K2Node_Select_Default);
    void GetBrush(FSlateBrush& Brush);
    void SetBrushFromTexture(UTexture2D* Texture, bool MatchSize, FVector2D Size, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FSlateBrush K2Node_MakeStruct_SlateBrush);
    void SetTint(uint8 InTint, float InOpacity, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor);
    void SetBrush(const FSlateBrush& InBrush);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_ImageTinted(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
