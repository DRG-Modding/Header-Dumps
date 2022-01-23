#ifndef UE4SS_SDK_TSK_PlayMontage_HPP
#define UE4SS_SDK_TSK_PlayMontage_HPP

class UTSK_PlayMontage_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAnimMontage* Montage;
    bool WaitForCompletion;
    bool FreezeAlignment;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_PlayMontage(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, TScriptInterface<class INetMontageAble> K2Node_DynamicCast_AsNet_Montage_Able, bool K2Node_DynamicCast_bSuccess, class ADeepPathfinderCharacter* K2Node_DynamicCast_AsDeep_Pathfinder_Character, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_QueueMontage_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, TScriptInterface<class INetMontageAble> K2Node_DynamicCast_AsNet_Montage_Able_1, bool K2Node_DynamicCast_bSuccess_2, class ADeepPathfinderCharacter* K2Node_DynamicCast_AsDeep_Pathfinder_Character_1, bool K2Node_DynamicCast_bSuccess_3, float CallFunc_QueueMontage_ReturnValue_1);
};

#endif
