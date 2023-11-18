#ifndef UE4SS_SDK_WPN_LineCutter_HPP
#define UE4SS_SDK_WPN_LineCutter_HPP

class AWPN_LineCutter_C : public ALineCutter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* HomingTarget;
    class UFirstPersonWidgetComponent* Widget_TotalAmmo;
    class UFirstPersonWidgetComponent* Widget_CurrentClip;
    class UFirstPersonParticleSystemComponent* FP_P_Plasma_Beam_Right;
    class UPointLightComponent* MuzzleLight;
    class UPointLightComponent* Line_Light;
    class UFirstPersonParticleSystemComponent* FP_P_Plasma_Beam;
    class UCrosshairAggregator* CrosshairAggregator;
    class UProjectileLauncherComponent* projectileLauncher;
    float Flicker_Brightness_Intensity_E04C79F0493C5086E3B612961CA53D93;
    TEnumAsByte<ETimelineDirection::Type> Flicker_Brightness__Direction_E04C79F0493C5086E3B612961CA53D93;
    class UTimelineComponent* Flicker Brightness;
    float DamageFrequency;
    class APRJ_LineCutter2_C* CurrentProjectile;
    float HomingTraceDistance;
    float HomingSteeringStrength;
    FTimerHandle HomingTimer;
    class APRJ_LineCutter2_C* HomingProjectile;
    class AActor* HomingTargetHit;
    FRotator HomingLastRotation;

    void Get Homing Target Location(FVector& OutLocation);
    void GetHomingIgnoreList(TArray<class AActor*>& OutTargets);
    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void UserConstructionScript();
    void Flicker Brightness__FinishedFunc();
    void Flicker Brightness__UpdateFunc();
    void OnFireWhileLastProjectileAlive(class ALineCutterProjectile* Projectile);
    void BndEvt__WPN_LineCutter_ProjectileLauncher_K2Node_ComponentBoundEvent_0_ProjectileSpawned__DelegateSignature(class AProjectileBase* Projectile);
    void UpdateHomingTarget();
    void StopHoming();
    void Server_SetHomingLocation(FVector_NetQuantize HomingLocation);
    void OnHomingHit(const FHitResult& Result);
    void RecieveStopUsing();
    void ReceiveBeginPlay();
    void Server_StopHoming(class AProjectile* InProjectile);
    void All_SetHomingLocation(FVector_NetQuantize InLocation);
    void All_StopHoming(class AProjectile* InProjectile);
    void ExecuteUbergraph_WPN_LineCutter(int32 EntryPoint);
};

#endif
