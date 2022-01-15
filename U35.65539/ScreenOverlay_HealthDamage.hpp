#ifndef UE4SS_SDK_ScreenOverlay_HealthDamage_HPP
#define UE4SS_SDK_ScreenOverlay_HealthDamage_HPP

class UScreenOverlay_HealthDamage_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* HealthImage;
    UImage* SplatImage;
    float FadeDuration;
    float SolidDuration;
    APlayerCharacter* Player;
    FLinearColor Color;
    FLinearColor StartColor;
    UPlayerHealthComponent* HealthComponent;

    void CheckForLowHealth(float StartAnimTime, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, float CallFunc_GetHealthPct_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, ESlateVisibility K2Node_Select_Default);
    void Begin Splat(float Duration, FLinearColor Color);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnDamageTaken_Event(float Amount);
    void OnCharacterStateChanged(ECharacterState NewState);
    void End Splat();
    void OnCameraModeChanged(ECharacterCameraMode NewCameraMode, ECharacterCameraMode OldCameraMode);
    void UpdateBloodColor(bool NewValue);
    void Construct();
    void OnUpdateHealthImage(float Health);
    void ExecuteUbergraph_ScreenOverlay_HealthDamage(int32 EntryPoint, BoolConfigChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, FLinearColor Temp_struct_Variable, FLinearColor Temp_struct_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, float K2Node_CustomEvent_Duration, FLinearColor K2Node_CustomEvent_Color, HealthChangedSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, CameraModeChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_Greater_FloatFloat_ReturnValue, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, ECharacterState CallFunc_GetCurrentState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, float K2Node_CustomEvent_Amount, float CallFunc_GetHealthPct_ReturnValue, float CallFunc_Lerp_ReturnValue, ECharacterState K2Node_CustomEvent_newState, bool CallFunc_IsDown_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, ECharacterCameraMode K2Node_CustomEvent_NewCameraMode, ECharacterCameraMode K2Node_CustomEvent_OldCameraMode, bool CallFunc_IsDown_ReturnValue_1, bool K2Node_CustomEvent_NewValue, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, FLinearColor K2Node_Select_Default, bool CallFunc_CanShowBlood_ReturnValue, OnCharacterStateChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, DamageSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, ECharacterState CallFunc_GetCurrentState_ReturnValue_1, bool CallFunc_IsParalyzed_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, FLinearColor K2Node_MakeStruct_LinearColor, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float K2Node_CustomEvent_health, float CallFunc_GetHealthRegeneratingTargetRatio_ReturnValue, float CallFunc_GetHealthPct_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_2, ESlateVisibility K2Node_Select_Default_1);
}

#endif
