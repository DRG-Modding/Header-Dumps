#ifndef UE4SS_SDK_ENE_Spider_Swarmer_Radioactive_HPP
#define UE4SS_SDK_ENE_Spider_Swarmer_Radioactive_HPP

class AENE_Spider_Swarmer_Radioactive_C : public AENE_Spider_Swarmer_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class UParticleSystemComponent* ParticleSystem;
    float RadiationDistance;
    float RadiationCheckDelay;
    bool IsRadioactive;
    bool AnyPlayerInRange;

    void OnDeathBase();
    void RadiationLoop();
    void ExecuteUbergraph_ENE_Spider_Swarmer_Radioactive(int32 EntryPoint);
};

#endif
