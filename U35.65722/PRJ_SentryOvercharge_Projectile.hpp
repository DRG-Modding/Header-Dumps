#ifndef UE4SS_SDK_PRJ_SentryOvercharge_Projectile_HPP
#define UE4SS_SDK_PRJ_SentryOvercharge_Projectile_HPP

class APRJ_SentryOvercharge_Projectile_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* P_GrenadeTrail;
    class USphereComponent* Sphere;
    class UDamageComponent* Damage;
    class UProjectileExplosion* ProjectileExplosion;
    class UStaticMeshComponent* mesh_front;

    void UserConstructionScript();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveBeginPlay();
    void MakeBouncy();
    void ExecuteUbergraph_PRJ_SentryOvercharge_Projectile(int32 EntryPoint, class APlayerCharacter* CallFunc_GetLocalPlayerCharacter_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_2, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, class AFSDPawn* K2Node_DynamicCast_AsFSDPawn, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, FHitResult CallFunc_MakeHitResult_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FRotator CallFunc_K2_GetActorRotation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
};

#endif
