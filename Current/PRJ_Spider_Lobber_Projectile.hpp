#ifndef UE4SS_SDK_PRJ_Spider_Lobber_Projectile_HPP
#define UE4SS_SDK_PRJ_Spider_Lobber_Projectile_HPP

class APRJ_Spider_Lobber_Projectile_C : public APRJ_Base_Spider_Lobber_Projectile_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleHealthComponent* SimpleHealth;
    class UProjectileExplosion* ProjectileExplosion;
    float Timeline_0_NewTrack_0_1997C95D415B8B6775FF2BACB50CF47A;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_1997C95D415B8B6775FF2BACB50CF47A;
    class UTimelineComponent* Timeline_0;

    void SpawnSmallGoo(FVector InVec);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnInitialized();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void All_SpawnEffects(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal);
    void SpawnEffects(const FVector& Location, const FVector& Normal);
    void BndEvt__PRJ_Spider_Lobber_Projectile_SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_PRJ_Spider_Lobber_Projectile(int32 EntryPoint);
};

#endif
