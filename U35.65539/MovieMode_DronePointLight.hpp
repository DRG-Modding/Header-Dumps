#ifndef UE4SS_SDK_MovieMode_DronePointLight_HPP
#define UE4SS_SDK_MovieMode_DronePointLight_HPP

class UMovieMode_DronePointLight_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UButton* Button_291;
    USlider* ColorSlider;
    USlider* IntensitySlider;
    UTextBlock* RadiusLabel;
    UTextBlock* RadiusLabel_1;
    UTextBlock* RadiusLabel_2;
    USlider* RadiusSlider;

    void Update(float CallFunc_GetValue_ReturnValue, float CallFunc_GetValue_ReturnValue_1, float CallFunc_Square_ReturnValue, float CallFunc_Square_ReturnValue_1, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UBP_PlayerCameraDrone_C* K2Node_DynamicCast_AsBP_Player_Camera_Drone, bool K2Node_DynamicCast_bSuccess);
    void BndEvt__RadiusSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__ColorSlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__RadiusSlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__Button_291_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void ReBuild();
    void ExecuteUbergraph_MovieMode_DronePointLight(int32 EntryPoint, float K2Node_ComponentBoundEvent_Value_2, float K2Node_ComponentBoundEvent_Value_1, float K2Node_ComponentBoundEvent_Value, float CallFunc_GetValue_ReturnValue, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, UBP_PlayerCameraDrone_C* K2Node_DynamicCast_AsBP_Player_Camera_Drone, bool K2Node_DynamicCast_bSuccess, UBP_PlayerCameraDrone_C* K2Node_DynamicCast_AsBP_Player_Camera_Drone_1, bool K2Node_DynamicCast_bSuccess_1, FLinearColor CallFunc_GetLightColor_ReturnValue, FLinearColor CallFunc_GetLightColor_ReturnValue_1, float CallFunc_RGBToHSV_H, float CallFunc_RGBToHSV_S, float CallFunc_RGBToHSV_V, float CallFunc_RGBToHSV_A, float CallFunc_RGBToHSV_H_1, float CallFunc_RGBToHSV_S_1, float CallFunc_RGBToHSV_V_1, float CallFunc_RGBToHSV_A_1, FLinearColor CallFunc_HSVToRGB_ReturnValue, FLinearColor CallFunc_HSVToRGB_ReturnValue_1, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_2, UBP_PlayerCameraDrone_C* K2Node_DynamicCast_AsBP_Player_Camera_Drone_2, bool K2Node_DynamicCast_bSuccess_2, FLinearColor CallFunc_GetLightColor_ReturnValue_2, float CallFunc_RGBToHSV_H_2, float CallFunc_RGBToHSV_S_2, float CallFunc_RGBToHSV_V_2, float CallFunc_RGBToHSV_A_2, float CallFunc_Sqrt_ReturnValue, float CallFunc_Sqrt_ReturnValue_1);
}

#endif
