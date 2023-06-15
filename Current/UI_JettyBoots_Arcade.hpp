#ifndef UE4SS_SDK_UI_JettyBoots_Arcade_HPP
#define UE4SS_SDK_UI_JettyBoots_Arcade_HPP

class UUI_JettyBoots_Arcade_C : public UJettyBootsArcadeWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UUI_JettyBoots_Announcement_C* Behind_Announce_UI;
    class UOverlay* Event_Overlay;
    class UUI_JettyBoots_Announcement_C* Front_Announce_UI;
    class UUI_JettyBoots_Game_C* Game_UI;
    class UUI_JettyBoot_Score_C* HighScore_Label;
    class UBasic_Label_C* Level_Label;
    class UUI_JettyBoots_Lives_C* LivesUI;
    class UUI_JettyBoot_Score_C* PlayerScore_Label;
    class UBasic_Label_C* PlayerScoreHeader;
    class UCanvasPanel* Screen_Game;
    class UUI_JettyBoots_StartScreen_C* Screen_Start;
    class UWidgetSwitcher* Screen_Switcher;
    class USceneComponent* Audio Scene Component;
    class UJettyBootSettings* LevelSettings;
    int32 MaxLives;
    class UAudioComponent* MusicComponent;
    bool ReplayStarted;
    bool LocalGameStarted;
    class APlayerCharacter* CurrentUser;
    class AJettyBootsArcadeActor* Arcade;
    TEnumAsByte<ENUM_JettyBoots_GameState::Type> previousState;
    int32 Seed;
    int32 Level;
    int32 Attempts;
    int32 TotalScore;
    FUI_JettyBoots_Arcade_COnRestartingLevel OnRestartingLevel;
    void OnRestartingLevel(class APlayerCharacter* InPlayer);
    FUI_JettyBoots_Arcade_COnLevelCompleted OnLevelCompleted;
    void OnLevelCompleted(class APlayerCharacter* InPlayer);
    FUI_JettyBoots_Arcade_COnReplayRecorded OnReplayRecorded;
    void OnReplayRecorded(FJettyBootsReplay InReplay);
    FUI_JettyBoots_Arcade_COnGameOver OnGameOver;
    void OnGameOver(FJettyBootsScore InScore, bool InOnHighScoreList, int32 InHighScoreIndex, class APlayerCharacter* InPlayer);
    FUI_JettyBoots_Arcade_COnGameEnded OnGameEnded;
    void OnGameEnded(FJettyBootsScore InScore, bool InOnHighScoreList, int32 InIHighScoreIndex, class APlayerCharacter* InPlayer);
    TArray<FJettyBootsScore> High Scores;
    FJettyBootsReplay LastReplay;
    int32 CurrentHighScore;
    TSoftClassPtr<UUserWidget> EventWidgetPreview;

    void Check FSDEvents();
    void StartNextLevel();
    void GetScoreStatus(int32 InNewScore, bool& OutOnList, int32& OutIndex);
    void UpdateMusic(TEnumAsByte<ENUM_JettyBoots_GameState::Type> InGameState, TEnumAsByte<ENUM_JettyBoots_GameState::Type>& OutGameState);
    void ReplayGame(FJettyBootsReplay InReplay);
    void StopGame();
    void GetUserName(FString& OutName);
    void StartGame(class APlayerCharacter* InUser, class AJettyBootsArcadeActor* InArcade);
    void SetHighScores(TArray<FJettyBootsScore>& InHighScores, int32 InLastIndex);
    void Display Level(int32 InValue);
    void Display Lives(int32 InValue, bool& OutGameOver);
    void Display Score(int32 InValue);
    void Display HighScore(int32 InHighscore);
    void Display State(int32 InLevel, int32 InScore, int32 InLives);
    void SetAudioSceneComponent(class USceneComponent* Audio Scene Component);
    void IsJumpPressed(bool& OutPressed);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__UI_JettyBoots_Arcade_GameUI_K2Node_ComponentBoundEvent_4_OnGameTicked__DelegateSignature(int32 InLevelSeed, FVector2D InCharacterPosition, TEnumAsByte<ENUM_JettyBoots_GameState::Type> InGameState);
    void BndEvt__UI_JettyBoots_Arcade_GameUI_K2Node_ComponentBoundEvent_3_OnGameStateChanged__DelegateSignature(TEnumAsByte<ENUM_JettyBoots_GameState::Type> InState, TEnumAsByte<ENUM_JettyBoots_GameState::Type> InPreviousState);
    void BndEvt__UI_JettyBoots_Arcade_GameUI_K2Node_ComponentBoundEvent_0_OnReplayStateChanged__DelegateSignature(TEnumAsByte<ENUM_JettyBoots_GameState::Type> InGameState);
    void BndEvt__UI_JettyBoots_Arcade_Game_UI_K2Node_ComponentBoundEvent_1_OnGateCleared__DelegateSignature();
    void BndEvt__UI_JettyBoots_Arcade_Game_UI_K2Node_ComponentBoundEvent_2_OnPointsGathered__DelegateSignature(int32 OutPoints);
    void Construct();
    void Setup FSD Events();
    void GameOverAudio();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_JettyBoots_Arcade(int32 EntryPoint);
    void OnLevelCompleted__DelegateSignature(class APlayerCharacter* InPlayer);
    void OnRestartingLevel__DelegateSignature(class APlayerCharacter* InPlayer);
    void OnGameOver__DelegateSignature(FJettyBootsScore InScore, bool InOnHighScoreList, int32 InHighScoreIndex, class APlayerCharacter* InPlayer);
    void OnReplayRecorded__DelegateSignature(FJettyBootsReplay InReplay);
    void OnGameEnded__DelegateSignature(FJettyBootsScore InScore, bool InOnHighScoreList, int32 InIHighScoreIndex, class APlayerCharacter* InPlayer);
};

#endif
