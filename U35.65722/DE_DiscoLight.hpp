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
    void ExecuteUbergraph_DE_DiscoLight(int32 EntryPoint, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, float Temp_float_Variable, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class USoundBase* K2Node_DynamicCast_AsSound_Base, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, TSoftObjectPtr<UObject> Temp_softobject_Variable, TSoftObjectPtr<UObject> Temp_softobject_Variable_1, TSoftObjectPtr<UObject> K2Node_Select_Default, float K2Node_Event_DeltaSeconds, class APlayerCharacter* K2Node_Event_character, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, FExecuteUbergraph_DE_DiscoLightK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FHitResult CallFunc_K2_SetActorRelativeLocation_SweepHitResult, const FTransform CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class APointLight* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class AFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, bool Temp_bool_Variable_1, FLinearColor CallFunc_GetClampedLinearColorValue_ReturnValue, float K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

#endif
