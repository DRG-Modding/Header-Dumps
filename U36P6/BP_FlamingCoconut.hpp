#ifndef UE4SS_SDK_BP_FlamingCoconut_HPP
#define UE4SS_SDK_BP_FlamingCoconut_HPP

class ABP_FlamingCoconut_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* NS_Coconut_Light_Flicker;
    class UNiagaraComponent* NS_Fire_Coconut;
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
    void ExecuteUbergraph_BP_FlamingCoconut(int32 EntryPoint);
};

#endif
