#ifndef UE4SS_SDK_AIC_InsectSwarm_HPP
#define UE4SS_SDK_AIC_InsectSwarm_HPP

class AAIC_InsectSwarm_C : UFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;
    FName IsAlertedKey;

    void ReceiveBeginPlay();
    void ReceivePossess(APawn* PossessedPawn);
    void ExecuteUbergraph_AIC_InsectSwarm(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_RunBehaviorTree_ReturnValue, APawn* K2Node_Event_PossessedPawn, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue);
}

#endif
