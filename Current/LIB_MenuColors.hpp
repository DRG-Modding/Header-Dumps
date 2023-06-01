#ifndef UE4SS_SDK_LIB_MenuColors_HPP
#define UE4SS_SDK_LIB_MenuColors_HPP

class ULIB_MenuColors_C : public UBlueprintFunctionLibrary
{

    void MenuColorAndTint(FMenuColorAndTint InValue, class UObject* __WorldContext, FLinearColor& OutResult);
    void WindowColors(TEnumAsByte<ENUM_WindowColors::Type> InColor, class UObject* __WorldContext, FLinearColor& Color1, FLinearColor& Color2);
    void SelectTextColor(class UTextBlock* Text, TEnumAsByte<ENUM_MenuColors::Type> FALSE, TEnumAsByte<ENUM_MenuColors::Type> TRUE, bool Condition, class UObject* __WorldContext);
    void SetTextColor(class UTextBlock* Text, TEnumAsByte<ENUM_MenuColors::Type> Color, class UObject* __WorldContext);
    void SelectMenuColor(TEnumAsByte<ENUM_MenuColors::Type> FALSE, TEnumAsByte<ENUM_MenuColors::Type> TRUE, bool Condition, class UObject* __WorldContext, FLinearColor& OutputColor);
    void MenuColorsAndOpacity(TEnumAsByte<ENUM_MenuColors::Type> ColorSelector, float Opacity, class UObject* __WorldContext, FLinearColor& OutputColor);
    void MenuColors(TEnumAsByte<ENUM_MenuColors::Type> ColorSelector, class UObject* __WorldContext, FLinearColor& OutputColor);
};

#endif
