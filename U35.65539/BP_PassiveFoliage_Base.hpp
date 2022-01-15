#ifndef UE4SS_SDK_BP_PassiveFoliage_Base_HPP
#define UE4SS_SDK_BP_PassiveFoliage_Base_HPP

class ABP_PassiveFoliage_Base_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    USimpleHealthComponent* SimpleHealth;
    UPathfinderCollisionComponent* PathfinderCollision;
    UTerrainDetectComponent* TerrainDetect;
    UTerrainPlacementComponent* terrainPlacement;
    UStaticMeshComponent* StaticMesh;
    USceneComponent* DefaultSceneRoot;
    UParticleSystem* deathParticles;
    USoundCue* deathSound;

    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void OnTerrainPointRemoved();
    void ExecuteUbergraph_BP_PassiveFoliage_Base(int32 EntryPoint, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent);
}

#endif
