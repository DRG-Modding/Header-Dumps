#ifndef UE4SS_SDK_Objective_Resource_HPP
#define UE4SS_SDK_Objective_Resource_HPP

class UObjective_Resource_C : UObjective_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* Colon;
    UTextBlock* ResourceName;
    UTextBlock* Text_Current;
    UTextBlock* Text_Target;
    UTextBlock* TextBlock_Description;
    UResourceObjective* Objective;

    void InitObjective(UObjective* Objective);
    void OnObjectiveUpdated(UObjective* Objective);
    void ExecuteUbergraph_Objective_Resource(int32 EntryPoint, FSlateColor K2Node_MakeStruct_SlateColor, ObjectiveUpdatedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UObjective* K2Node_Event_Objective, FText CallFunc_Conv_FloatToText_ReturnValue, UResourceObjective* K2Node_DynamicCast_AsResource_Objective, bool K2Node_DynamicCast_bSuccess, UObjective* K2Node_CustomEvent_Objective, bool CallFunc_IsCompleted_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue_1, FText CallFunc_Conv_FloatToText_ReturnValue_2);
}

#endif
