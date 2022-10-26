#ifndef UE4SS_SDK_ITM_BaseFlare_HPP
#define UE4SS_SDK_ITM_BaseFlare_HPP

class AITM_BaseFlare_C : public AFlare
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* Light_AfterGlow;
    class UPointLightComponent* Light_NoShadow;
    class USpotLightComponent* SpotLight_Shadow_3;
    class USpotLightComponent* SpotLight_Shadow_2;
    class USpotLightComponent* SpotLight_Shadow_1;
    class UUpgradableGearComponent* UpgradableGear;
    class UParticleSystemComponent* ParticleSystem;
    class UStaticMeshComponent* StaticMesh;
    class UBoxComponent* Box;
    float Timeline_0_BrightnessShadows_14DB2CD947ED9EE06017768CF842D625;
    float Timeline_0_Brightness_14DB2CD947ED9EE06017768CF842D625;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_14DB2CD947ED9EE06017768CF842D625;
    class UTimelineComponent* Timeline_0;
    float BaseIntensity;
    bool InfiniteLight;

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void UpdateShadowRadius();
    void StartFadeOut(float& Time);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnFlareIgnite();
    void OnFlareExtinguish();
    void ReceiveBeginPlay();
    void OnUpdateShadowRadius();
    void ActivateFlare();
    void ExecuteUbergraph_ITM_BaseFlare(int32 EntryPoint);
};

#endif
