#ifndef UE4SS_SDK_Tutorial_Hint_Refinery_BoscoBuilding_HPP
#define UE4SS_SDK_Tutorial_Hint_Refinery_BoscoBuilding_HPP

class UTutorial_Hint_Refinery_BoscoBuilding_C : public UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    TSubclassOf<class UObjective> Target Objective;
    int32 NumPipeSegmentsBeforeShowingHint;

    void ReceiveOnInitialized();
    void OnBoscoChanged(class ABosco* Bosco);
    void PipelineSegmentPlaced(class APipelineSegment* InSegment);
    void ExecuteUbergraph_Tutorial_Hint_Refinery_BoscoBuilding(int32 EntryPoint, FExecuteUbergraph_Tutorial_Hint_Refinery_BoscoBuildingK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, FExecuteUbergraph_Tutorial_Hint_Refinery_BoscoBuildingK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_LessEqual_IntInt_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class UObjective* CallFunc_GetPrimaryObjective_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, TSubclassOf<class UObjective> CallFunc_GetObjectClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class ABosco* K2Node_CustomEvent_Bosco, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, class APipelineSegment* K2Node_CustomEvent_InSegment, class UObjective* CallFunc_GetPrimaryObjective_ReturnValue_1, class URefineryObjective* K2Node_DynamicCast_AsRefinery_Objective, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue);
};

#endif