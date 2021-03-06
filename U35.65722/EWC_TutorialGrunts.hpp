#ifndef UE4SS_SDK_EWC_TutorialGrunts_HPP
#define UE4SS_SDK_EWC_TutorialGrunts_HPP

class UEWC_TutorialGrunts_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector SpawnLocation;
    class UEnemyGroupDescriptor* EnemyGroup;
    class ABP_TutorialTriggerManager_C* TriggerManager;

    void StartWave();
    void StopConstantPreassure();
    void ExecuteUbergraph_EWC_TutorialGrunts(int32 EntryPoint, FVector CallFunc_GetSpawnPointInRange_ReturnValue, TArray<FVector>& CallFunc_GetSpawnPointsFromLocation_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_IsClosed_Variable, TArray<class ABP_TutorialTriggerManager_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_TutorialTriggerManager_C* CallFunc_Array_Get_Item, TArray<FVector>& CallFunc_GetSpawnPointsFromLocation_ReturnValue_1, TArray<FVector>& CallFunc_GetSpawnPointsFromLocation_ReturnValue_2, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1);
};

#endif
