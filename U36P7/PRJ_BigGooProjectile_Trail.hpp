#ifndef UE4SS_SDK_PRJ_BigGooProjectile_Trail_HPP
#define UE4SS_SDK_PRJ_BigGooProjectile_Trail_HPP

class APRJ_BigGooProjectile_Trail_C : public APRJ_BaseBigGooProjectile_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float CurrentClusterPitch;
    float ClusterEjectionForce;
    TSubclassOf<class AProjectileBase> FragmentSize;
    int32 SpawnedFragments;
    FTimerHandle SpawnTimer;

    void OnRep_SpawnedFragments();
    void OnInitialized();
    void SpawnFragments();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void OnUpgradeElementAdded(class UProjectileUpgradeElement* element);
    void ExecuteUbergraph_PRJ_BigGooProjectile_Trail(int32 EntryPoint);
};

#endif
