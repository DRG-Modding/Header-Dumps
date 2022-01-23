#ifndef UE4SS_SDK_AIC_LootBug_HPP
#define UE4SS_SDK_AIC_LootBug_HPP

class AAIC_LootBug_C : public AFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ReceivePossess(class APawn* PossessedPawn);
    void OnDeath(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_AIC_LootBug(int32 EntryPoint, class UHealthComponentBase* K2Node_CustomEvent_HealthComponent, FExecuteUbergraph_AIC_LootBugK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_RunBehaviorTree_ReturnValue, class APawn* K2Node_Event_PossessedPawn, class UHealthComponentBase* CallFunc_GetComponentByClass_ReturnValue);
};

#endif
