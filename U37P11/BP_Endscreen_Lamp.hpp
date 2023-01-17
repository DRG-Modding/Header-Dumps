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

    void UpdateLights();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Endscreen_Lamp(int32 EntryPoint);
};

#endif
