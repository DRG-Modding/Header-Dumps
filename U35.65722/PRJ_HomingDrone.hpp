#ifndef UE4SS_SDK_PRJ_HomingDrone_HPP
#define UE4SS_SDK_PRJ_HomingDrone_HPP

class APRJ_HomingDrone_C : public AHomingDroneBomb
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* P_Homing_Drone_Jets2;
    class UParticleSystemComponent* P_Homing_Drone_Jets1;
    class UParticleSystemComponent* Particle_Trail;
    class UParticleSystemComponent* P_Homing_Drone_Jets;
    class UAudioComponent* HomingDroneIdle_Cue;
    class UEnemyComponent* enemy;
    class UOutlineComponent* outline;
    class USceneComponent* Scene;
    class UPointLightComponent* Light_Exhaust;
    class UStaticMeshComponent* MeshRocket;
    class UProjectileExplosion* ProjectileExplosion;
    class UDamageComponent* Damage;
    bool Explode;

    bool GetIsTargetable(bool CallFunc_IsAlive_ReturnValue);
    FVector GetTargetCenterMass(FVector CallFunc_K2_GetActorLocation_ReturnValue);
    class UHealthComponentBase* GetTargetHealthComponent();
    void ShowDamageEffects(class UParticleSystem* Particles, FVector Location, FRotator Orientation);
    void OnRep_Explode(FVector CallFunc_K2_GetActorLocation_ReturnValue);
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_PRJ_HomingDrone(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, bool CallFunc_HasAuthority_ReturnValue, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent);
};

#endif
