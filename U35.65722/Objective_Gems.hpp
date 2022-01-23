#ifndef UE4SS_SDK_Objective_Gems_HPP
#define UE4SS_SDK_Objective_Gems_HPP

class UObjective_Gems_C : public UObjective_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* Colon;
    class UTextBlock* ResourceName;
    class UTextBlock* Text_Current;
    class UTextBlock* Text_Target;
    class UTextBlock* TextBlock_Description;
    class UGatherGemsObjective* Objective;

    void InitObjective(class UObjective* Objective);
    void OnObjectiveUpdated(class UObjective* Objective);
    void ExecuteUbergraph_Objective_Gems(int32 EntryPoint, FSlateColor K2Node_MakeStruct_SlateColor, FExecuteUbergraph_Objective_GemsK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FText CallFunc_Conv_IntToText_ReturnValue, class UObjective* K2Node_Event_Objective, class UObjective* K2Node_CustomEvent_Objective, class UGatherGemsObjective* K2Node_DynamicCast_AsGather_Gems_Objective, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsCompleted_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue_1);
};

#endif
