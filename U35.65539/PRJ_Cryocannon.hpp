#ifndef UE4SS_SDK_PRJ_Cryocannon_HPP
#define UE4SS_SDK_PRJ_Cryocannon_HPP

class APRJ_Cryocannon_C : UProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    URotatingMovementComponent* RotatingMovement;
    UDamageComponent* DamageImpact;
    USphereComponent* Sphere;
    UStaticMeshComponent* StaticMesh;
    UDamageComponent* DamageGraze;
    UProjectileExplosion* ProjectileExplosion;
    UParticleSystemComponent* ParticleSystem;

    void UserConstructionScript(FRotator CallFunc_RandomRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FRotator CallFunc_MakeRotator_ReturnValue, FHitResult CallFunc_K2_AddLocalRotation_SweepHitResult);
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ReceiveBeginPlay();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Die();
    void ExecuteUbergraph_PRJ_Cryocannon(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, FVector CallFunc_GetUpVector_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, FVector CallFunc_K2_GetActorLocation_ReturnValue, APawn* CallFunc_GetInstigator_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
}

#endif
