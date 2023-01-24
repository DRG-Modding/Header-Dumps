#ifndef UE4SS_SDK_PRJ_Spider_Boss_Heavy_HPP
#define UE4SS_SDK_PRJ_Spider_Boss_Heavy_HPP

class APRJ_Spider_Boss_Heavy_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Niagara;
    class URotatingMovementComponent* RotatingMovement;
    class UDamageComponent* Damage;
    class UTerrainPlacementComponent* terrainPlacement;
    class UStaticMeshComponent* StaticMesh;
    float MaxLevitation;
    float GravityScale;
    FRotator RotationRate;

    void OnRep_RotationRate();
    void OnRep_GravityScale();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void OnInitialized();
    void ExecuteUbergraph_PRJ_Spider_Boss_Heavy(int32 EntryPoint);
};

#endif
