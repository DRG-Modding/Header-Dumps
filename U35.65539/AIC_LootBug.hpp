#ifndef UE4SS_SDK_AIC_LootBug_HPP
#define UE4SS_SDK_AIC_LootBug_HPP

class AAIC_LootBug_C : UFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ReceivePossess(APawn* PossessedPawn);
    void OnDeath(UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_AIC_LootBug(int32 EntryPoint, UHealthComponentBase* K2Node_CustomEvent_HealthComponent, DeathSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_RunBehaviorTree_ReturnValue, APawn* K2Node_Event_PossessedPawn, UHealthComponentBase* CallFunc_GetComponentByClass_ReturnValue);
}

#endif
