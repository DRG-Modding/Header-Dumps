#ifndef UE4SS_SDK_WeaponDisplay_PlasmaCarbine_AmmoCounter_HPP
#define UE4SS_SDK_WeaponDisplay_PlasmaCarbine_AmmoCounter_HPP

class UWeaponDisplay_PlasmaCarbine_AmmoCounter_C : public UWeaponDisplay_Base_AmmoCount_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anim_ProgressColor;
    class UWidgetAnimation* Anim_LowerBlink;
    class UWidgetAnimation* Anim_Overheat;
    class UWidgetAnimation* Anim_AmmoCritical;
    class UTextBlock* DATA_AmmoCount;
    class UTextBlock* DATA_AmmoLow;
    class UImage* Image_Progress;
    class UImage* Image_ProgressLowerBit;
    class UOverlay* Overlay_AmmoLow;
    class UOverlay* Overlay_Overheat;
    float Progress;
    bool Overheating;
    FLinearColor ProgressColor;

    void SetProgressColor(FLinearColor InColor, bool Temp_bool_Variable, FLinearColor Temp_struct_Variable, FLinearColor K2Node_Select_Default);
    void Scrub Animation(class UWidgetAnimation* InAnimation, float InProgress, float CallFunc_GetEndTime_ReturnValue, float CallFunc_GetStartTime_ReturnValue, float CallFunc_Lerp_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void OverheatStatus(bool Condition, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, bool CallFunc_BooleanAND_ReturnValue);
    void SetProgress(float Value, float VisualProgress, float VisualMaxProgress, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float CallFunc_MapRangeClamped_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_ToggleAnimationLooping_OutPlayingChanged, bool CallFunc_ToggleAnimationLooping_OutIsPlaying, float K2Node_Select_Default, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void UpdateAmount(int32 Value, bool CallFunc_Greater_IntInt_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void SetTotalCount(int32 Value);
    void Max Ammo Changed(int32 Amount);
    void Total Ammo left changed(int32 Amount);
    void SetClipCount(int32 Value);
    void PreConstruct(bool IsDesignTime);
    void SetHeatValue(float HeatPercentage, bool Overheated, float ThermalFeedbackLevel);
    void ExecuteUbergraph_WeaponDisplay_PlasmaCarbine_AmmoCounter(int32 EntryPoint, int32 K2Node_Event_amount_1, int32 K2Node_Event_amount, int32 K2Node_Event_value, bool K2Node_Event_IsDesignTime, float K2Node_CustomEvent_HeatPercentage, bool K2Node_CustomEvent_Overheated, float K2Node_CustomEvent_ThermalFeedbackLevel, int32 K2Node_Event_value_1);
};

#endif
