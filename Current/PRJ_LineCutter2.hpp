#ifndef UE4SS_SDK_PRJ_LineCutter2_HPP
#define UE4SS_SDK_PRJ_LineCutter2_HPP

class APRJ_LineCutter2_C : public ALineCutterProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* P_Plasma_Projectile3;
    class UStaticMeshComponent* SM_Linecutter_Projectile_A_Right3;
    class USphereComponent* SphereRight3;
    class UStaticMeshComponent* SM_Linecutter_Projectile_A_Left3;
    class USphereComponent* SphereLeft3;
    class USphereComponent* SphereRight;
    class USphereComponent* SphereLeft;
    class USphereComponent* SphereRight2;
    class USphereComponent* SphereLeft2;
    class UParticleSystemComponent* P_Plasma_Projectile2;
    class UParticleSystemComponent* P_Plasma_Projectile;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* SM_Linecutter_Projectile_A_Right2;
    class UStaticMeshComponent* SM_Linecutter_Projectile_A_Left2;
    class UDamageComponent* DamageExplosion;
    class UProjectileExplosion* ProjectileExplosion;
    class UStaticMeshComponent* SM_Linecutter_Projectile_A_Left;
    class UStaticMeshComponent* SM_Linecutter_Projectile_A_Right;
    float ProjectileSlowdown_Velocity_3314D5764A0652510BE0E38ABA90D3FC;
    TEnumAsByte<ETimelineDirection::Type> ProjectileSlowdown__Direction_3314D5764A0652510BE0E38ABA90D3FC;
    class UTimelineComponent* ProjectileSlowdown;
    FTimerHandle ExpandLineTimerHandle;
    int32 TimerHandleExecutions;
    float VisualMaxSize;
    FTimerHandle FireTimerHandle;
    FTimerHandle DestructionByTerrainTimerHandle;
    float TerrainCallTime;
    int32 TerrainIndex;
    FTimerHandle ReduceLineTimerHandle;
    TSubclassOf<class AActor> PersistantExplosion;

    void AdjustLineSize();
    void UserConstructionScript();
    void ProjectileSlowdown__FinishedFunc();
    void ProjectileSlowdown__UpdateFunc();
    void DisableProjectile();
    void ExpandLine();
    void DoDamage();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void StartLineExpansion();
    void CheckTerrainCall();
    void K2_OnReset();
    void LinelifespanDestroy();
    void Explode();
    void LineReducing();
    void ThereCanBeOnlyOne();
    void OnLineDestroyed(const FHitResult& Result);
    void SetExtraBeamVisibility(bool IsVisible);
    void LeaveTrail();
    void StartSpawningTrail();
    void OnInitialized();
    void OnPenetrated(bool PredictedPenetration, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_LineCutter2(int32 EntryPoint);
};

#endif
