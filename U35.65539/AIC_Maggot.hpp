#ifndef UE4SS_SDK_AIC_Maggot_HPP
#define UE4SS_SDK_AIC_Maggot_HPP

class AAIC_Maggot_C : UFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBehaviorTree* BehaviorTree;

    void ReceiveBeginPlay();
    void OnDeath(UHealthComponentBase* HealthComponent);
    void ReceivePossess(APawn* PossessedPawn);
    void ExecuteUbergraph_AIC_Maggot(int32 EntryPoint, APawn* K2Node_Event_PossessedPawn, USimpleHealthComponent* CallFunc_GetComponentByClass_ReturnValue, DeathSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, UHealthComponentBase* K2Node_CustomEvent_HealthComponent, bool CallFunc_RunBehaviorTree_ReturnValue);
}

#endif
