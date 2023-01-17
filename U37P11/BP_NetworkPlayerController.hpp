#ifndef UE4SS_SDK_BP_NetworkPlayerController_HPP
#define UE4SS_SDK_BP_NetworkPlayerController_HPP

class ABP_NetworkPlayerController_C : public ABP_PlayerController_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USCREEN_CharacterSelection_Base_C* CharSelectScreen;
    class UScreen_BaseLoadLevel_C* LoaderScreenUI;
    class UMenu_ServerStatus_C* TopBar;
    class UPopup_ReconnectController_C* ReconnectWidget;
    bool ShowingReconnectcontroller;
    class UScreen_CharacterInfo_C* CharInfo;
    bool SimulateLateJoin;
    TSoftClassPtr<USCREEN_CharacterSelection_Base_C> CharacterSelectionClass;

    void CollapseAndRemoveFromParent(class UWidget* Widget);
    TSubclassOf<class UUserWidget> GetLoaderScreenUIClass();
    void CleanupUI();
    void GetNonTakenHero(class UPlayerCharacterID*& SelectedClass);
    void ReceiveBeginPlay();
    void OnBack();
    void OnPlayerCharacterPossesed_Event(class APawn* Pawn);
    void Server_RequestNonTakenHero();
    void Client_RecieveNonTakenHero(class UPlayerCharacterID* New Character);
    void Server_SetCharacterSelected();
    void RecievePreClientTravel();
    void ReceiveDestroyed();
    void ShowReconnect(bool Show);
    void ExecuteUbergraph_BP_NetworkPlayerController(int32 EntryPoint);
};

#endif
