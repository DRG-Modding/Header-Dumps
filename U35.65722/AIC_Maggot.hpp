#ifndef UE4SS_SDK_AIC_Maggot_HPP
#define UE4SS_SDK_AIC_Maggot_HPP

class AAIC_Maggot_C : public AFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBehaviorTree* BehaviorTree;

    void ReceiveBeginPlay();
    void OnDeath(class UHealthComponentBase* HealthComponent);
    void ReceivePossess(class APawn* PossessedPawn);
    void ExecuteUbergraph_AIC_Maggot(int32 EntryPoint, class APawn* K2Node_Event_PossessedPawn, class USimpleHealthComponent* CallFunc_GetComponentByClass_ReturnValue, FExecuteUbergraph_AIC_MaggotK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, class UHealthComponentBase* K2Node_CustomEvent_HealthComponent, bool CallFunc_RunBehaviorTree_ReturnValue);
};

#endif
