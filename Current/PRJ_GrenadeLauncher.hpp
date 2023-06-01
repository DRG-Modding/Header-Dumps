#ifndef UE4SS_SDK_PRJ_GrenadeLauncher_HPP
#define UE4SS_SDK_PRJ_GrenadeLauncher_HPP

class APRJ_GrenadeLauncher_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UProjectileExplosion* ProjectileExplosionHyper;
    class UPointLightComponent* PointLight;
    class UProjectileExplosion* ProjectileExplosionMiniNuke;
    class UParticleSystemComponent* P_GrenadeTrail;
    class USphereComponent* Sphere;
    class UDamageComponent* Damage;
    class UProjectileExplosion* ProjectileExplosion;
    class UStaticMeshComponent* mesh_front;
    float ForcePush;
    bool Lit;
    float Speed;
    FRuntimeFloatCurve KnockBackCurve;
    bool IsHyper;
    FVector HitWorldLocation;
    FName HitBoneName;
    class AActor* hitActor;
    class UPrimitiveComponent* HitComponent;
    class UPhysicalMaterial* HitPMat;
    FVector HitNormal;

    void LaunchPlayer(class APlayerCharacter* Player);
    void OnRep_Lit();
    void UserConstructionScript();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void MakeBouncy();
    void Trigger(FHitResult HitResult);
    void DoOnSpawn();
    void ExecuteUbergraph_PRJ_GrenadeLauncher(int32 EntryPoint);
};

#endif
