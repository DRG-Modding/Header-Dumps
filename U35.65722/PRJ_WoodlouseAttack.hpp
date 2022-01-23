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
    void ExecuteUbergraph_PRJ_WoodlouseAttack(int32 EntryPoint, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, bool Temp_bool_IsClosed_Variable, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable);
};

#endif
