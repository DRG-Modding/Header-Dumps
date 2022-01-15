#ifndef UE4SS_SDK_DE_BlackoutStout_HPP
#define UE4SS_SDK_DE_BlackoutStout_HPP

class UDE_BlackoutStout_C : UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool PEffect;
    UParticleSystemComponent* Particle Effect;
    UAudioComponent* soundComp;
    UAudioComponent* soundCompDown;

    void OnStartEffect(UPlayerCharacter* Character);
    void OnStopEffect();
    void ExecuteUbergraph_DE_BlackoutStout(int32 EntryPoint, UPlayerCharacter* K2Node_Event_character, bool CallFunc_IsLocallyControlled_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
}

#endif
