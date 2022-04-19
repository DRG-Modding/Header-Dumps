#ifndef UE4SS_SDK_BP_Heartstone_DefensiveCrystal_HPP
#define UE4SS_SDK_BP_Heartstone_DefensiveCrystal_HPP

class ABP_Heartstone_DefensiveCrystal_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* ParticleSystem;
    class UTerrainPlacementComponent* terrainPlacement;
    class UPointLightComponent* FillLight;
    class UPointLightComponent* PointLight;
    class UTerrainDetectComponent* TerrainDetect3;
    class UAudioComponent* AudioChargeUp;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UAudioComponent* AudioGrow;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UStaticMeshComponent* Spike_SM;
    class UTerrainDetectComponent* TerrainDetect2;
    class UAudioComponent* AudioBeam;
    class UStaticMeshComponent* Beam;
    class USceneComponent* BeamRoot;
    class UBillboardComponent* AttackOrigin;
    class UDamageComponent* Damage;
    class USceneComponent* DefaultSceneRoot;
    float GrowLight_SoundVolume_AB5D1D304F66D83F8F0760B4A43F79FC;
    float GrowLight_LightIntensity_AB5D1D304F66D83F8F0760B4A43F79FC;
    TEnumAsByte<ETimelineDirection::Type> GrowLight__Direction_AB5D1D304F66D83F8F0760B4A43F79FC;
    class UTimelineComponent* GrowLight;
    class AActor* JEB;
    FTimerHandle DamageTimer;
    bool IsAttackingJEB;
    float LightIntensity;
    class ABP_EscortDestination_C* Heartstone;
    bool FinishedCarving;
    bool DoGrow;
    int32 NumPointsRemoved;
    float LightStartIntensity;
    FVector LaserImpactLocation;
    class UParticleSystemComponent* LaserImpactParticles;

    void OnRep_NumPointsRemoved();
    void IsDestroyed(bool& isDestoyed);
    void OnRep_DoGrow();
    void OnRep_FinishedCarving();
    void OnRep_IsAttackingJEB();
    void CheckLOStoJEB(bool& HaveLOStoJEB);
    void GrowLight__FinishedFunc();
    void GrowLight__UpdateFunc();
    void ReceiveBeginPlay();
    void CheckIfCanAttackJEB();
    void DamageJEB();
    void Grow();
    void BndEvt__TerrainDetect2_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void TurnOnBeamDamage();
    void MoveMesh();
    void ShootBeam();
    void BndEvt__TerrainDetect3_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void ReceiveDestroyed();
    void StopBeam();
    void DisableBeamer();
    void ExecuteUbergraph_BP_Heartstone_DefensiveCrystal(int32 EntryPoint);
};

#endif
