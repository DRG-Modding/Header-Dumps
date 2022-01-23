#ifndef UE4SS_SDK_Objective_Salvage_HPP
#define UE4SS_SDK_Objective_Salvage_HPP

class UObjective_Salvage_C : public UObjective_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* Text_Current;
    class UTextBlock* Text_Target;
    class UTextBlock* TextBlock_Description;
    class USalvageObjective* Objective;

    void InitObjective(class UObjective* Objective);
    void OnObjectiveUpdated(class UObjective* Objective);
    void ExecuteUbergraph_Objective_Salvage(int32 EntryPoint, FSlateColor K2Node_MakeStruct_SlateColor, FExecuteUbergraph_Objective_SalvageK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UObjective* K2Node_Event_Objective, FText CallFunc_Conv_IntToText_ReturnValue, class USalvageObjective* K2Node_DynamicCast_AsSalvage_Objective, bool K2Node_DynamicCast_bSuccess, class UObjective* K2Node_CustomEvent_Objective, FText CallFunc_Conv_IntToText_ReturnValue_1, bool CallFunc_IsCompleted_ReturnValue);
};

#endif
