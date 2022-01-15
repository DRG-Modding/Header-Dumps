#ifndef UE4SS_SDK_PRJ_WoodlouseAttack_HPP
#define UE4SS_SDK_PRJ_WoodlouseAttack_HPP

class APRJ_WoodlouseAttack_C : UProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    UDamageComponent* Damage;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    USimpleHealthComponent* SimpleHealth;
    URotatingMovementComponent* RotatingMovement;
    UStaticMeshComponent* SK_ShootingPlant_Projectile;
    UProjectileExplosion* ProjectileExplosion;
    UParticleSystemComponent* ParticleComponent;
    UAudioComponent* Audio;
    UPointLightComponent* PointLight;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void GoBoom();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_PRJ_WoodlouseAttack(int32 EntryPoint, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, bool Temp_bool_IsClosed_Variable, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable);
}

#endif
