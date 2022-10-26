#ifndef UE4SS_SDK_BP_LightPost01_HPP
#define UE4SS_SDK_BP_LightPost01_HPP

class ABP_LightPost01_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Static Mesh;
    class USceneComponent* Scene;
    class UPointLightComponent* PointLight;
    FLinearColor Light Color;
    float Light Intensity;
    float Light Attenuation;
    TArray<class UStaticMesh*> Mesh;
    int32 Mesh to use;
    float MaterialGlow;
    bool Flicker;
    int32 TimesToFlash;
    bool Casts Shadows;
    FVector Light Offset;
    class UMaterialInstanceDynamic* DynamicMaterial;

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LightPost01(int32 EntryPoint);
};

#endif
