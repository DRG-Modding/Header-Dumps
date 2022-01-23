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
    void ExecuteUbergraph_DE_BlacklockLager(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float K2Node_Event_DeltaSeconds, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, class APlayerCharacter* K2Node_Event_character, class UMaterialInstanceDynamic* CallFunc_ApplyPostProcessingMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_ApplyPostProcessingMaterial_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnFirstPersonEmitterAttached_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue_2, bool CallFunc_IsLocallyControlled_ReturnValue_3, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsLocallyControlled_ReturnValue_4);
};

#endif
