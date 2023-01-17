#ifndef UE4SS_SDK_BP_PlayerState_HPP
#define UE4SS_SDK_BP_PlayerState_HPP

class ABP_PlayerState_C : public AFSDPlayerState
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPlayerResourceComponent* PlayerResource;
    class USceneComponent* DefaultSceneRoot;
    bool LateJoinFinished;
    bool TestDropThing;
    TSubclassOf<class ARessuplyPodSpawn> PodSpawnClass;
    TSubclassOf<class AActor> PodBeacnClass;
    bool TestLateJoin;

    TArray<FCreditsReward> GetDeepDiveCreditsReward(int32 StagesCompleted, int32 goldCollected);
    void GetRessupyBeaconClass(TSubclassOf<class AActor>& PodSpawnClass);
    void GetRessuplySpawnClass(TSubclassOf<class ARessuplyPodSpawn>& PodSpawnClass);
    void SpawnPlayerInPod(class AFSDPlayerController* Player);
    void SpawnPlayerDirectly(class AController* Player);
    void OnLoaded_E2B28351414D5B2A20966496F0955946(UClass* Loaded);
    void OnLoaded_97A4F0694E71C770F24EA6A654B14857(UClass* Loaded);
    void OnLateJoinFinished();
    void ReceiveBeginPlay();
    void LogState();
    void CharacterSelected();
    void TestLatjoin();
    void RespawnPlayer();
    void ExecuteUbergraph_BP_PlayerState(int32 EntryPoint);
};

#endif
