#ifndef UE4SS_SDK_DE_FlintLockesDelight_HPP
#define UE4SS_SDK_DE_FlintLockesDelight_HPP

class UDE_FlintLockesDelight_C : public UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class APlayerCharacter* Character;
    float NextJump;
    FVector ImpulseStrength;
    class UParticleSystemComponent* SmokeParticles;
    class UAudioComponent* Fuse Sound;
    class UParticleSystemComponent* ExplosionParticles;
    class UAudioComponent* ExplosionSound;

    void OnRep_Trigger Explosion();
    void ReceiveTick(float DeltaSeconds);
    void OnStartEffect(class APlayerCharacter* Character);
    void Trigger Explosion();
    void OnStopEffect();
    void Stop Effects();
    void ExecuteUbergraph_DE_FlintLockesDelight(int32 EntryPoint);
};

#endif
