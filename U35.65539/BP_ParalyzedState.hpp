#ifndef UE4SS_SDK_BP_ParalyzedState_HPP
#define UE4SS_SDK_BP_ParalyzedState_HPP

class UBP_ParalyzedState_C : UParalyzedStateComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    FRotator StoredRotation;
    float Camera Arm Y Rotation ;

    void ReceiveStateEnter();
    void ReceiveStateExit();
    void ExecuteUbergraph_BP_ParalyzedState(int32 EntryPoint, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, FRotator CallFunc_K2_GetComponentRotation_ReturnValue, FRotator CallFunc_K2_GetComponentRotation_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, FRotator CallFunc_MakeRotator_ReturnValue, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult, FRotator CallFunc_MakeRotator_ReturnValue_1, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_1);
}

#endif
