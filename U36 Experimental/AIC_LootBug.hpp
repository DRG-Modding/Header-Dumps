#ifndef UE4SS_SDK_AIC_LootBug_HPP
#define UE4SS_SDK_AIC_LootBug_HPP

class AAIC_LootBug_C : public AFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ReceivePossess(class APawn* PossessedPawn);
    void OnDeath(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_AIC_LootBug(int32 EntryPoint);
};

#endif
