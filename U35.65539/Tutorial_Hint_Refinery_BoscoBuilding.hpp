#ifndef UE4SS_SDK_Tutorial_Hint_Refinery_BoscoBuilding_HPP
#define UE4SS_SDK_Tutorial_Hint_Refinery_BoscoBuilding_HPP

class UTutorial_Hint_Refinery_BoscoBuilding_C : UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    TSubclassOf<UObjective> Target Objective;
    int32 NumPipeSegmentsBeforeShowingHint;

    void ReceiveOnInitialized();
    void OnBoscoChanged(UBosco* Bosco);
    void PipelineSegmentPlaced(UPipelineSegment* InSegment);
    void ExecuteUbergraph_Tutorial_Hint_Refinery_BoscoBuilding(int32 EntryPoint, RefineryPipelineSegmentDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, BoscoChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_LessEqual_IntInt_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UObjective* CallFunc_GetPrimaryObjective_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, TSubclassOf<UObjective> CallFunc_GetObjectClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, UBosco* K2Node_CustomEvent_Bosco, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, UPipelineSegment* K2Node_CustomEvent_InSegment, UObjective* CallFunc_GetPrimaryObjective_ReturnValue_1, URefineryObjective* K2Node_DynamicCast_AsRefinery_Objective, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue);
}

#endif
