#ifndef UE4SS_SDK_BP_SpinningFan01_HPP
#define UE4SS_SDK_BP_SpinningFan01_HPP

class ABP_SpinningFan01_C : AStaticMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    URotatingMovementComponent* RotatingMovement;
    float Speed;

    void SetSpeed(float Speed, FRotator CallFunc_MakeRotator_ReturnValue);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SpinningFan01(int32 EntryPoint);
}

#endif
