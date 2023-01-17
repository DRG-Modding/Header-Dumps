#ifndef UE4SS_SDK_WPN_HeavyParticleCannon_HPP
#define UE4SS_SDK_WPN_HeavyParticleCannon_HPP

class AWPN_HeavyParticleCannon_C : public AHeavyParticleCannon
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* ExplosionDamage;
    class UExplosionComponent* Explosion;
    class UAudioComponent* WidgetChargeFinished_Cue;
    class UAudioComponent* WidgetCharge_Cue;
    class UFSDAudioComponent* FireStartAndLoop;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    class UFirstPersonPointLightComponent* MuzzleLight;
    class UPointLightComponent* PointLight2;
    class UPointLightComponent* PointLight1;
    class UAudioComponent* FireStop_Cue;
    class UFirstPersonWidgetComponent* FPwidget_Ammo;
    class UWeaponImpactComponent* WeaponImpact;
    class UCrosshairAggregator* CrosshairAggregator;
    class UWeaponDisplay_HeavyParticleCannon_AmmoCount_C* AmmoWidget;
    TArray<class UParticleSystemComponent*> ReflectedBeams;
    FTimerHandle AudioFadeTimerHandle;
    float BeamStartTime;
    float BeamTotalTime;
    float BeamTimeAlpha;

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void RecieveEquipped();
    void RecieveUnequipped();
    void BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature();
    void UpdateBeamsVisibility(bool isBeamVisible);
    void Upgraded(const TArray<class UItemUpgrade*>& upgrades);
    void UpdateReload(float alpha);
    void IsHittngEnemyChanged(bool isHittingEnemy);
    void ChargeChanged(bool isCharging);
    void Server_ExplodePlatform(FVector Location);
    void All_ExplodePlatform(FVector Location);
    void ExecuteUbergraph_WPN_HeavyParticleCannon(int32 EntryPoint);
};

#endif
