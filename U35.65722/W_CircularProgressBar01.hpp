#ifndef UE4SS_SDK_W_CircularProgressBar01_HPP
#define UE4SS_SDK_W_CircularProgressBar01_HPP

class UW_CircularProgressBar01_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* ProgressBarImage;
    class UTexture* Texture;
    float Percent;
    float Start Angle;
    float Complete Range;
    float RingRadius;
    float RingThickness;
    bool Clockwise;
    TEnumAsByte<ENUM_MenuColors::Type> Tint;
    float TintOpacity;

    void SetTintOpacity(float TintOpacity);
    void SetTint(TEnumAsByte<ENUM_MenuColors::Type> Tint, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor);
    void IncPercent(float Value, float& Percent, float CallFunc_Add_FloatFloat_ReturnValue);
    void GetPercent(float& Percent);
    void SetClockwise(bool ShowClockwise, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float K2Node_Select_Default);
    void SetRingThickness(float Value, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
    void SetRingRadius(float Value, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
    void SetCompleteRange(float Value, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
    void SetStartAngle(float Value, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
    void CreateMaterial(class UMaterialInterface* Material, TSoftObjectPtr<UMaterialInterface> SoftMaterial, bool Temp_bool_Variable, TSoftObjectPtr<UMaterialInterface> Temp_softobject_Variable, TSoftObjectPtr<UMaterialInterface> Temp_softobject_Variable_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, TSoftObjectPtr<UMaterialInterface> K2Node_Select_Default);
    void SetPercent(float Value, float CallFunc_FClamp_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_CircularProgressBar01(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

#endif
