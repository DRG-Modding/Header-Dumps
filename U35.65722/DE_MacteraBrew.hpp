#ifndef UE4SS_SDK_DE_MacteraBrew_HPP
#define UE4SS_SDK_DE_MacteraBrew_HPP

class UDE_MacteraBrew_C : public UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool PEffect;
    class UParticleSystemComponent* Particle Effect;
    class UAudioComponent* soundComp;

    void OnStopEffect();
    void OnStartEffect(class APlayerCharacter* Character);
    void ExecuteUbergraph_DE_MacteraBrew(int32 EntryPoint, class APlayerCharacter* K2Node_Event_character, class AFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
};

#endif
