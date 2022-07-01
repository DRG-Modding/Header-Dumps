#ifndef UE4SS_SDK_PRJ_WoodlouseAttack_HPP
#define UE4SS_SDK_PRJ_WoodlouseAttack_HPP

class APRJ_WoodlouseAttack_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* Damage;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USimpleHealthComponent* SimpleHealth;
    class URotatingMovementComponent* RotatingMovement;
    class UStaticMeshComponent* SK_ShootingPlant_Projectile;
    class UProjectileExplosion* ProjectileExplosion;
    class UParticleSystemComponent* ParticleComponent;
    class UAudioComponent* Audio;
    class UPointLightComponent* PointLight;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void GoBoom();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_PRJ_WoodlouseAttack(int32 EntryPoint);
};

#endif
