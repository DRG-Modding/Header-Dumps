#ifndef UE4SS_SDK_Tutorial_Hint_Escort_BoscoOilShale_HPP
#define UE4SS_SDK_Tutorial_Hint_Escort_BoscoOilShale_HPP

class UTutorial_Hint_Escort_BoscoOilShale_C : public UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveOnInitialized();
    void OnBoscoChanged(class ABosco* Bosco);
    void OnObjectiveUpdated(class UObjective* Objective);
    void ExecuteUbergraph_Tutorial_Hint_Escort_BoscoOilShale(int32 EntryPoint, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, FExecuteUbergraph_Tutorial_Hint_Escort_BoscoOilShaleK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, class UObjective* CallFunc_GetPrimaryObjective_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TSubclassOf<class UObjective> CallFunc_GetObjectClass_ReturnValue, TSubclassOf<class UEscortObjective> K2Node_ClassDynamicCast_AsEscort_Objective, bool K2Node_ClassDynamicCast_bSuccess, class ABosco* K2Node_CustomEvent_Bosco, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_3, class UObjective* K2Node_CustomEvent_Objective, class UEscortObjective* K2Node_DynamicCast_AsEscort_Objective, bool K2Node_DynamicCast_bSuccess, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, class UObjective* CallFunc_GetPrimaryObjective_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UEscortObjective* K2Node_DynamicCast_AsEscort_Objective_1, bool K2Node_DynamicCast_bSuccess_1, FExecuteUbergraph_Tutorial_Hint_Escort_BoscoOilShaleK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1);
};

#endif
