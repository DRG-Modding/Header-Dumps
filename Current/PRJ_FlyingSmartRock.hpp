#ifndef UE4SS_SDK_PRJ_FlyingSmartRock_HPP
#define UE4SS_SDK_PRJ_FlyingSmartRock_HPP

class APRJ_FlyingSmartRock_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class USpikeSkeletalMesh_C* SkeletalMesh;
    class UStaticMeshComponent* Core;
    class UDamageComponent* Damage;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USimpleHealthComponent* SimpleHealth;
    class URotatingMovementComponent* RotatingMovement;
    class UProjectileExplosion* ProjectileExplosion;
    class UParticleSystemComponent* ParticleComponent;
    class UAudioComponent* audio;
    class UMaterialInstanceDynamic* DynamicMaterial_Core;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    void GoBoom();
    void ExecuteUbergraph_PRJ_FlyingSmartRock(int32 EntryPoint);
};

#endif
