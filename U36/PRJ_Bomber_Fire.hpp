#ifndef UE4SS_SDK_PRJ_Bomber_Fire_HPP
#define UE4SS_SDK_PRJ_Bomber_Fire_HPP

class APRJ_Bomber_Fire_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UProjectileExplosion* ProjectileExplosion;
    class UDamageComponent* Damage;
    class UStaticMeshComponent* ProjectileMesh;
    class UPointLightComponent* AreaLight;
    bool HasExploded;
    class UAudioComponent* AlarmSound;
    float TimeToExplode;

    void OnRep_HasExploded();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_PRJ_Bomber_Fire(int32 EntryPoint);
};

#endif
