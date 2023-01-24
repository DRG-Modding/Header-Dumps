#ifndef UE4SS_SDK_PRJ_Spider_Tank_Boss_Eggshot_HPP
#define UE4SS_SDK_PRJ_Spider_Tank_Boss_Eggshot_HPP

class APRJ_Spider_Tank_Boss_Eggshot_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class URotatingMovementComponent* RotatingMovement;
    class UStaticMeshComponent* Mesh_Egg;
    class UDamageComponent* Damage;
    class UProjectileExplosion* ProjectileExplosion;
    class UParticleSystemComponent* Particle_Smoke;
    class UAudioComponent* audio;
    class UPointLightComponent* PointLight;
    class UEnemyDescriptor* EnemyToSpawn;
    int32 SpawnAmount;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_Spider_Tank_Boss_Eggshot(int32 EntryPoint);
};

#endif
