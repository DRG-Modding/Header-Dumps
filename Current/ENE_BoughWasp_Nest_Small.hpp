#ifndef UE4SS_SDK_ENE_BoughWasp_Nest_Small_HPP
#define UE4SS_SDK_ENE_BoughWasp_Nest_Small_HPP

class AENE_BoughWasp_Nest_Small_C : public AInsectSwarmSpawner
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class UTerrainDetectComponent* TerrainDetect;
    class UTerrainPlacementComponent* terrainPlacement;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UStaticMeshComponent* SM_HollowboughWaspNest_01;
    class USceneComponent* Scene;
    class UOutlineComponent* outline;
    float Timeline_0_NewTrack_0_8FDE92A940E0DE45F55F4885FCDF9646;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_8FDE92A940E0DE45F55F4885FCDF9646;
    class UTimelineComponent* Timeline_0;
    class UParticleSystem* DeathParticle_1;
    class UParticleSystem* DeathParticle_2;

    class UStaticMeshComponent* Receive_GetStaticMesh();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnSwarmSpawned(class AInsectSwarmEnemy* Swarm);
    void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void BndEvt__Health_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float Amount);
    void OnFrozen(class AActor* Source);
    void OnUnFrozen();
    void OnNestDeath();
    void BndEvt__ENE_BoughWasp_Nest_Small_Health_K2Node_ComponentBoundEvent_2_DeathSigDetailed__DelegateSignature(class UHealthComponent* HealthComponent, float damageAmount, const FDamageData& DamageData, const TArray<class UDamageTag*>& Tags);
    void ExecuteUbergraph_ENE_BoughWasp_Nest_Small(int32 EntryPoint);
};

#endif
