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
    void ExecuteUbergraph_PRJ_SentryOvercharge_Projectile(int32 EntryPoint);
};

#endif
