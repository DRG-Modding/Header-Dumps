#ifndef UE4SS_SDK_BP_PassiveFoliage_Base_HPP
#define UE4SS_SDK_BP_PassiveFoliage_Base_HPP

class ABP_PassiveFoliage_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USimpleHealthComponent* SimpleHealth;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UTerrainDetectComponent* TerrainDetect;
    class UTerrainPlacementComponent* terrainPlacement;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;
    class UParticleSystem* deathParticles;
    class USoundCue* deathSound;

    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void OnTerrainPointRemoved();
    void ExecuteUbergraph_BP_PassiveFoliage_Base(int32 EntryPoint);
};

#endif
