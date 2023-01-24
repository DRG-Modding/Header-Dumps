#ifndef UE4SS_SDK_PRJ_BigGooProjectile_HPP
#define UE4SS_SDK_PRJ_BigGooProjectile_HPP

class APRJ_BigGooProjectile_C : public APRJ_BaseBigGooProjectile_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Timeline_0_NewTrack_0_74F2130944154F0318A73A910B7DD01B;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_74F2130944154F0318A73A910B7DD01B;
    class UTimelineComponent* Timeline_0;
    float ClusterEjectionForce;
    TSubclassOf<class AProjectileBase> FragmentClass;

    void SpawnSmallGoo(FVector InVec);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void SpawnSmallGooBalls(FVector ImpactNormal);
    void OnUpgradeElementAdded(class UProjectileUpgradeElement* element);
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void OnInitialized();
    void ExecuteUbergraph_PRJ_BigGooProjectile(int32 EntryPoint);
};

#endif
