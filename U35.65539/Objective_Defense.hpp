#ifndef UE4SS_SDK_Objective_Defense_HPP
#define UE4SS_SDK_Objective_Defense_HPP

class UObjective_Defense_C : UObjective_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* Text_Current;
    UTextBlock* Text_Target;
    UTextBlock* TextBlock_Description;
    UDefenseObjective* Objective;

    void InitObjective(UObjective* Objective);
    void OnObjectiveUpdated(UObjective* Objective);
    void ExecuteUbergraph_Objective_Defense(int32 EntryPoint, bool CallFunc_IsCompleted_ReturnValue, ObjectiveUpdatedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FText CallFunc_Conv_IntToText_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue_1, UObjective* K2Node_Event_Objective, UObjective* K2Node_CustomEvent_Objective, UDefenseObjective* K2Node_DynamicCast_AsDefense_Objective, bool K2Node_DynamicCast_bSuccess, FSlateColor K2Node_MakeStruct_SlateColor);
}

#endif
