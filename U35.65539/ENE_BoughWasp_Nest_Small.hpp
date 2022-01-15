#ifndef UE4SS_SDK_ENE_BoughWasp_Nest_Small_HPP
#define UE4SS_SDK_ENE_BoughWasp_Nest_Small_HPP

class AENE_BoughWasp_Nest_Small_C : UInsectSwarmSpawner
{
    FPointerToUberGraphFrame UberGraphFrame;
    UPointLightComponent* PointLight;
    UTerrainDetectComponent* TerrainDetect;
    UTerrainPlacementComponent* terrainPlacement;
    UPathfinderCollisionComponent* PathfinderCollision;
    UStaticMeshComponent* SM_HollowboughWaspNest_01;
    USceneComponent* Scene;
    UOutlineComponent* outline;
    float Timeline_0_NewTrack_0_8FDE92A940E0DE45F55F4885FCDF9646;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_8FDE92A940E0DE45F55F4885FCDF9646;
    UTimelineComponent* Timeline_0;
    UParticleSystem* DeathParticle_1;
    UParticleSystem* DeathParticle_2;

    UStaticMeshComponent* Receive_GetStaticMesh();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnSwarmSpawned(UInsectSwarmEnemy* Swarm);
    void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void BndEvt__Health_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float Amount);
    void OnFrozen(AActor* Source);
    void OnUnFrozen();
    void OnNestDeath();
    void BndEvt__Health_K2Node_ComponentBoundEvent_2_DeathSigDetailed__DelegateSignature(UHealthComponent* HealthComponent, float damageAmount, UDamageClass* DamageClass, AActor* damageCause, AController* Instigator, UFSDPhysicalMaterial* PhysicalMaterial, bool IsRadial, const TArray<UDamageTag*>& Tags);
    void ExecuteUbergraph_ENE_BoughWasp_Nest_Small(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, UInsectSwarmEnemy* K2Node_Event_Swarm, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent_1, float K2Node_ComponentBoundEvent_Amount, AActor* K2Node_Event_source, FVector CallFunc_GetSocketLocation_ReturnValue, FRotator CallFunc_GetSocketRotation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, UHealthComponent* K2Node_ComponentBoundEvent_HealthComponent, float K2Node_ComponentBoundEvent_damageAmount, UDamageClass* K2Node_ComponentBoundEvent_damageClass, AActor* K2Node_ComponentBoundEvent_damageCause, AController* K2Node_ComponentBoundEvent_instigator, UFSDPhysicalMaterial* K2Node_ComponentBoundEvent_physicalMaterial, bool K2Node_ComponentBoundEvent_isRadial, const TArray<UDamageTag*>& K2Node_ComponentBoundEvent_tags);
}

#endif
