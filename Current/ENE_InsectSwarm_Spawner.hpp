#ifndef UE4SS_SDK_ENE_InsectSwarm_Spawner_HPP
#define UE4SS_SDK_ENE_InsectSwarm_Spawner_HPP

class AENE_InsectSwarm_Spawner_C : public AInsectSwarmSpawner
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class UTerrainDetectComponent* TerrainDetect;
    class UTerrainPlacementComponent* terrainPlacement;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UStaticMeshComponent* StaticMesh;
    class UOutlineComponent* outline;
    float Timeline_0_NewTrack_0_24041E04487F50C14665D9A721366BB3;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_24041E04487F50C14665D9A721366BB3;
    class UTimelineComponent* Timeline_0;

    class UStaticMeshComponent* Receive_GetStaticMesh();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnSwarmSpawned(class AInsectSwarmEnemy* Swarm);
    void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void BndEvt__Health_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float Amount);
    void OnFrozen(class AActor* Source);
    void OnUnFrozen();
    void ExecuteUbergraph_ENE_InsectSwarm_Spawner(int32 EntryPoint);
};

#endif
