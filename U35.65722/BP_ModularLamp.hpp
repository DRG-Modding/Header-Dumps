#ifndef UE4SS_SDK_BP_ModularLamp_HPP
#define UE4SS_SDK_BP_ModularLamp_HPP

class ABP_ModularLamp_C : public AActor
{
    class UPointLightComponent* Light;
    class UStaticMeshComponent* Mesh;
    class USceneComponent* Scene;
    TEnumAsByte<ENUM_ModularLamps::Type> MeshSelection;
    FLinearColor LightColor;
    float LightIntensity;
    float LightAttenuation;
    float LightFalloffExponent;
    FVector LightOffset;
    float MaterialModifier;

    FSTRUCT_Lamp GetMeshStructByEnum(TEnumAsByte<ENUM_ModularLamps::Type> IndexTMap<TEnumAsByte<ENUM_ModularLamps::Type>, FSTRUCT_Lamp> Lamps, TMap<TEnumAsByte<ENUM_ModularLamps::Type>, FSTRUCT_Lamp> K2Node_MakeVariable_MakeVariableOutput, FSTRUCT_Lamp CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
    void SetLightColor(FLinearColor LightColor);
    void UserConstructionScript(FLinearColor NewLocalVar_0, FHitResult CallFunc_K2_AddLocalOffset_SweepHitResult, FVector CallFunc_GetSocketLocation_ReturnValue, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, float CallFunc_Divide_FloatFloat_ReturnValue, FSTRUCT_Lamp CallFunc_GetMeshStructByEnum_ReturnValue, FLinearColor CallFunc_Multiply_LinearColorFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue);
};

#endif
