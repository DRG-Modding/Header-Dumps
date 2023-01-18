#ifndef UE4SS_SDK_AIC_EscortMule_HPP
#define UE4SS_SDK_AIC_EscortMule_HPP

class AAIC_EscortMule_C : public AEscortMuleAIController
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AEscortMule* EscortMule;
    bool DoDebugPath;
    float SpeedModWhileTunneling;
    float SpeedModPlayers;
    float SpeedModEnemies;
    class UEWC_Escort_DigPhase_C* WaveController_Drilling;
    class UEWC_Escort_Refueling_C* WaveController_Refueling;
    float SpeedModCheat;
    FVector DrilldozerLocationWhenActivated;
    bool AtDestination;
    bool MuleReady;
    int32 debugStartRoom;
    FTimerHandle SpeedModifierHandle;

    FVector GetPointBehindEscortMule(float Distance);
    void CalculateSpeedModifier();
    void GetPointBehindMule(float atDistance, FVector& Point);
    void UpdateDrillSegmentCubic();
    void DebugPath(TArray<FVector>& inArray, FLinearColor Color);
    void ReceiveBeginPlay();
    void ReceivePossess(class APawn* PossessedPawn);
    void OnMessageBehaviorTreeEvent_Event(FName Message);
    void OnActivatePressed();
    void Cheat_IncreaseSpeed();
    void CompleteRefuel();
    void MoveToEndOfPath();
    void OnExitGaragePathSet(const TArray<FVector>& Path);
    void Cheat_SetMuleSpeed(float FloatValue);
    void Cheat_JumpToNextPhase();
    void SetIsRefueled();
    void ArrivedAtStop();
    void DrawDebugPath();
    void OnPathComplete();
    void ExecuteUbergraph_AIC_EscortMule(int32 EntryPoint);
};

#endif
