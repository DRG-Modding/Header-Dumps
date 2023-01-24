#ifndef UE4SS_SDK_ESI_SpiderSpawner_HPP
#define UE4SS_SDK_ESI_SpiderSpawner_HPP

class AESI_SpiderSpawner_C : public AEnemyShowroomItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* Spawn1;
    class USkeletalMeshComponent* Spawn2;
    class USceneComponent* WalkPoint6;
    class USceneComponent* WalkPoint5;
    class USceneComponent* WalkPoint4;
    class USceneComponent* WalkPoint3;
    class USceneComponent* WalkPoint2;
    class USceneComponent* WalkPoint1;
    class USkeletalMeshComponent* Spawner_Eye1_Rig;
    class USkeletalMeshComponent* Spawner_Eye4_Rig;
    class USkeletalMeshComponent* Spawner_Eye3_Rig;
    class USkeletalMeshComponent* Spawner_Eye2_Rig;
    class USkeletalMeshComponent* SK_Spawner;
    class USceneComponent* DefaultSceneRoot;
    TArray<int32> CurrPos;
    TArray<int32> EndPoint;
    TArray<float> StartTime;
    float WalkTime;
    TArray<bool> IsWalking;
    TArray<class USceneComponent*> WalkPoints;
    TArray<class USkeletalMeshComponent*> Spiders;
    TArray<FRotator> StartRotation;

    void UpdateWalking();
    void WalkToPoint(class USkeletalMeshComponent* Spider);
    void GetPointPos(int32 Index, FVector& Pos);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void Delay1();
    void Delay2();
    void ExecuteUbergraph_ESI_SpiderSpawner(int32 EntryPoint);
};

#endif
