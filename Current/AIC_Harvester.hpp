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
    void ExecuteUbergraph_AIC_Harvester(int32 EntryPoint);
};

#endif
