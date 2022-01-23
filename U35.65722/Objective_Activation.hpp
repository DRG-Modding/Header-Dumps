#ifndef UE4SS_SDK_Objective_Activation_HPP
#define UE4SS_SDK_Objective_Activation_HPP

class UObjective_Activation_C : public UObjective_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* Text_Current;
    class UTextBlock* Text_Target;
    class UActivationOjective* Objective;

    void InitObjective(class UObjective* Objective);
    void OnObjectiveUpdated(class UObjective* Objective);
    void ExecuteUbergraph_Objective_Activation(int32 EntryPoint, FExecuteUbergraph_Objective_ActivationK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FText CallFunc_Conv_IntToText_ReturnValue, class UObjective* K2Node_Event_Objective, class UObjective* K2Node_CustomEvent_Objective, class UActivationOjective* K2Node_DynamicCast_AsActivation_Ojective, bool K2Node_DynamicCast_bSuccess, FText CallFunc_Conv_IntToText_ReturnValue_1);
};

#endif
