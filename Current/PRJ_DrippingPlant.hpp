#ifndef UE4SS_SDK_PRJ_DrippingPlant_HPP
#define UE4SS_SDK_PRJ_DrippingPlant_HPP

class APRJ_DrippingPlant_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* Damage;
    class UParticleSystemComponent* ParticleComponent;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_DrippingPlant(int32 EntryPoint);
};

#endif
