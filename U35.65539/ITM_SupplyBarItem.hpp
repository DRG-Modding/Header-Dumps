#ifndef UE4SS_SDK_ITM_SupplyBarItem_HPP
#define UE4SS_SDK_ITM_SupplyBarItem_HPP

class UITM_SupplyBarItem_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimBlink;
    UImage* IMG_Border;
    UImage* IMG_Inner;
    bool IsActivated;
    TEnumAsByte<ENUM_MenuColors::Type> BorderColor;
    TEnumAsByte<ENUM_MenuColors::Type> InnerColor;
    bool IsBlinking;
    float BlinkUnder;
    TEnumAsByte<ENUM_MenuColors::Type> LowColorColor;

    void SetProgress(float InProgress, float ClampedProgress, bool Temp_bool_Variable, float CallFunc_FClamp_ReturnValue, FLinearColor Temp_struct_Variable, bool Temp_bool_Variable_1, FLinearColor Temp_struct_Variable_1, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor K2Node_Select_Default_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_BooleanAND_ReturnValue);
    void SetColors(uint8 InBorderColor, uint8 InInnerColor, uint8 InLowColorColor);
    void SetOn(bool IsOn);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnBlinkingFinished();
    void ExecuteUbergraph_ITM_SupplyBarItem(int32 EntryPoint, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_IsOn, bool K2Node_Event_IsDesignTime, float K2Node_Select_Default, float CallFunc_GetAnimationCurrentTime_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FLinearColor CallFunc_SelectMenuColor_OutputColor);
}

#endif
