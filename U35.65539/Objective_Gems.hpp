#ifndef UE4SS_SDK_Objective_Gems_HPP
#define UE4SS_SDK_Objective_Gems_HPP

class UObjective_Gems_C : UObjective_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* Colon;
    UTextBlock* ResourceName;
    UTextBlock* Text_Current;
    UTextBlock* Text_Target;
    UTextBlock* TextBlock_Description;
    UGatherGemsObjective* Objective;

    void InitObjective(UObjective* Objective);
    void OnObjectiveUpdated(UObjective* Objective);
    void ExecuteUbergraph_Objective_Gems(int32 EntryPoint, FSlateColor K2Node_MakeStruct_SlateColor, ObjectiveUpdatedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FText CallFunc_Conv_IntToText_ReturnValue, UObjective* K2Node_Event_Objective, UObjective* K2Node_CustomEvent_Objective, UGatherGemsObjective* K2Node_DynamicCast_AsGather_Gems_Objective, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsCompleted_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue_1);
}

#endif
