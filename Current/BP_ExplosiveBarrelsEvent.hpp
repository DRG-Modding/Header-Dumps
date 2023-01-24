#ifndef UE4SS_SDK_BP_ExplosiveBarrelsEvent_HPP
#define UE4SS_SDK_BP_ExplosiveBarrelsEvent_HPP

class ABP_ExplosiveBarrelsEvent_C : public AExplosiveBarrelEvent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPathfinderCollisionComponent* PathfinderCollision1;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UCapsuleComponent* Capsule1;
    class USceneComponent* Beam4;
    class UChildActorComponent* Starter8;
    class UChildActorComponent* Starter7;
    class UChildActorComponent* Starter1;
    class UChildActorComponent* Starter2;
    class USceneComponent* Beam3;
    class USceneComponent* Beam2;
    class USceneComponent* Beam1;
    class UStaticMeshComponent* Beam05;
    class UStaticMeshComponent* Beam01_Detail010;
    class UStaticMeshComponent* Beam01_Detail09;
    class UStaticMeshComponent* Beam03;
    class UStaticMeshComponent* Beam01_Detail08;
    class UStaticMeshComponent* Beam01_Detail07;
    class UStaticMeshComponent* Beam02;
    class UStaticMeshComponent* Beam01_Detail06;
    class UStaticMeshComponent* Beam01_Detail05;
    class UStaticMeshComponent* Beam01;
    class UStaticMeshComponent* Beam01_Detail04;
    class UStaticMeshComponent* Beam01_Detail03;
    class UStaticMeshComponent* StaticMesh;
    class ULevelGenerationCarverComponent* LevelGenerationCarver;
    class URoomCarverComponent* RoomCarver;
    class UOutlineComponent* outline;
    class UCapsuleComponent* Capsule;
    class USkeletalMeshComponent* SkeletalMesh;
    class UEnemyComponent* enemy;
    class UStaticMeshComponent* StaticMesh1;
    class UEnemyHealthComponent* EnemyHealth;
    class UTerrainPlacementComponent* terrainPlacement;
    FVector PodSpawnLocation;
    class UMaterialInstanceDynamic* Dynamic Material;
    FLinearColor InitialColor;
    FLinearColor FinalColor;
    FLinearColor InitialEdgeColor;
    FLinearColor FinalEdgeColor;
    TArray<FName> BoneNames;
    float InitialEmissive;
    float MaxSpawnRadius;
    float MaxRadiusSolo;
    float MaxPathLengthSolo;
    float MaxPathLegth;

    void UserConstructionScript();
    void OnEventTriggered();
    void OnEventFinished(bool eventSuccess);
    void ReceiveBeginPlay();
    void SpawnEnemies();
    void BndEvt__EnemyHealth_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature(float Amount);
    void BndEvt__EnemyHealth_K2Node_ComponentBoundEvent_0_HealthChangedSig__DelegateSignature(float Health);
    void BndEvt__EnemyHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void EndExplosion();
    void ExecuteUbergraph_BP_ExplosiveBarrelsEvent(int32 EntryPoint);
};

#endif
