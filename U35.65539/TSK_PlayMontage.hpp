#ifndef UE4SS_SDK_TSK_PlayMontage_HPP
#define UE4SS_SDK_TSK_PlayMontage_HPP

class UTSK_PlayMontage_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAnimMontage* Montage;
    bool WaitForCompletion;
    bool FreezeAlignment;

    void ReceiveExecuteAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ReceiveAbortAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_PlayMontage(int32 EntryPoint, UAIController* K2Node_Event_OwnerController_1, APawn* K2Node_Event_ControlledPawn_1, InterfaceProperty K2Node_DynamicCast_AsNet_Montage_Able, bool K2Node_DynamicCast_bSuccess, UDeepPathfinderCharacter* K2Node_DynamicCast_AsDeep_Pathfinder_Character, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_QueueMontage_ReturnValue, UAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, InterfaceProperty K2Node_DynamicCast_AsNet_Montage_Able_1, bool K2Node_DynamicCast_bSuccess_2, UDeepPathfinderCharacter* K2Node_DynamicCast_AsDeep_Pathfinder_Character_1, bool K2Node_DynamicCast_bSuccess_3, float CallFunc_QueueMontage_ReturnValue_1);
}

#endif
