#ifndef UE4SS_SDK_BP_BaubleHanging_HPP
#define UE4SS_SDK_BP_BaubleHanging_HPP

class ABP_BaubleHanging_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URotatingMovementComponent* RotatingMovement;
    class USkeletalMeshComponent* SkeletalMesh;
    float Speed;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_BaubleHanging(int32 EntryPoint);
};

#endif
