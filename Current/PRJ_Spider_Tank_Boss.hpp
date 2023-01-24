#ifndef UE4SS_SDK_PRJ_Spider_Tank_Boss_HPP
#define UE4SS_SDK_PRJ_Spider_Tank_Boss_HPP

class APRJ_Spider_Tank_Boss_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UDamageComponent* Damage;
    class UProjectileExplosion* ProjectileExplosion;
    class UParticleSystemComponent* ParticleComponent;
    class UAudioComponent* audio;
    class UPointLightComponent* PointLight;
    float LightIntensity;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_Spider_Tank_Boss(int32 EntryPoint);
};

#endif
