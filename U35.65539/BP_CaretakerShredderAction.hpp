#ifndef UE4SS_SDK_BP_CaretakerShredderAction_HPP
#define UE4SS_SDK_BP_CaretakerShredderAction_HPP

class UBP_CaretakerShredderAction_C : UBP_CaretakerActionBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FTimerHandle SpawnTimer;

    void OnStarted();
    void LaunchWave(int32 WaveSize);
    void OnTriggered();
    void OnStopped();
    void SpawnMore();
    void ActivateLights();
    void DeactivateLights();
    void ExecuteUbergraph_BP_CaretakerShredderAction(int32 EntryPoint, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, UDifficultyManager* CallFunc_GetDifficultyManager_ReturnValue, float CallFunc_GetBossDifficultyScaler_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 K2Node_CustomEvent_WaveSize, UCaretaker* CallFunc_GetCaretaker_ReturnValue, UCaretaker* CallFunc_GetCaretaker_ReturnValue_1, UCaretaker* CallFunc_GetCaretaker_ReturnValue_2, bool Temp_bool_IsClosed_Variable, FVector CallFunc_GetSocketLocation_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, UPlayerCharacter* CallFunc_GetLocalPlayerCharacter_ReturnValue, UCaretaker* CallFunc_GetCaretaker_ReturnValue_3, UENE_FacilityCaretaker_C* K2Node_DynamicCast_AsENE_Facility_Caretaker, bool K2Node_DynamicCast_bSuccess, UCaretaker* CallFunc_GetCaretaker_ReturnValue_4, UENE_FacilityCaretaker_C* K2Node_DynamicCast_AsENE_Facility_Caretaker_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1);
}

#endif
