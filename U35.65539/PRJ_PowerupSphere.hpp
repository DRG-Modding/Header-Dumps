#ifndef UE4SS_SDK_PRJ_PowerupSphere_HPP
#define UE4SS_SDK_PRJ_PowerupSphere_HPP

class APRJ_PowerupSphere_C : UProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    UOutlineComponent* outline;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    URotatingMovementComponent* RotatingMovement;
    UParticleSystemComponent* P_PickAxePowerUp_Glow;
    USphereComponent* PowerUpTrigger;
    UStaticMeshComponent* StaticMesh;
    FRuntimeFloatCurve FadeCurve;
    FTimerHandle LifetimeHandle;
    bool Moving;

    void OnRep_Moving();
    void ReceiveBeginPlay();
    void BndEvt__PowerUpTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature(const FHitResult& ImpactResult);
    void EndLife();
    void ExecuteUbergraph_PRJ_PowerupSphere(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_TryPushActiveStatusEffect_ReturnValue, UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, const FHitResult K2Node_ComponentBoundEvent_ImpactResult_1, const FVector K2Node_ComponentBoundEvent_ImpactVelocity, const FHitResult K2Node_ComponentBoundEvent_ImpactResult, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, FRotator CallFunc_MakeRotator_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue);
}

#endif
