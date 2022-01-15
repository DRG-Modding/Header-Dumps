#ifndef UE4SS_SDK_BP_RadarDish01_HPP
#define UE4SS_SDK_BP_RadarDish01_HPP

class ABP_RadarDish01_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Mesh_Light;
    URotatingMovementComponent* RotatingMovement;
    UStaticMeshComponent* Mesh_Base;
    UStaticMeshComponent* Mesh_Dish;
    UStaticMeshComponent* Mesh_Arm;
    UStaticMeshComponent* Mesh_Foot;
    USceneComponent* DefaultSceneRoot;
    float RotationRate;

    void SetRotationRate(URotatingMovementComponent* self2, float RotationRate, FRotator CallFunc_MakeRotator_ReturnValue);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_RadarDish01(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult);
}

#endif
