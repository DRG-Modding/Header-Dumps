#ifndef UE4SS_SDK_BP_SpinningFan01_HPP
#define UE4SS_SDK_BP_SpinningFan01_HPP

class ABP_SpinningFan01_C : public AStaticMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URotatingMovementComponent* RotatingMovement;
    float Speed;

    void SetSpeed(float Speed);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SpinningFan01(int32 EntryPoint);
};

#endif
