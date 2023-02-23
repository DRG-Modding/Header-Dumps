#ifndef UE4SS_SDK_GM_Salvage_HPP
#define UE4SS_SDK_GM_Salvage_HPP

class AGM_Salvage_C : public ABP_NetworkPlayGameMode_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* UplinkComplete_Cue;
    class UAudioComponent* DroppodMuleReady_Cue;
    class ADropPod* DropPod;
    class AEVENT_DropPodDefense_Base_C* DefenseEvent;
    TArray<class AActor*> MulesSalvaged;
    TArray<class ABP_Salvage_Point_C*> RepairPoints;
    class UOBJ_1st_Salvage_C* Objective;
    TArray<class TSubclassOf<AEVENT_DropPodDefense_Base_C>> RepairEvents;
    int32 MollyFailsafeCounter;
    int32 MollyCloseCounter;
    TMap<TSubclassOf<ABP_Salvage_Point_C>, int32> SalvagePointsAndDist;

    void UpdateFailsafeMollyCounters(FVector v2);
    void SpawnRepairPoints();
    void EnableNextRepairPoint();
    void OnLevelGenerationComplete(int32 pass);
    void Call DropPod();
    void DonkeyButtonPressed();
    void ReachedDropShip();
    void RepairPoint_Repaired(class AActor* RepairPoint);
    void DefendFail();
    void DefendDone();
    void OnCountdownFinished();
    void Countdowncomplete();
    void ActivateDonkeyButton();
    void OnMuleBayOpenedDispatch_Event_0();
    void OnObjectivesInitialized();
    void AllActorsSalaged();
    void Cheat_ActivateDropPod();
    void Cheat_FinishSalvagePoint();
    void ExecuteUbergraph_GM_Salvage(int32 EntryPoint);
};

#endif
