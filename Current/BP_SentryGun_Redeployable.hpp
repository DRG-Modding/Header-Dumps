#ifndef UE4SS_SDK_BP_SentryGun_Redeployable_HPP
#define UE4SS_SDK_BP_SentryGun_Redeployable_HPP

class ABP_SentryGun_Redeployable_C : public ARedeployableSentryGun
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UChildActorComponent* ArcIndicator;
    class UChildActorComponent* EMPIndicator;
    class UBoxComponent* SpecialAttackCollider;
    class UParticleSystemComponent* SpecialAttackParticleSystem;
    class UWidgetComponent* AmmoCountWidget;
    class UStaticMeshComponent* BarrelsMesh;
    class USceneComponent* SpotLightBase;
    class UStaticMeshComponent* LightCone;
    class UPointLightComponent* PointLight;
    class USpotLightComponent* SpotLight;
    class UProjectileLauncherComponent* projectileLauncher;
    class USimpleHealthComponent* SimpleHealth;
    class UDamageComponent* DamageComponent;
    class UPointLightComponent* PointLight1;
    class UReloadSentryUsableComponent* ReloadSentryUsable;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USingleUsableComponent* DeployUsable;
    class UWidgetComponent* BuildWidget;
    class UStaticMeshComponent* SpotLight2;
    class USphereComponent* UsableCollision;
    class UHitscanComponent* HitScan;
    float Timeline_0_Translate_BarrelOverchargeShot_4853B22243389D0916A3E09304615D5D;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_4853B22243389D0916A3E09304615D5D;
    class UTimelineComponent* Timeline_0;
    float DismantleDuration;
    bool Building;
    float OldShotCooldown;
    int32 SpecialAttackAmmoCost;
    float BuildProgress;
    int32 MuzzleIndex;
    TArray<FName> MuzzleNames;
    class UMaterialInstanceDynamic* IndicatorMaterial;

    void UpdateIndicatorLight(bool FiredShot);
    void ConditionallyEnableShadows();
    float GetDeployProgress();
    void ToggleBuildMode(bool InBuilding);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveOnDeploy();
    void ReceiveOnDismantle();
    void ReceiveOnDismantled();
    void ReceiveOnDeployed();
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_ProgressSignature__DelegateSignature(float Progress);
    void ReceiveBeginPlay();
    void ReceiveOnSentryGunOwnerChanged();
    void ActivateSpecialAttack();
    void Multicast Special Attack GFX();
    void Reset Special Attack();
    void UpdateShadows();
    void BndEvt__Hitscan_K2Node_ComponentBoundEvent_2_WeaponFiredDelegate__DelegateSignature(const FVector& Location);
    void ReceiveAmmoChanged(int32 Delta, int32 currentAmount);
    void SetEMPIndicatorActive(bool Active);
    void SetArcIndicatorActive(bool Active);
    void ExecuteUbergraph_BP_SentryGun_Redeployable(int32 EntryPoint);
};

#endif
