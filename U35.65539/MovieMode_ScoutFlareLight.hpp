#ifndef UE4SS_SDK_MovieMode_ScoutFlareLight_HPP
#define UE4SS_SDK_MovieMode_ScoutFlareLight_HPP

class UMovieMode_ScoutFlareLight_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UButton* Button_291;
    USlider* ColorSlider;
    USlider* IntensitySlider;
    UTextBlock* RadiusLabel;
    UTextBlock* RadiusLabel_1;
    UTextBlock* RadiusLabel_2;
    USlider* RadiusSlider;

    void Update(UPointLightComponent* PointLight, float CallFunc_GetValue_ReturnValue, float CallFunc_GetValue_ReturnValue_1, float CallFunc_GetValue_ReturnValue_2, float CallFunc_GetValue_ReturnValue_3, float CallFunc_Square_ReturnValue, float CallFunc_Square_ReturnValue_1, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, UBP_PlayerCameraDrone_C* K2Node_DynamicCast_AsBP_Player_Camera_Drone, bool K2Node_DynamicCast_bSuccess, FLinearColor CallFunc_GetLightColor_ReturnValue, float CallFunc_RGBToHSV_H, float CallFunc_RGBToHSV_S, float CallFunc_RGBToHSV_V, float CallFunc_RGBToHSV_A, FLinearColor CallFunc_HSVToRGB_ReturnValue);
    void Construct();
    void BndEvt__RadiusSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__ColorSlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__RadiusSlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__Button_291_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void ReBuild();
    void ExecuteUbergraph_MovieMode_ScoutFlareLight(int32 EntryPoint, float K2Node_ComponentBoundEvent_Value_1, float K2Node_ComponentBoundEvent_Value, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UBP_PlayerCameraDrone_C* K2Node_DynamicCast_AsBP_Player_Camera_Drone, bool K2Node_DynamicCast_bSuccess, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, FLinearColor CallFunc_GetLightColor_ReturnValue, UBP_PlayerCameraDrone_C* K2Node_DynamicCast_AsBP_Player_Camera_Drone_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_RGBToHSV_H, float CallFunc_RGBToHSV_S, float CallFunc_RGBToHSV_V, float CallFunc_RGBToHSV_A, FVector CallFunc_GetFlareLightSettings_ReturnValue, FLinearColor CallFunc_HSVToRGB_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Sqrt_ReturnValue, float CallFunc_Sqrt_ReturnValue_1, float CallFunc_GetValue_ReturnValue, float CallFunc_RGBToHSV_H_1, float CallFunc_RGBToHSV_S_1, float CallFunc_RGBToHSV_V_1, float CallFunc_RGBToHSV_A_1, bool CallFunc_Greater_FloatFloat_ReturnValue, FLinearColor CallFunc_HSVToRGB_ReturnValue_1, float K2Node_ComponentBoundEvent_Value_2);
}

#endif
