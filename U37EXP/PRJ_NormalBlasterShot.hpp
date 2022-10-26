#ifndef UE4SS_SDK_PRJ_NormalBlasterShot_HPP
#define UE4SS_SDK_PRJ_NormalBlasterShot_HPP

class APRJ_NormalBlasterShot_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UProjectileExplosion* ProjectileExplosionSplash;
    class UProjectileExplosion* BurningPlasmaProjectileExplosion;
    class UProjectileExplosion* ProjectileExplosion;
    class UDamageComponent* Damage;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* StaticMesh;
    int32 MaxBounces;
    bool HotPlasma;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void MakeBouncy();
    void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    void DoEffects(FVector Location, FVector Normal);
    void CustomEvent(const class UItemUpgrade* Event);
    void BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_PRJ_NormalBlasterShot(int32 EntryPoint);
};

#endif
