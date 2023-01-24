#ifndef UE4SS_SDK_AIC_HydraWeed_Shooter_HPP
#define UE4SS_SDK_AIC_HydraWeed_Shooter_HPP

class AAIC_HydraWeed_Shooter_C : public AFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Recieve_BlackboardValueChanged(const FName& KeyName);
    void OnDeath(class UHealthComponentBase* HealthComponent);
    void ReceivePossess(class APawn* PossessedPawn);
    void StartBehavior();
    void ExecuteUbergraph_AIC_HydraWeed_Shooter(int32 EntryPoint);
};

#endif
