#ifndef UE4SS_SDK_AIC_Maggot_HPP
#define UE4SS_SDK_AIC_Maggot_HPP

class AAIC_Maggot_C : public AFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBehaviorTree* BehaviorTree;

    void ReceiveBeginPlay();
    void OnDeath(class UHealthComponentBase* HealthComponent);
    void ReceivePossess(class APawn* PossessedPawn);
    void ExecuteUbergraph_AIC_Maggot(int32 EntryPoint);
};

#endif
