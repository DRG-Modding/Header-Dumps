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

    void UserConstructionScript();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ReceiveBeginPlay();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Die();
    void ExecuteUbergraph_PRJ_Cryocannon(int32 EntryPoint);
};

#endif
