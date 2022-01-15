#ifndef UE4SS_SDK_DE_UnderhillDeluxe_HPP
#define UE4SS_SDK_DE_UnderhillDeluxe_HPP

class UDE_UnderhillDeluxe_C : UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float TargetScale;
    APlayerCharacter* Character;
    float StartScale;
    float Progress;
    float CurrentScale;
    float Scale Check Cooldown;
    bool IsScalingActive;
    float Previous Progress;
    float StartCameraOffset;
    float TargetCameraOffset;
    float CurrentCameraOffset;
    bool EffectEnabled;
    float OriginalPitchValue;

    void OnRep_CurrentCameraOffset(float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult);
    void OnRep_CurrentScale(FVector CallFunc_MakeVector_ReturnValue);
    void TraceForScaledCollision(bool& IsNextScaleColliding, const TArray<AActor*>& K2Node_MakeArray_Array, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, float CallFunc_GetUnscaledCapsuleRadius_ReturnValue, float CallFunc_GetUnscaledCapsuleHalfHeight_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FHitResult CallFunc_CapsuleTraceSingle_OutHit, bool CallFunc_CapsuleTraceSingle_ReturnValue);
    void ReceiveTick(float DeltaSeconds);
    void OnStartEffect(UPlayerCharacter* Character);
    void OnStopEffect();
    void Handle Scaling(float DeltaTime);
    void Reset Voice();
    void ExecuteUbergraph_DE_UnderhillDeluxe(int32 EntryPoint, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, float K2Node_Event_DeltaSeconds, UPlayerCharacter* K2Node_Event_character, float K2Node_CustomEvent_DeltaTime, FVector CallFunc_GetActorScale3D_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Lerp_ReturnValue, bool CallFunc_TraceForScaledCollision_IsNextScaleColliding, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, FVector CallFunc_GetActorScale3D_ReturnValue_1, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, TArray<UDE_UnderhillDeluxe_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, UDE_UnderhillDeluxe_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, TArray<UDE_MaltRockBearer_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue_1, UDE_MaltRockBearer_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, float CallFunc_Lerp_ReturnValue_1, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, bool CallFunc_IsLocallyControlled_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, FVector CallFunc_GetActorScale3D_ReturnValue_2, float CallFunc_BreakVector_X_4, float CallFunc_BreakVector_Y_4, float CallFunc_BreakVector_Z_4, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2);
}

#endif
