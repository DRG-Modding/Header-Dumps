#ifndef UE4SS_SDK_Objective_Elimination_HPP
#define UE4SS_SDK_Objective_Elimination_HPP

class UObjective_Elimination_C : UObjective_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* Text_Current;
    UTextBlock* Text_Target;
    UTextBlock* TextBlock_Description;
    UEliminationObjective* Objective;

    void InitObjective(UObjective* Objective);
    void OnObjectiveUpdated(UObjective* Objective);
    void ExecuteUbergraph_Objective_Elimination(int32 EntryPoint, FSlateColor K2Node_MakeStruct_SlateColor, ObjectiveUpdatedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UObjective* K2Node_Event_Objective, FText CallFunc_Conv_IntToText_ReturnValue, UEliminationObjective* K2Node_DynamicCast_AsElimination_Objective, bool K2Node_DynamicCast_bSuccess, UObjective* K2Node_CustomEvent_Objective, bool CallFunc_IsCompleted_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue_1);
}

#endif
