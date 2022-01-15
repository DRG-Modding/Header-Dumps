#ifndef UE4SS_SDK_DE_DiscoLight_HPP
#define UE4SS_SDK_DE_DiscoLight_HPP

class UDE_DiscoLight_C : UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    APlayerCharacter* Character;
    APointLight* Light;
    UCurveLinearColor* LightColorCurve;
    float TimeSinceStart;
    float curvelength;
    UAudioComponent* MusicPlayer;
    UParticleSystemComponent* StarburstParticles;
    bool EnabledEffect;

    void OnRep_Light();
    void OnLoaded_9A4F10A04AD1DAA8BA45FFA4A7DB3EEC(UObject* Loaded);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnStartEffect(UPlayerCharacter* Character);
    void OnStopEffect();
    void Set Light();
    void ExecuteUbergraph_DE_DiscoLight(int32 EntryPoint, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, float Temp_float_Variable, UObject* K2Node_CustomEvent_Loaded, UObject* Temp_object_Variable, USoundBase* K2Node_DynamicCast_AsSound_Base, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, SoftObjectProperty Temp_softobject_Variable, SoftObjectProperty Temp_softobject_Variable_1, SoftObjectProperty K2Node_Select_Default, float K2Node_Event_DeltaSeconds, UPlayerCharacter* K2Node_Event_character, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, OnAssetLoaded__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FHitResult CallFunc_K2_SetActorRelativeLocation_SweepHitResult, const FTransform CallFunc_GetTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, UPointLight* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, bool Temp_bool_Variable_1, FLinearColor CallFunc_GetClampedLinearColorValue_ReturnValue, float K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
}

#endif
