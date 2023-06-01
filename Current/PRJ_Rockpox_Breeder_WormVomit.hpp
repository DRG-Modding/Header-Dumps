#ifndef UE4SS_SDK_PRJ_Rockpox_Breeder_WormVomit_HPP
#define UE4SS_SDK_PRJ_Rockpox_Breeder_WormVomit_HPP

class APRJ_Rockpox_Breeder_WormVomit_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* NS_Plague_Projectile_Trail;
    class USkeletalMeshComponent* ProjecitleMesh;
    class UProjectileExplosion* ProjectileExplosion;
    class UDamageComponent* Damage;
    bool Blocking Hit;
    int32 NumLarva;
    FVector2D NumLarvaMinMax;

    void DoOnSpawn();
    void OnInitialized();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_Rockpox_Breeder_WormVomit(int32 EntryPoint);
};

#endif
