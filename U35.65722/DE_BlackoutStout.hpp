#ifndef UE4SS_SDK_DE_BlackoutStout_HPP
#define UE4SS_SDK_DE_BlackoutStout_HPP

class UDE_BlackoutStout_C : public UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool PEffect;
    class UParticleSystemComponent* Particle Effect;
    class UAudioComponent* soundComp;
    class UAudioComponent* soundCompDown;

    void OnStartEffect(class APlayerCharacter* Character);
    void OnStopEffect();
    void ExecuteUbergraph_DE_BlackoutStout(int32 EntryPoint, class APlayerCharacter* K2Node_Event_character, bool CallFunc_IsLocallyControlled_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
};

#endif
