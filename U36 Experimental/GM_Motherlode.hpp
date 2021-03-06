#ifndef UE4SS_SDK_GM_Motherlode_HPP
#define UE4SS_SDK_GM_Motherlode_HPP

class AGM_Motherlode_C : public ABP_NetworkPlayGameMode_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector SelectedSpawnLocation;
    class ADropPod* MineHead;

    void GetLandingZoneLocation(FVector& Output);
    void GetMineHead(class ABP_MineHead_C*& Output);
    void ReceiveBeginPlay();
    void OnMatchStarted_();
    void BndEvt__ObjectivesManager_K2Node_ComponentBoundEvent_0_DelegateEvent__DelegateSignature();
    void OnCountdownFinished();
    void RocketLaunched();
    void SpawnMissionCriticalItems();
    void ExecuteUbergraph_GM_Motherlode(int32 EntryPoint);
};

#endif
