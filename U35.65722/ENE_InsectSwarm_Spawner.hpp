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
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void BndEvt__Health_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float Amount);
    void OnFrozen(class AActor* Source);
    void OnUnFrozen();
    void ExecuteUbergraph_ENE_InsectSwarm_Spawner(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AInsectSwarmEnemy* K2Node_Event_Swarm, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, FRotator CallFunc_GetSocketRotation_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, float K2Node_ComponentBoundEvent_Amount, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, class AActor* K2Node_Event_source);
};

#endif
