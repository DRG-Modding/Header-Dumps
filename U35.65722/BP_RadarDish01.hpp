#ifndef UE4SS_SDK_BP_RadarDish01_HPP
#define UE4SS_SDK_BP_RadarDish01_HPP

class ABP_RadarDish01_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Mesh_Light;
    class URotatingMovementComponent* RotatingMovement;
    class UStaticMeshComponent* Mesh_Base;
    class UStaticMeshComponent* Mesh_Dish;
    class UStaticMeshComponent* Mesh_Arm;
    class UStaticMeshComponent* Mesh_Foot;
    class USceneComponent* DefaultSceneRoot;
    float RotationRate;

    void SetRotationRate(class URotatingMovementComponent* self2, float RotationRate, FRotator CallFunc_MakeRotator_ReturnValue);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_RadarDish01(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult);
};

#endif
