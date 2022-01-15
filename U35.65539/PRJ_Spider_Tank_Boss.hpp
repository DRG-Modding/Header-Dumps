#ifndef UE4SS_SDK_PRJ_Spider_Tank_Boss_HPP
#define UE4SS_SDK_PRJ_Spider_Tank_Boss_HPP

class APRJ_Spider_Tank_Boss_C : UProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UDamageComponent* Damage;
    UProjectileExplosion* ProjectileExplosion;
    UParticleSystemComponent* ParticleComponent;
    UAudioComponent* Audio;
    UPointLightComponent* PointLight;
    float LightIntensity;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_Spider_Tank_Boss(int32 EntryPoint, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, bool CallFunc_HasAuthority_ReturnValue);
}

#endif
