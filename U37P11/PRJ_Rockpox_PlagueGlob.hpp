#ifndef UE4SS_SDK_PRJ_Rockpox_PlagueGlob_HPP
#define UE4SS_SDK_PRJ_Rockpox_PlagueGlob_HPP

class APRJ_Rockpox_PlagueGlob_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* NS_Plague_Projectile_Trail;
    class UStaticMeshComponent* StaticMesh;
    class UDamageComponent* Damage;
    class UAudioComponent* audio;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_PRJ_Rockpox_PlagueGlob(int32 EntryPoint);
};

#endif
