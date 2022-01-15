#ifndef UE4SS_SDK_AIC_Harvester_HPP
#define UE4SS_SDK_AIC_Harvester_HPP

class AAIC_Harvester_C : UFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBehaviorTree* BehaviorTree;
    UHealthComponentBase* HealthComponent;

    void ReceiveBeginPlay();
    void OnDeath(UHealthComponentBase* HealthComponent);
    void ReceivePossess(APawn* PossessedPawn);
    void ExecuteUbergraph_AIC_Harvester(int32 EntryPoint, DeathSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, UHealthComponentBase* K2Node_CustomEvent_HealthComponent, bool CallFunc_RunBehaviorTree_ReturnValue, APawn* K2Node_Event_PossessedPawn, UHealthComponentBase* CallFunc_GetComponentByClass_ReturnValue);
}

#endif
