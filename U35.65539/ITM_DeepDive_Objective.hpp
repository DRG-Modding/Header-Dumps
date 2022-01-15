#ifndef UE4SS_SDK_ITM_DeepDive_Objective_HPP
#define UE4SS_SDK_ITM_DeepDive_Objective_HPP

class UITM_DeepDive_Objective_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* DATA_Objective;

    void SetDeepDiveObjectiveData(TSubclassOf<UObjective> Objective, float missionLength);
    void ExecuteUbergraph_ITM_DeepDive_Objective(int32 EntryPoint, TSubclassOf<UObjective> K2Node_CustomEvent_Objective, float K2Node_CustomEvent_missionLength, FText CallFunc_GetObjectiveDescriptionFromClass_ReturnValue);
}

#endif
