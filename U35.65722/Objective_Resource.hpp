#ifndef UE4SS_SDK_Objective_Resource_HPP
#define UE4SS_SDK_Objective_Resource_HPP

class UObjective_Resource_C : public UObjective_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* Colon;
    class UTextBlock* ResourceName;
    class UTextBlock* Text_Current;
    class UTextBlock* Text_Target;
    class UTextBlock* TextBlock_Description;
    class UResourceObjective* Objective;

    void InitObjective(class UObjective* Objective);
    void OnObjectiveUpdated(class UObjective* Objective);
    void ExecuteUbergraph_Objective_Resource(int32 EntryPoint, FSlateColor K2Node_MakeStruct_SlateColor, FExecuteUbergraph_Objective_ResourceK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UObjective* K2Node_Event_Objective, FText CallFunc_Conv_FloatToText_ReturnValue, class UResourceObjective* K2Node_DynamicCast_AsResource_Objective, bool K2Node_DynamicCast_bSuccess, class UObjective* K2Node_CustomEvent_Objective, bool CallFunc_IsCompleted_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue_1, FText CallFunc_Conv_FloatToText_ReturnValue_2);
};

#endif
