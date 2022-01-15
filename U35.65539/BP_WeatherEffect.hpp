#ifndef UE4SS_SDK_BP_WeatherEffect_HPP
#define UE4SS_SDK_BP_WeatherEffect_HPP

class ABP_WeatherEffect_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAudioComponent* ActiveSound;
    UAudioComponent* FadingSound;
    USceneComponent* DefaultSceneRoot;
    UExponentialHeightFogComponent* Fog;
    float OriginalFogDensity;
    FLinearColor OriginalFogInscatteringColor;
    float OriginalFogMaxOpacity;
    float OriginalFogStartDistance;
    FVector2D LifetimeMinMax;
    FLinearColor FogInscatteringColor;
    float FogDensity;
    float FogMaxOpacity;
    float FogStartDistance;
    float Delay;
    TEnumAsByte<WeatherState::Type> State;
    TSubclassOf<UStatusEffect> StatusEffect;
    float ActiveSoundDelay;
    TArray<TSubclassOf<UStatusEffect>> GlobalEnemyStatusEffects;

    void EndGlobalStatusEffects(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, TSubclassOf<UStatusEffect> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void StartGlobalStatusEffects(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, TSubclassOf<UStatusEffect> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void FadeFogAndAudio(float alpha);
    void OnRep_State(bool K2Node_SwitchEnum_CmpSuccess);
    void FadeFog(float alpha, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2);
    void SetOriginalValues();
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void EndEffect();
    void StartEffect();
    void EffectActive();
    void OnPlayerCharacterRegistered(UPlayerCharacter* PlayerCharacter);
    void FadeoutComplete();
    void Initialize();
    void ExecuteUbergraph_BP_WeatherEffect(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, PlayerCharacterDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UPlayerCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_RandomFloatInRange_ReturnValue, AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, bool CallFunc_IsValid_ReturnValue, UExponentialHeightFogComponent* CallFunc_GetComponentByClass_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, UPlayerCharacter* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue_4, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_2, UPlayerCharacter* K2Node_CustomEvent_PlayerCharacter, bool CallFunc_TryPushActiveStatusEffect_ReturnValue, bool CallFunc_TryPushActiveStatusEffect_ReturnValue_1, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_3, bool CallFunc_TryPopActiveStatusEffect_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
}

#endif
