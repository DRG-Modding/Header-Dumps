#ifndef UE4SS_SDK_AIC_Spider_HPP
#define UE4SS_SDK_AIC_Spider_HPP

class AAIC_Spider_C : public AFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBehaviorTree* BehaviorTree;
    class UEnemyHealthComponent* EnemyHealthComponent;
    float SpeedModifier;

    void ReceiveBeginPlay();
    void OnDeath(class UHealthComponentBase* HealthComponent);
    void ReceivePossess(class APawn* PossessedPawn);
    void Speed Changer();
    void attackingChanged(bool IsAttacking);
    void StartSpeedModifier();
    void Start Behaviour Tree();
    void ExecuteUbergraph_AIC_Spider(int32 EntryPoint);
};

#endif
