#ifndef UE4SS_SDK_PRJ_PowerupSphere_HPP
#define UE4SS_SDK_PRJ_PowerupSphere_HPP

class APRJ_PowerupSphere_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOutlineComponent* outline;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class URotatingMovementComponent* RotatingMovement;
    class UParticleSystemComponent* P_PickAxePowerUp_Glow;
    class USphereComponent* PowerUpTrigger;
    class UStaticMeshComponent* StaticMesh;
    FRuntimeFloatCurve FadeCurve;
    FTimerHandle LifetimeHandle;
    bool Moving;

    void OnRep_Moving();
    void ReceiveBeginPlay();
    void BndEvt__PowerUpTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature(const FHitResult& ImpactResult);
    void EndLife();
    void ExecuteUbergraph_PRJ_PowerupSphere(int32 EntryPoint);
};

#endif
