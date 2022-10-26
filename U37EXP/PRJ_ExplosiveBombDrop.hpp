#ifndef UE4SS_SDK_PRJ_ExplosiveBombDrop_HPP
#define UE4SS_SDK_PRJ_ExplosiveBombDrop_HPP

class APRJ_ExplosiveBombDrop_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UExplosionComponent* Explosion;
    class UDamageComponent* Damage;
    class UStaticMeshComponent* StaticMesh;
    class USoundBase* Impact Sound;
    class UParticleSystem* Impact particles;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_ExplosiveBombDrop(int32 EntryPoint);
};

#endif
