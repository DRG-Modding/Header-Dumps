#ifndef UE4SS_SDK_BP_TikiTorch_HPP
#define UE4SS_SDK_BP_TikiTorch_HPP

class ABP_TikiTorch_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class UAudioComponent* audio;
    class UNiagaraComponent* NS_TikiTorch_Light_Flicker;
    class UNiagaraComponent* NS_Fire_TikiTorch;
    class UPointLightComponent* Light_FireFlicker;
    class UStaticMeshComponent* SM_TikiTorch;
    class USceneComponent* Scene;
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
    bool NewVar_0;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_TikiTorch(int32 EntryPoint);
};

#endif
