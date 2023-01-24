#ifndef UE4SS_SDK_BP_RadarDish01_HPP
#define UE4SS_SDK_BP_RadarDish01_HPP

class ABP_RadarDish01_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* mesh_light;
    class URotatingMovementComponent* RotatingMovement;
    class UStaticMeshComponent* Mesh_Base;
    class UStaticMeshComponent* Mesh_Dish;
    class UStaticMeshComponent* Mesh_Arm;
    class UStaticMeshComponent* Mesh_Foot;
    class USceneComponent* DefaultSceneRoot;
    float RotationRate;

    void SetRotationRate(class URotatingMovementComponent* self2, float RotationRate);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_RadarDish01(int32 EntryPoint);
};

#endif
