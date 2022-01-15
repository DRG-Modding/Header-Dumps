#ifndef UE4SS_SDK_BP_DropPod_Landing_Escort_HPP
#define UE4SS_SDK_BP_DropPod_Landing_Escort_HPP

class ABP_DropPod_Landing_Escort_C : UBP_DropPod_Landing_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnFirstPlayerLeftPod();
    void ExecuteUbergraph_BP_DropPod_Landing_Escort(int32 EntryPoint, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UObjective* CallFunc_GetPrimaryObjective_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, UEscortObjective* K2Node_DynamicCast_AsEscort_Objective, bool K2Node_DynamicCast_bSuccess);
}

#endif
