#ifndef UE4SS_SDK_BP_Hologram_Hoxxes_HPP
#define UE4SS_SDK_BP_Hologram_Hoxxes_HPP

class ABP_Hologram_Hoxxes_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URotatingMovementComponent* RotatingMovement;
    class UStaticMeshComponent* StaticMeshComponent1;
    class UStaticMeshComponent* StaticMeshComponent0;
    class USceneComponent* SharedRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Hologram_Hoxxes(int32 EntryPoint);
};

#endif
