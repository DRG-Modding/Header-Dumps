#ifndef UE4SS_SDK_ENE_Spider_Swarmer_Radioactive_HPP
#define UE4SS_SDK_ENE_Spider_Swarmer_Radioactive_HPP

class AENE_Spider_Swarmer_Radioactive_C : public AENE_Spider_Swarmer_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class UParticleSystemComponent* ParticleSystem;
    float Timeline_0_NewTrack_0_74EBECE940422CB700C18C8C76913A5B;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_74EBECE940422CB700C18C8C76913A5B;
    class UTimelineComponent* Timeline_0;
    float RadiationDistance;
    float RadiationCheckDelay;
    bool IsRadioactive;
    bool AnyPlayerInRange;
    float RadioactiveLightIntensity;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void OnDeathBase();
    void RadiationLoop();
    void ExecuteUbergraph_ENE_Spider_Swarmer_Radioactive(int32 EntryPoint);
};

#endif
