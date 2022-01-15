#ifndef UE4SS_SDK_WeaponDisplay_PlasmaCarbine_AmmoCounter_HPP
#define UE4SS_SDK_WeaponDisplay_PlasmaCarbine_AmmoCounter_HPP

class UWeaponDisplay_PlasmaCarbine_AmmoCounter_C : UWeaponDisplay_Base_AmmoCount_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Anim_ProgressColor;
    UWidgetAnimation* Anim_LowerBlink;
    UWidgetAnimation* Anim_Overheat;
    UWidgetAnimation* Anim_AmmoCritical;
    UTextBlock* DATA_AmmoCount;
    UTextBlock* DATA_AmmoLow;
    UImage* Image_Progress;
    UImage* Image_ProgressLowerBit;
    UOverlay* Overlay_AmmoLow;
    UOverlay* Overlay_Overheat;
    float Progress;
    bool Overheating;
    FLinearColor ProgressColor;

    void SetProgressColor(FLinearColor InColor, bool Temp_bool_Variable, FLinearColor Temp_struct_Variable, FLinearColor K2Node_Select_Default);
    void Scrub Animation(UWidgetAnimation* InAnimation, float InProgress, float CallFunc_GetEndTime_ReturnValue, float CallFunc_GetStartTime_ReturnValue, float CallFunc_Lerp_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void OverheatStatus(bool Condition, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, bool CallFunc_BooleanAND_ReturnValue);
    void SetProgress(float Value, float VisualProgress, float VisualMaxProgress, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float CallFunc_MapRangeClamped_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_ToggleAnimationLooping_OutPlayingChanged, bool CallFunc_ToggleAnimationLooping_OutIsPlaying, float K2Node_Select_Default, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void UpdateAmount(int32 Value, bool CallFunc_Greater_IntInt_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void SetTotalCount(int32 Value);
    void Max Ammo Changed(int32 Amount);
    void Total Ammo left changed(int32 Amount);
    void SetClipCount(int32 Value);
    void PreConstruct(bool IsDesignTime);
    void SetHeatValue(float HeatPercentage, bool Overheated, float ThermalFeedbackLevel);
    void ExecuteUbergraph_WeaponDisplay_PlasmaCarbine_AmmoCounter(int32 EntryPoint, int32 K2Node_Event_amount_1, int32 K2Node_Event_amount, int32 K2Node_Event_value, bool K2Node_Event_IsDesignTime, float K2Node_CustomEvent_HeatPercentage, bool K2Node_CustomEvent_Overheated, float K2Node_CustomEvent_ThermalFeedbackLevel, int32 K2Node_Event_value_1);
}

#endif
