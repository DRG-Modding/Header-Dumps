#ifndef UE4SS_SDK_ENE_ElectricPlantVThree_HPP
#define UE4SS_SDK_ENE_ElectricPlantVThree_HPP

class AENE_ElectricPlantVThree_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* RevengeDamage;
    class UCapsuleComponent* DamageCapsule;
    class UAudioComponent* ElectricPlantIdle;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USimpleHealthComponent* SimpleHealth;
    class UPointLightComponent* PointLight;
    class UTerrainDetectComponent* TerrainDetect;
    class USceneComponent* TargetPoint;
    class UTerrainPlacementComponent* terrainPlacement;
    class UParticleSystemComponent* ParticleSystem;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;
    float Radius;
    TArray<class USceneComponent*> TargetList;
    class UParticleSystem* deathEffect;
    TArray<class AElectroBeam*> Beams;
    class USoundBase* deathSound;
    TArray<class UStaticMesh*> Meshes;
    bool HasAtLeastOneConnection;
    bool PlayEffectsOnDeath;
    float MinAllowedDistanceToOtherElectricPlants;

    void InstaDie();
    void RemoveNeighbourBeams(class AActor* Neighbour);
    void RemoveBeams();
    void SetBeamCollisionRight(FVector StartPoint, FVector EndPoint, class UCapsuleComponent* collider, class UCapsuleComponent*& ColliderOut);
    void CreateBeam(class USceneComponent* Source, class USceneComponent* Target, class AElectroBeam*& Beam);
    void LineTraceConnection(class USceneComponent* Source, class USceneComponent* Target, class AActor* Neighbour, bool& Result);
    void SetupConnection(class USceneComponent* BeamSource, class USceneComponent* BeamTarget, class AActor* Neighbour);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void OnMatchStarted_Event_0();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__DamageCapsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__DamageCapsule_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_ENE_ElectricPlantVThree(int32 EntryPoint);
};

#endif
