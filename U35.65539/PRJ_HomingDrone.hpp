#ifndef UE4SS_SDK_PRJ_HomingDrone_HPP
#define UE4SS_SDK_PRJ_HomingDrone_HPP

class APRJ_HomingDrone_C : UHomingDroneBomb
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* P_Homing_Drone_Jets2;
    UParticleSystemComponent* P_Homing_Drone_Jets1;
    UParticleSystemComponent* Particle_Trail;
    UParticleSystemComponent* P_Homing_Drone_Jets;
    UAudioComponent* HomingDroneIdle_Cue;
    UEnemyComponent* enemy;
    UOutlineComponent* outline;
    USceneComponent* Scene;
    UPointLightComponent* Light_Exhaust;
    UStaticMeshComponent* MeshRocket;
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
    void ExecuteUbergraph_PRJ_HomingDrone(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, bool CallFunc_HasAuthority_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent);
}

#endif
