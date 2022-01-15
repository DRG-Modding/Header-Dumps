#ifndef UE4SS_SDK_Objective_Salvage_HPP
#define UE4SS_SDK_Objective_Salvage_HPP

class UObjective_Salvage_C : UObjective_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* Text_Current;
    UTextBlock* Text_Target;
    UTextBlock* TextBlock_Description;
    USalvageObjective* Objective;

    void InitObjective(UObjective* Objective);
    void OnObjectiveUpdated(UObjective* Objective);
    void ExecuteUbergraph_Objective_Salvage(int32 EntryPoint, FSlateColor K2Node_MakeStruct_SlateColor, ObjectiveUpdatedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UObjective* K2Node_Event_Objective, FText CallFunc_Conv_IntToText_ReturnValue, USalvageObjective* K2Node_DynamicCast_AsSalvage_Objective, bool K2Node_DynamicCast_bSuccess, UObjective* K2Node_CustomEvent_Objective, FText CallFunc_Conv_IntToText_ReturnValue_1, bool CallFunc_IsCompleted_ReturnValue);
}

#endif
