#ifndef UE4SS_SDK_PRJ_Cryocannon_HPP
#define UE4SS_SDK_PRJ_Cryocannon_HPP

class APRJ_Cryocannon_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URotatingMovementComponent* RotatingMovement;
    class UDamageComponent* DamageImpact;
    class USphereComponent* Sphere;
    class UStaticMeshComponent* StaticMesh;
    class UDamageComponent* DamageGraze;
    class UProjectileExplosion* ProjectileExplosion;
    class UParticleSystemComponent* ParticleSystem;

    void UserConstructionScript(FRotator CallFunc_RandomRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FRotator CallFunc_MakeRotator_ReturnValue, FHitResult CallFunc_K2_AddLocalRotation_SweepHitResult);
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ReceiveBeginPlay();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Die();
    void ExecuteUbergraph_PRJ_Cryocannon(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, FVector CallFunc_GetUpVector_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, FVector CallFunc_K2_GetActorLocation_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
};

#endif
