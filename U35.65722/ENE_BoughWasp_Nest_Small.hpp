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
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void BndEvt__Health_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float Amount);
    void OnFrozen(class AActor* Source);
    void OnUnFrozen();
    void OnNestDeath();
    void BndEvt__Health_K2Node_ComponentBoundEvent_2_DeathSigDetailed__DelegateSignature(class UHealthComponent* HealthComponent, float damageAmount, class UDamageClass* DamageClass, class AActor* damageCause, class AController* Instigator, class UFSDPhysicalMaterial* PhysicalMaterial, bool IsRadial, const TArray<class UDamageTag*>& Tags);
    void ExecuteUbergraph_ENE_BoughWasp_Nest_Small(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AInsectSwarmEnemy* K2Node_Event_Swarm, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent_1, float K2Node_ComponentBoundEvent_Amount, class AActor* K2Node_Event_source, FVector CallFunc_GetSocketLocation_ReturnValue, FRotator CallFunc_GetSocketRotation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, class UHealthComponent* K2Node_ComponentBoundEvent_HealthComponent, float K2Node_ComponentBoundEvent_damageAmount, class UDamageClass* K2Node_ComponentBoundEvent_damageClass, class AActor* K2Node_ComponentBoundEvent_damageCause, class AController* K2Node_ComponentBoundEvent_instigator, class UFSDPhysicalMaterial* K2Node_ComponentBoundEvent_physicalMaterial, bool K2Node_ComponentBoundEvent_isRadial, const TArray<class UDamageTag*>& K2Node_ComponentBoundEvent_tags);
};

#endif
