#ifndef UE4SS_SDK_Objective_Activation_HPP
#define UE4SS_SDK_Objective_Activation_HPP

class UObjective_Activation_C : UObjective_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* Text_Current;
    UTextBlock* Text_Target;
    UActivationOjective* Objective;

    void InitObjective(UObjective* Objective);
    void OnObjectiveUpdated(UObjective* Objective);
    void ExecuteUbergraph_Objective_Activation(int32 EntryPoint, ObjectiveUpdatedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FText CallFunc_Conv_IntToText_ReturnValue, UObjective* K2Node_Event_Objective, UObjective* K2Node_CustomEvent_Objective, UActivationOjective* K2Node_DynamicCast_AsActivation_Ojective, bool K2Node_DynamicCast_bSuccess, FText CallFunc_Conv_IntToText_ReturnValue_1);
}

#endif
