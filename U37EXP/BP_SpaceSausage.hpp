#ifndef UE4SS_SDK_BP_SpaceSausage_HPP
#define UE4SS_SDK_BP_SpaceSausage_HPP

class ABP_SpaceSausage_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URotatingMovementComponent* RotatingMovementLocal;
    class URotatingMovementComponent* RotatingMovement;
    class UStaticMeshComponent* SM_InflatableSausage;
    float Radius;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SpaceSausage(int32 EntryPoint);
};

#endif
