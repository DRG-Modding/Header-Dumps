#ifndef UE4SS_SDK_PRJ_Rockpox_Breede_VomitedLarva_HPP
#define UE4SS_SDK_PRJ_Rockpox_Breede_VomitedLarva_HPP

class APRJ_Rockpox_Breede_VomitedLarva_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* Spitballer_BlueGooSplat_Cue;
    class UNiagaraComponent* NS_Plague_Projectile_Trail;
    class USkeletalMeshComponent* ProjecitleMesh;
    class UProjectileExplosion* ProjectileExplosion;
    class UDamageComponent* Damage;
    bool Blocking Hit;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void DoOnSpawn();
    void OnInitialized();
    void ExecuteUbergraph_PRJ_Rockpox_Breede_VomitedLarva(int32 EntryPoint);
};

#endif
