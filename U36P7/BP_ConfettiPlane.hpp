#ifndef UE4SS_SDK_BP_ConfettiPlane_HPP
#define UE4SS_SDK_BP_ConfettiPlane_HPP

class ABP_ConfettiPlane_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* StaticMeshComponent0;
    class USceneComponent* Scene;

    void SetMaterial(class UMaterialInterface* Material);
    void ExecuteUbergraph_BP_ConfettiPlane(int32 EntryPoint);
};

#endif
