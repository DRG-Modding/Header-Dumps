#ifndef UE4SS_SDK_BP_SupplyPod_Spawn_HPP
#define UE4SS_SDK_BP_SupplyPod_Spawn_HPP

class ABP_SupplyPod_Spawn_C : public ARessuplyPodSpawn
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainDetectComponent* TerrainDetect1;
    class UTerrainDetectComponent* TerrainDetect;
    class UDropToTerrainComponent* DropToTerrain;
    class UStaticMeshComponent* StaticMesh;
    class UChildActorComponent* CaveData;
    class UStaticMeshComponent* Cube;
    class UChildActorComponent* MisisonData;
    class UStaticMeshComponent* Mesh_Left;
    class UBoxComponent* Box_Left;
    class UStaticMeshComponent* Mesh_Back;
    class UBoxComponent* Box_Back;
    class UStaticMeshComponent* Mesh_Right;
    class UBoxComponent* Box_Right;
    class UStaticMeshComponent* mesh_front;
    class UBoxComponent* Box_Front;
    class USceneComponent* Doors;
    class UStaticMeshComponent* Cylinder;
    class UParticleSystemComponent* P_DropPod_DoorRocks1;
    class UParticleSystemComponent* P_DropPod_DoorRocks;
    class UMeshCarverComponent* MeshCarver;
    class UAudioComponent* DropPodDrilling_Supply_Cue;
    class UPointLightComponent* PointLight;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USceneComponent* PlayerSpawn;
    class UStaticMeshComponent* Mesh_Bottom;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class USkeletalMeshComponent* SK_DropPod_Drill;
    class UAudioComponent* audio;
    class UOutlineComponent* outline;
    class UAutoCarverComponent* AutoCarver;
    class URadarPointComponent* radarPoint;
    float Timeline_0_RedLightIntensity_B6127BD049EFB0C47436D5B0D49067CC;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_B6127BD049EFB0C47436D5B0D49067CC;
    class UTimelineComponent* Timeline_0;
    class AFSDPlayerController* Player;
    class APlayerCharacter* Character;
    bool RocksParticlesDisabled;
    bool SidesDestroyed;
    bool LightsOff;
    bool HideTheDoorsForLatejoiners;
    bool DoorsPushedAway;
    bool RemoveDoorsIfTheyAreNotPushed;

    void OnRep_RemoveDoorsIfTheyAreNotPushed();
    void OnRep_LightsOff();
    void DoorSlamAudio(class UPrimitiveComponent* prim);
    void FindNearestPlayer(class APlayerCharacter* fromCharacter, class APlayerCharacter*& OutNearestPlayer);
    void PushDoor(class UPrimitiveComponent* prim);
    void OnRep_SidesDestroyed();
    void OnRep_RocksParticlesDisabled();
    void OnRep_Character();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnDropStarted();
    void ReceiveTick(float DeltaSeconds);
    void OnDroppodCloseToImpact();
    void OnDroppodImpact();
    void Test Drop Pod();
    void ReceiveBeginPlay();
    void HandleWelcomeShouting(class APlayerCharacter* LateJoinCharacter);
    void BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__Box_Front_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__Box_Back_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__Box_Left_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void CameraShake(TSubclassOf<class UMatineeCameraShake> Shake, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);
    void SetController(class AFSDPlayerController* Controller);
    void SetCharacter(class APlayerCharacter* Character);
    void ExecuteUbergraph_BP_SupplyPod_Spawn(int32 EntryPoint);
};

#endif
