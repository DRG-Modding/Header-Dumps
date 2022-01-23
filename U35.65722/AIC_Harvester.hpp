#ifndef UE4SS_SDK_AIC_Harvester_HPP
#define UE4SS_SDK_AIC_Harvester_HPP

class AAIC_Harvester_C : public AFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBehaviorTree* BehaviorTree;
    class UHealthComponentBase* HealthComponent;

    void ReceiveBeginPlay();
    void OnDeath(class UHealthComponentBase* HealthComponent);
    void ReceivePossess(class APawn* PossessedPawn);
    void ExecuteUbergraph_AIC_Harvester(int32 EntryPoint, FExecuteUbergraph_AIC_HarvesterK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, class UHealthComponentBase* K2Node_CustomEvent_HealthComponent, bool CallFunc_RunBehaviorTree_ReturnValue, class APawn* K2Node_Event_PossessedPawn, class UHealthComponentBase* CallFunc_GetComponentByClass_ReturnValue);
};

#endif
