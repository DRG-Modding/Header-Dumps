#ifndef UE4SS_SDK_BP_AudioControl_LowHealth_HPP
#define UE4SS_SDK_BP_AudioControl_LowHealth_HPP

class UBP_AudioControl_LowHealth_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USoundSubmix* ExplosionsSubmix;
    class USoundSubmix* WeaponFireSubmix;
    float CurrentAttack;
    float CurrentRelease;
    bool wasAbove;
    FRuntimeFloatCurve Blend;
    float BlendProgress;
    float DuckingPower;
    class UAudioComponent* IronWillIsSpawned;
    class USubmixEffectSubmixEQPreset* LowHealthEq;
    float MufflingLowHealthAmount;
    float DuckingDownStateAmount;
    float DuckingIronWillAmount;
    bool On/Off;
    class UAudioComponent* Health_Low_Cue;
    class APlayerCharacter* PlayerCharacter;
    class UPlayerHealthComponent* PlayerHealthComponent;
    class USubmixEffectReverbPreset* LowHealthReverb;
    float ReverbLoHealthWetLevel;
    float ReverbLoHealthDryLevel;
    float ReverbLoHealthGain;
    class UPlayerTemperatureComponent* PlayerTemperatureComponent;
    bool LowTemperatureFade;
    class UCurveFloat* FadeInCurve;
    float FadeTimeLeft;
    float FadeInTime;
    float alpha;
    bool IsFadingIn;
    float FadeOutTime;
    bool prevIsLowHealth;
    float HealthChange;
    bool IsLowHealthOn;
    float VeryColdThreshold;
    float ColdThreshold;
    class UAudioComponent* Temperature_Low_Cue;
    class UAudioComponent* Temperature_VeryLow_Cue;

    void HealthAudio(class USubmixEffectSubmixEQPreset* EQPreset, float HealthPercentage, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FSubmixEffectEQBand K2Node_MakeStruct_SubmixEffectEQBand, TArray<FSubmixEffectEQBand>& K2Node_MakeArray_Array, FSubmixEffectSubmixEQSettings K2Node_MakeStruct_SubmixEffectSubmixEQSettings, bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FSubmixEffectEQBand K2Node_MakeStruct_SubmixEffectEQBand_1, TArray<FSubmixEffectEQBand>& K2Node_MakeArray_Array_1, FSubmixEffectSubmixEQSettings K2Node_MakeStruct_SubmixEffectSubmixEQSettings_1);
    bool ShouldSetTimestamp(bool IsActivatebool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
    void SubmixCompressor(float EnvelopeFollArrayElement/Volume, class USoundSubmix* Master Listen Submix, float Threshold, float Attack, float Release, TArray<FCompressorData>& CompressorData, bool Temp_bool_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, float CallFunc_EvaluateRuntimeCurve_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, bool CallFunc_ShouldSetTimestamp_ReturnValue, int32 Temp_int_Array_Index_Variable, float CallFunc_FClamp_ReturnValue, FCompressorData CallFunc_Array_Get_Item, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_6, FSubmixEffectEQBand K2Node_MakeStruct_SubmixEffectEQBand, TArray<FSubmixEffectEQBand>& K2Node_MakeArray_Array, float K2Node_Select_Default, FSubmixEffectSubmixEQSettings K2Node_MakeStruct_SubmixEffectSubmixEQSettings, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
    void SubmixDucking(class USoundSubmix* ListenSubmix, int32 ListenAttack Max 200, int32 ListenRelease Max 1000, float ListenDuckMultiply, class USubmixEffectSubmixEQPreset* TargetDuckingEQ, bool Multiply Value Print, const class UCurveFloat* DuckingCurve, class UCurveFloat* AttackCurve, class UCurveFloat* ReleaseCurve, float ListenArrayElement, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, FSubmixEffectEQBand K2Node_MakeStruct_SubmixEffectEQBand, float CallFunc_Divide_FloatFloat_ReturnValue, TArray<FSubmixEffectEQBand>& K2Node_MakeArray_Array, float CallFunc_GetFloatValue_ReturnValue_1, FSubmixEffectSubmixEQSettings K2Node_MakeStruct_SubmixEffectSubmixEQSettings, int32 CallFunc_FTrunc_ReturnValue_1);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void HealthChanged(float Amount);
    void FadeInLowHealth();
    void FadeOutLowHealth();
    void HandleHeartbeat(bool TurnOn);
    void HandleLowHealthMuffling(bool TurnOn);
    void OnTemperatureChanged_Event(float Temperature, float Change);
    void ResetVeryLowCue();
    void ResetLowCue();
    void ExecuteUbergraph_BP_AudioControl_LowHealth(int32 EntryPoint, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, float K2Node_Event_DeltaSeconds, float K2Node_CustomEvent_Amount, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsPlaying_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsPlayerControlled_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class UPlayerTemperatureComponent* CallFunc_GetComponentByClass_ReturnValue, class UPlayerHealthComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsDead_ReturnValue, bool CallFunc_GetIronWillActive_ReturnValue, FSubmixEffectReverbSettings K2Node_MakeStruct_SubmixEffectReverbSettings, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, FExecuteUbergraph_BP_AudioControl_LowHealthK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, FSubmixEffectEQBand K2Node_MakeStruct_SubmixEffectEQBand, TArray<FSubmixEffectEQBand>& K2Node_MakeArray_Array, FSubmixEffectSubmixEQSettings K2Node_MakeStruct_SubmixEffectSubmixEQSettings, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsComponentTickEnabled_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_3, float CallFunc_FMax_ReturnValue, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool Temp_bool_IsClosed_Variable_1, bool CallFunc_IsLowHealth_ReturnValue, bool K2Node_CustomEvent_TurnOn_1, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool K2Node_CustomEvent_TurnOn, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_5, float CallFunc_SelectFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_IsLowHealth_ReturnValue_1, float K2Node_CustomEvent_Temperature, float K2Node_CustomEvent_Change, FExecuteUbergraph_BP_AudioControl_LowHealthK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_MapRangeClamped_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_1, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8);
};

#endif
