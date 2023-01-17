#ifndef UE4SS_SDK_PRJ_Grenade_StickySmall_HPP
#define UE4SS_SDK_PRJ_Grenade_StickySmall_HPP

class APRJ_Grenade_StickySmall_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UExplosionComponent* Explosion;
    class UDamageComponent* BoomDamage;
    class UDamageComponent* SpikeDamage;
    class URotatingMovementComponent* RotatingMovement;
    class UParticleSystemComponent* Trail;
    class UStaticMeshComponent* mesh_front;
    float ExplosionDelay;
    class USoundBase* ExplosionSound;
    class UParticleSystem* ExplosionParticles;
    FTimerHandle BeepTimer;
    class AActor* StickyTarget;
    class UPrimitiveComponent* StickyTargetHitComponent;
    class USoundMix* ExplosionMixModifier;
    float ExplosionDuckingTime;
    float ExplosionDuckMinDistance;
    float ExplosionDuckMaxDistance;
    FStickeyAttach StickyAttach;

    void OnRep_Stick();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ReceiveBeginPlay();
    void Boom();
    void Beep();
    void ExecuteUbergraph_PRJ_Grenade_StickySmall(int32 EntryPoint);
};

#endif
