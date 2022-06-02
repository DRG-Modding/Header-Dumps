#ifndef UE4SS_SDK_ESI_HydraWeed_HPP
#define UE4SS_SDK_ESI_HydraWeed_HPP

class AESI_HydraWeed_C : public AEnemyShowroomItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* SkeletalMesh1;
    class USkeletalMeshComponent* SkeletalMesh;
    class USkeletalMeshComponent* ShootingPlant_small;
    class USceneComponent* Scale;
    class USceneComponent* DefaultSceneRoot;
    TArray<FSingleAnimationPlayData> Animations;
    int32 Index;
    float LastPlayTime;

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_ESI_HydraWeed(int32 EntryPoint);
};

#endif
