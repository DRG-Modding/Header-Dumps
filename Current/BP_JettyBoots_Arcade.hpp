#ifndef UE4SS_SDK_BP_JettyBoots_Arcade_HPP
#define UE4SS_SDK_BP_JettyBoots_Arcade_HPP

class ABP_JettyBoots_Arcade_C : public AJettyBootsArcadeActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* IdleAudio;
    class UStaticMeshComponent* SM_Plug;
    class UBoxComponent* UsableCollider;
    class UChildActorComponent* ClearHighScores_Button;
    class UWidgetComponent* Widget;
    class USceneComponent* Scene;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;
    int32 GameCost;
    TArray<class UMaterialInterface*> Materials;

    bool GetIsReplayUser();
    void SetButtonLightsActive(bool InLightsActive);
    void UpdateActivePlayer();
    bool GetIsActiveUser();
    void GetGameWidget(class UUI_JettyBoots_Arcade_C*& OutWidget);
    void OnGameEnded_Event(FJettyBootsScore InScore, bool InOnHighScoreList, int32 InIHighScoreIndex, class APlayerCharacter* InPlayer);
    void Server_GameEnded(FJettyBootsScore OutScore);
    void ReceiveHighScoreChanged();
    void RefreshHighScores();
    void ReceiveReplayPackage(const FJettyBootsReplay& InPackage);
    void Setup Game Ended();
    void Setup Replay();
    void OnReplayRecorded(FJettyBootsReplay InReplay);
    void ReceivePlayerChanged();
    void ReceiveBeginPlay();
    void BndEvt__BP_JettyBoots_Arcade_StartGameUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void Setup Shouts();
    void Shout_OnGameOver(FJettyBootsScore InScore, bool InOnHighScoreList, int32 InHighScoreIndex, class APlayerCharacter* InPlayer);
    void Shout_OnStartGame(class APlayerCharacter* User, EInputKeys Key);
    void Shout_RestartingLevel(class APlayerCharacter* InPlayer);
    void Shout_LevelCompleted(class APlayerCharacter* InPlayer);
    void MissionShout_GameStart();
    void ExecuteUbergraph_BP_JettyBoots_Arcade(int32 EntryPoint);
};

#endif
