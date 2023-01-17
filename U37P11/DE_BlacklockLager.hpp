#ifndef UE4SS_SDK_DE_BlacklockLager_HPP
#define UE4SS_SDK_DE_BlacklockLager_HPP

class UDE_BlacklockLager_C : public UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    FName Effect ID;
    class UMaterialInstanceDynamic* BlackLock Effect;
    class APlayerCharacter* Character;
    float Effect Power;
    class UParticleSystemComponent* FogParticles;
    class UAudioComponent* SoundEffect;

    void ReceiveTick(float DeltaSeconds);
    void OnStartEffect(class APlayerCharacter* Character);
    void Activate Effects();
    void OnStopEffect();
    void ExecuteUbergraph_DE_BlacklockLager(int32 EntryPoint);
};

#endif
