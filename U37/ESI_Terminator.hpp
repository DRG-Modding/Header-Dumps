#ifndef UE4SS_SDK_ESI_Terminator_HPP
#define UE4SS_SDK_ESI_Terminator_HPP

class AESI_Terminator_C : public AEnemyShowroomItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* Scene;
    class USkeletalMeshComponent* SkeletalMesh;
    class USceneComponent* Location;
    class URotatingMovementComponent* RotatingMovement;
    class USkeletalMeshComponent* ArmMeshLeft;
    class USkeletalMeshComponent* ArmMeshRight;
    class USkeletalMeshComponent* ArmHeadRight;
    class USkeletalMeshComponent* ArmHeadLeft;
    class USceneComponent* DefaultSceneRoot;
    float Random X Location;
    float Random Y Location;
    float Random Z Location;
    float Random X Rotation;
    float Random Y Rotation;
    float Random Z Rotation;
    float Max Rotation;
    float Min Rotation;
    float Max Location;
    float Min Location;

    void ReceiveBeginPlay();
    void Random Locations();
    void Random Rotations();
    void ExecuteUbergraph_ESI_Terminator(int32 EntryPoint);
};

#endif
