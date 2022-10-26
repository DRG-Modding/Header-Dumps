#ifndef UE4SS_SDK_WPN_LineCutter_HPP
#define UE4SS_SDK_WPN_LineCutter_HPP

class AWPN_LineCutter_C : public ALineCutter
{
    FPointerToUberGraphFrame UberGraphFrame;
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

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void UserConstructionScript();
    void Flicker Brightness__FinishedFunc();
    void Flicker Brightness__UpdateFunc();
    void ReceiveBeginPlay();
    void OnFireWhileLastProjectileAlive(class ALineCutterProjectile* Projectile);
    void ExecuteUbergraph_WPN_LineCutter(int32 EntryPoint);
};

#endif
