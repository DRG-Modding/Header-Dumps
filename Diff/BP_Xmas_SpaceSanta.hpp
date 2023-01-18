#ifndef UE4SS_SDK_BP_Xmas_SpaceSanta_HPP
#define UE4SS_SDK_BP_Xmas_SpaceSanta_HPP

class ABP_Xmas_SpaceSanta_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* SK_Xmas_SantaSleigh_01;
    class URotatingMovementComponent* RotatingMovement;
    class UStaticMeshComponent* SM_SantaSleigh;
    float Radius;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Xmas_SpaceSanta(int32 EntryPoint);
};

#endif
