#ifndef UE4SS_SDK_BP_EscortGarage_HPP
#define UE4SS_SDK_BP_EscortGarage_HPP

class ABP_EscortGarage_C : public ARessuplyPod
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* KillWhileDropping;
    class USphereComponent* KillEnemiesSphere;
    class UMeshCarverComponent* DroppodImpactCarver1;
    class UPointLightComponent* PointLight;
    class UMeshCarverComponent* DroppodImpactCarver;
    class UPointLightComponent* buttonLight_04;
    class UPointLightComponent* buttonLight_03;
    class UPointLightComponent* buttonLight_02;
    class UPointLightComponent* buttonLight_01;
    class UStaticMeshComponent* ButtonMesh;
    class UStaticMeshComponent* ButtonMesh3;
    class UStaticMeshComponent* ButtonMesh2;
    class UStaticMeshComponent* ButtonMesh1;
    class USceneComponent* buttons;
    class USceneComponent* DrillDozerSpawnPoint;
    class UActorTrackingComponent* ActorTracking;
    class UPointLightComponent* PointLight_FlapBack1;
    class UPointLightComponent* PointLight_FlapBack0;
    class UPointLightComponent* PointLight_FlapLeft1;
    class UPointLightComponent* PointLight_FlapLeft0;
    class UPointLightComponent* PointLight_FlapRight1;
    class UPointLightComponent* PointLight_FlapRight0;
    class UPointLightComponent* PointLight_FlapFront1;
    class UPointLightComponent* PointLight_FlapFront0;
    class UPointLightComponent* PointLight_Inside3;
    class UPointLightComponent* PointLight_Inside2;
    class UPointLightComponent* PointLight_Inside1;
    class UPointLightComponent* PointLight_Inside0;
    class UBoxComponent* CollisionDecending;
    class USphereComponent* Sphere3;
    class USphereComponent* Sphere2;
    class USphereComponent* Sphere1;
    class UOutlineComponent* outline;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USceneComponent* RespawnLocation;
    class USkeletalMeshComponent* SK_DrillDozerGarage;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UBoxComponent* Box;
    class UAutoCarverComponent* AutoCarver;
    class USingleUsableComponent* SingleUsable;
    class USphereComponent* Sphere;
    class UTerrainPlacementComponent* terrainPlacement;
    class USkeletalMeshComponent* Drill;
    TSubclassOf<class AActor> EscortMuleClass;
    bool HasBeenOpened;
    class UParticleSystemComponent* DrillParticles01;
    class UParticleSystemComponent* DrillParticles02;
    class AEscortMule* SpawnedMule;
    class UStaticMeshComponent* NewVar_0;

    void OnRep_HasBeenOpened();
    void ReceiveBeginPlay();
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void OnDroppodImpact();
    void OnDropStarted();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Damage_K2Node_ComponentBoundEvent_1_OnEnemyKilledDelegate__DelegateSignature(class AActor* Target, class UFSDPhysicalMaterial* PhysicalMaterial, bool bWasDirectHit);
    void BndEvt__BP_EscortGarage_KillEnemiesSphere_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_EscortGarage(int32 EntryPoint);
};

#endif
