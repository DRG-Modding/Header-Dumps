#ifndef UE4SS_SDK_BP_SpaceRig_GamemOde_HPP
#define UE4SS_SDK_BP_SpaceRig_GamemOde_HPP

class ABP_SpaceRig_Gamemode_C : public AFSDGameModeSpaceRig
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDifficultyManager* DifficultyManager;
    class USceneComponent* DefaultSceneRoot;

    bool PlayerCanRestart(class APlayerController* Player);
    void SendMissionStartAnalytics();
    void SelectRandomAvailableClass(class AFSDPlayerState* Player);
    class AActor* ChoosePlayerStart(class AController* Player);
    void GetGameState(class ABP_GameState_SpaceRig_C*& GameState);
    UClass* GetDefaultPawnClassForController(class AController* InController);
    void OnFailure_1E75EB674DDE2C1E6C7EC18D18AFDB55();
    void OnSuccess_1E75EB674DDE2C1E6C7EC18D18AFDB55();
    void OnFailure_509E599D4BB91C15BA2979B190501E9F();
    void OnSuccess_509E599D4BB91C15BA2979B190501E9F();
    void ReceiveBeginPlay();
    void OnCountdownComplete();
    void K2_OnLogout(class AController* ExitingController);
    void K2_OnRestartPlayer(class AController* NewPlayer);
    void ControllerReady(class AFSDPlayerController* Target);
    void InstantlyStartMission();
    void On online privilige checked(const class APlayerState* CheckedPlayerState, EBlueprintableUserPrivileges CheckedPrivilege, EBlueprintablePrivilegeResults PrivilegeResult);
    void ExecuteUbergraph_BP_SpaceRig_Gamemode(int32 EntryPoint);
};

#endif
