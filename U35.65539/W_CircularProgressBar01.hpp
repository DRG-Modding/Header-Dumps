#ifndef UE4SS_SDK_W_CircularProgressBar01_HPP
#define UE4SS_SDK_W_CircularProgressBar01_HPP

class UW_CircularProgressBar01_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* ProgressBarImage;
    UTexture* Texture;
    float Percent;
    float Start Angle;
    float Complete Range;
    float RingRadius;
    float RingThickness;
    bool Clockwise;
    TEnumAsByte<ENUM_MenuColors::Type> Tint;
    float TintOpacity;

    void SetTintOpacity(float TintOpacity);
    void SetTint(uint8 Tint, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor);
    void IncPercent(float Value, float& Percent, float CallFunc_Add_FloatFloat_ReturnValue);
    void GetPercent(float& Percent);
    void SetClockwise(bool ShowClockwise, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float K2Node_Select_Default);
    void SetRingThickness(float Value, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
    void SetRingRadius(float Value, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
    void SetCompleteRange(float Value, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
    void SetStartAngle(float Value, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
    void CreateMaterial(UMaterialInterface* Material, SoftObjectProperty SoftMaterial, bool Temp_bool_Variable, SoftObjectProperty Temp_softobject_Variable, SoftObjectProperty Temp_softobject_Variable_1, UObject* CallFunc_LoadAsset_Blocking_ReturnValue, UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, SoftObjectProperty K2Node_Select_Default);
    void SetPercent(float Value, float CallFunc_FClamp_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_CircularProgressBar01(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
