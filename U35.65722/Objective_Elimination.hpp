#ifndef UE4SS_SDK_Objective_Elimination_HPP
#define UE4SS_SDK_Objective_Elimination_HPP

class UObjective_Elimination_C : public UObjective_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* Text_Current;
    class UTextBlock* Text_Target;
    class UTextBlock* TextBlock_Description;
    class UEliminationObjective* Objective;

    void InitObjective(class UObjective* Objective);
    void OnObjectiveUpdated(class UObjective* Objective);
    void ExecuteUbergraph_Objective_Elimination(int32 EntryPoint, FSlateColor K2Node_MakeStruct_SlateColor, FExecuteUbergraph_Objective_EliminationK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UObjective* K2Node_Event_Objective, FText CallFunc_Conv_IntToText_ReturnValue, class UEliminationObjective* K2Node_DynamicCast_AsElimination_Objective, bool K2Node_DynamicCast_bSuccess, class UObjective* K2Node_CustomEvent_Objective, bool CallFunc_IsCompleted_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue_1);
};

#endif
