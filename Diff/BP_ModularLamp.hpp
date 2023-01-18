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
    class UMaterialInstanceDynamic* DynLightMaterial;

    FSTRUCT_Lamp GetMeshStructByEnum(TEnumAsByte<ENUM_ModularLamps::Type> Index);
    void SetLightColor(FLinearColor LightColor);
    void UserConstructionScript();
};

#endif
