#ifndef UE4SS_SDK_AIC_ShootingPlant_HPP
#define UE4SS_SDK_AIC_ShootingPlant_HPP

class AAIC_ShootingPlant_C : public AFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Recieve_BlackboardValueChanged(const FName& KeyName);
    void OnDeath(class UHealthComponentBase* HealthComponent);
    void ReceivePossess(class APawn* PossessedPawn);
    void StartBehavior();
    void ExecuteUbergraph_AIC_ShootingPlant(int32 EntryPoint);
};

#endif
