#ifndef UE4SS_SDK_BP_Endscreen_Lamp_HPP
#define UE4SS_SDK_BP_Endscreen_Lamp_HPP

class ABP_Endscreen_Lamp_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Static Mesh;
    class USceneComponent* Scene;
    class UPointLightComponent* PointLight;
    bool Survived;
    float Light Intensity;
    float Light Attenuation;
    float MaterialGlow;
    FVector Light Offset;
    class UMaterialInstanceDynamic* DynamicMaterial;

    void UpdateLights(FLinearColor Temp_struct_Variable, FLinearColor Temp_struct_Variable_1, bool Temp_bool_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, FLinearColor K2Node_Select_Default, FHitResult CallFunc_K2_AddLocalOffset_SweepHitResult, FLinearColor CallFunc_GetLightColor_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Endscreen_Lamp(int32 EntryPoint);
};

#endif
