#ifndef UE4SS_SDK_AIC_Spider_Boss_Heavy_HPP
#define UE4SS_SDK_AIC_Spider_Boss_Heavy_HPP

class AAIC_Spider_Boss_Heavy_C : public AAIC_Spider_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool Enraged;
    TSet<AFSDPawn*> spawnedEnemies;
    FTimerHandle HandleSafetyTimer;
    float SentinelSafetyTime;

    bool CanSpawnSentinels();
    void SpawnSentinelsBySafetyTimer();
    void StartSafetyTimer();
    void UpdateHasSpawned();
    void SetEnemyState(TEnumAsByte<Spider_Boss_Heavy_State::Type> State);
    void GetTankBoss(class AENE_Spider_Boss_Heavy_C*& AsENE Tank Boss Heavy);
    void ReceiveBeginPlay();
    void OnMessageBehaviorTreeEvent_Event_0(FName Message);
    void SpawnEnemies();
    void OnEnemySpawned(class APawn* enemy);
    void OnDeathEvent(class UHealthComponentBase* HealthComponent);
    void ReceivePossess(class APawn* PossessedPawn);
    void OnStateChanged_Event_0(TEnumAsByte<Spider_Boss_Heavy_State::Type> State);
    void ExecuteUbergraph_AIC_Spider_Boss_Heavy(int32 EntryPoint);
};

#endif
