#ifndef UE4SS_SDK_Objective_Defense_HPP
#define UE4SS_SDK_Objective_Defense_HPP

class UObjective_Defense_C : public UObjective_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* Text_Current;
    class UTextBlock* Text_Target;
    class UTextBlock* TextBlock_Description;
    class UDefenseObjective* Objective;

    void InitObjective(class UObjective* Objective);
    void OnObjectiveUpdated(class UObjective* Objective);
    void ExecuteUbergraph_Objective_Defense(int32 EntryPoint, bool CallFunc_IsCompleted_ReturnValue, FExecuteUbergraph_Objective_DefenseK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FText CallFunc_Conv_IntToText_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue_1, class UObjective* K2Node_Event_Objective, class UObjective* K2Node_CustomEvent_Objective, class UDefenseObjective* K2Node_DynamicCast_AsDefense_Objective, bool K2Node_DynamicCast_bSuccess, FSlateColor K2Node_MakeStruct_SlateColor);
};

#endif
