#ifndef UE4SS_SDK_BP_GameMode_HPP
#define UE4SS_SDK_BP_GameMode_HPP

class ABP_GameMode_C : public AFSDGameMode
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEnemyWaveManager* EnemyWaveManager;
    class UEncounterManager* EncounterManager;
    class USceneComponent* DefaultSceneRoot;
    FTimerHandle TimerHandle;
    bool CanSpawnBosco;

    void GetEditorCharacterClass(class UPlayerCharacterID*& Character Class);
    void PreloadMuleClass();
    void TryPreloadCheatMenu();
    void GetEscapepodLocation(FTransform& Location);
    void EnableMuleButton();
    void DestroyNetworkedActors();
    void LoadToMission(class UMissionTemplate* mission);
    UClass* GetDefaultPawnClassForController(class AController* InController);
    class AActor* ChoosePlayerStart(class AController* Player);
    void RecieveEndLevel();
    void ReceiveBeginPlay();
    void WaitForGeneration();
    void Recieve_ContinueTimerEnded();
    void Call DropPod();
    void Trigger End Wave(bool cancelAllWaves);
    void SpawnBosco(FTransform Location);
    void RemoveBosco();
    void Handle Bosco Respawn();
    void OnPlayerLeave(class AFSDPlayerState* PlayerState);
    void Loaded();
    void DonkeyButtonPressed();
    void LoadSpaceRig();
    void ExecuteUbergraph_BP_GameMode(int32 EntryPoint);
};

#endif
