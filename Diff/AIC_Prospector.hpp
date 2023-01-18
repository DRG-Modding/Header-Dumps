#ifndef UE4SS_SDK_AIC_Prospector_HPP
#define UE4SS_SDK_AIC_Prospector_HPP

class AAIC_Prospector_C : public AFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;
    FName IsRunningKey;
    FTimerHandle Timer_Running;
    FName Hackable;
    TSubclassOf<class UStatusEffect> Speed;
    TSet<AActor*> ScannedObjects;
    bool HasBeenAttacked;
    TSubclassOf<class UStatusEffect> SlowImmunity;
    class UHealthComponentBase* ProspectorHealth;
    bool ProspectorAlive;

    bool OnTriggerAI(FName TriggerName);
    void GetProspector(class AENE_Prospector_C*& AsENE Prospector);
    void OnMessageAI(FName TriggerName);
    void ReceiveBeginPlay();
    void OnDamageTaken();
    void OnMessageBehaviorTreeEvent_Event_0(FName Message);
    void SetHackable();
    void Recieve_BlackboardValueChanged(const FName& KeyName);
    void StartFleeing();
    void OnRunning();
    void FirstWeakpointDestroyed();
    void RemoveAllStatusEffects();
    void AddSlowImmunity();
    void RemoveSlowImmunity();
    void ReceivePossess(class APawn* PossessedPawn);
    void ProspectorDied(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_AIC_Prospector(int32 EntryPoint);
};

#endif
