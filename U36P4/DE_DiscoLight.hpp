#ifndef UE4SS_SDK_DE_DiscoLight_HPP
#define UE4SS_SDK_DE_DiscoLight_HPP

class UDE_DiscoLight_C : public UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class APlayerCharacter* Character;
    class APointLight* Light;
    class UCurveLinearColor* LightColorCurve;
    float TimeSinceStart;
    float curvelength;
    class UAudioComponent* MusicPlayer;
    class UParticleSystemComponent* StarburstParticles;
    bool EnabledEffect;

    void OnRep_Light();
    void OnLoaded_9A4F10A04AD1DAA8BA45FFA4A7DB3EEC(class UObject* Loaded);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnStartEffect(class APlayerCharacter* Character);
    void OnStopEffect();
    void Set Light();
    void ExecuteUbergraph_DE_DiscoLight(int32 EntryPoint);
};

#endif
