#ifndef UE4SS_SDK_PRJ_PatrolBotRocket_HPP
#define UE4SS_SDK_PRJ_PatrolBotRocket_HPP

class APRJ_PatrolBotRocket_C : UHomingDroneBomb
{
    FPointerToUberGraphFrame UberGraphFrame;
    USphereComponent* Sphere;
    UParticleSystemComponent* Particle_Trail1;
    UStaticMeshComponent* MeshRocket1;
    UPointLightComponent* Light_Exhaust1;
    UParticleSystemComponent* Particle_Exhaust;
    USceneComponent* Visuals;
    UAudioComponent* HomingDroneIdle_Cue;
    UEnemyComponent* enemy;
    UOutlineComponent* outline;
    UProjectileExplosion* ProjectileExplosion;
    UDamageComponent* Damage;
    bool Explode;

    bool GetIsTargetable(bool CallFunc_IsAlive_ReturnValue);
    FVector GetTargetCenterMass(FVector CallFunc_K2_GetActorLocation_ReturnValue);
    UHealthComponentBase* GetTargetHealthComponent();
    void ShowDamageEffects(UParticleSystem* Particles, FVector Location, FRotator Orientation);
    void OnRep_Explode(FVector CallFunc_K2_GetActorLocation_ReturnValue);
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_PRJ_PatrolBotRocket(int32 EntryPoint, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, bool CallFunc_HasAuthority_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, FVector CallFunc_K2_GetActorLocation_ReturnValue);
}

#endif
