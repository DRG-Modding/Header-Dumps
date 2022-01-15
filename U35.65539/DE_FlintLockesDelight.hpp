#ifndef UE4SS_SDK_DE_FlintLockesDelight_HPP
#define UE4SS_SDK_DE_FlintLockesDelight_HPP

class UDE_FlintLockesDelight_C : UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    APlayerCharacter* Character;
    float NextJump;
    FVector ImpulseStrength;
    UParticleSystemComponent* SmokeParticles;
    UAudioComponent* Fuse Sound;
    UParticleSystemComponent* ExplosionParticles;
    UAudioComponent* ExplosionSound;

    void OnRep_Trigger Explosion();
    void ReceiveTick(float DeltaSeconds);
    void OnStartEffect(UPlayerCharacter* Character);
    void Trigger Explosion();
    void OnStopEffect();
    void Stop Effects();
    void ExecuteUbergraph_DE_FlintLockesDelight(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, int32 CallFunc_RandomIntegerInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_3, int32 Temp_int_Variable, float CallFunc_RandomFloatInRange_ReturnValue_4, float CallFunc_RandomFloatInRange_ReturnValue_5, float CallFunc_RandomFloatInRange_ReturnValue_6, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_7, float K2Node_Select_Default, float K2Node_Event_DeltaSeconds, UPlayerCharacter* K2Node_Event_character, const FTransform CallFunc_GetTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, FVector CallFunc_RandomUnitVector_ReturnValue, FVector CallFunc_Multiply_VectorInt_ReturnValue, FVector CallFunc_RandomUnitVector_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_Multiply_VectorInt_ReturnValue_1, float CallFunc_FClamp_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_FClamp_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_1, int32 Temp_int_Variable_1, float K2Node_Select_Default_1, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1);
}

#endif
