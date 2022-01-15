#ifndef UE4SS_SDK_BP_Drop_CamShake_HPP
#define UE4SS_SDK_BP_Drop_CamShake_HPP

class ABP_Drop_CamShake_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* DefaultSceneRoot;

    void SetStandingDown(bool IsStandingDown, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<UPlayerCharacter*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, UPlayerCharacter* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
    void TriggerShakeSequence();
    void ExecuteUbergraph_BP_Drop_CamShake(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, UPlayerController* CallFunc_GetPlayerController_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, UPlayerController* CallFunc_GetPlayerController_ReturnValue_3);
}

#endif
