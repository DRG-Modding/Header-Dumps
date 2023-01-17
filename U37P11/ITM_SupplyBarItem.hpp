#ifndef UE4SS_SDK_ITM_SupplyBarItem_HPP
#define UE4SS_SDK_ITM_SupplyBarItem_HPP

class UITM_SupplyBarItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimBlink;
    class UImage* IMG_Border;
    class UImage* IMG_Inner;
    bool IsActivated;
    TEnumAsByte<ENUM_MenuColors::Type> BorderColor;
    TEnumAsByte<ENUM_MenuColors::Type> InnerColor;
    bool IsBlinking;
    float BlinkUnder;
    TEnumAsByte<ENUM_MenuColors::Type> LowColorColor;

    void SetProgress(float InProgress);
    void SetColors(TEnumAsByte<ENUM_MenuColors::Type> InBorderColor, TEnumAsByte<ENUM_MenuColors::Type> InInnerColor, TEnumAsByte<ENUM_MenuColors::Type> InLowColorColor);
    void SetOn(bool IsOn);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnBlinkingFinished();
    void ExecuteUbergraph_ITM_SupplyBarItem(int32 EntryPoint);
};

#endif
