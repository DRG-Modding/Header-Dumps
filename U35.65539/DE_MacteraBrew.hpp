#ifndef UE4SS_SDK_DE_MacteraBrew_HPP
#define UE4SS_SDK_DE_MacteraBrew_HPP

class UDE_MacteraBrew_C : UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool PEffect;
    UParticleSystemComponent* Particle Effect;
    UAudioComponent* soundComp;

    void OnStopEffect();
    void OnStartEffect(UPlayerCharacter* Character);
    void ExecuteUbergraph_DE_MacteraBrew(int32 EntryPoint, UPlayerCharacter* K2Node_Event_character, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
}

#endif
