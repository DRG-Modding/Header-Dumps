#ifndef UE4SS_SDK_PRJ_Spider_Boss_Twin_Multifireball_HPP
#define UE4SS_SDK_PRJ_Spider_Boss_Twin_Multifireball_HPP

class APRJ_Spider_Boss_Twin_Multifireball_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UDamageComponent* Damage;
    class UProjectileExplosion* ProjectileExplosion;
    class UParticleSystemComponent* ParticleComponent;
    class UAudioComponent* Audio;
    class UPointLightComponent* PointLight;
    float LightIntensity;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_PRJ_Spider_Boss_Twin_Multifireball(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, bool CallFunc_HasAuthority_ReturnValue_1);
};

#endif
