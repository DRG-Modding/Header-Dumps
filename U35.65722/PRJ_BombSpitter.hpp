#ifndef UE4SS_SDK_PRJ_BombSpitter_HPP
#define UE4SS_SDK_PRJ_BombSpitter_HPP

class APRJ_BombSpitter_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* Damage;
    class USphereComponent* Sphere;
    class USimpleHealthComponent* SimpleHealth;
    class UProjectileExplosion* ProjectileExplosion;
    class UStaticMeshComponent* Projectile;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, class UDamageClass* DamageClass, class AActor* DamageCauser, bool anyHealthLost);
    void GoBoom();
    void ExecuteUbergraph_PRJ_BombSpitter(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, float K2Node_ComponentBoundEvent_Damage, class UDamageClass* K2Node_ComponentBoundEvent_damageClass, class AActor* K2Node_ComponentBoundEvent_DamageCauser, bool K2Node_ComponentBoundEvent_anyHealthLost, FVector CallFunc_K2_GetComponentLocation_ReturnValue);
};

#endif
