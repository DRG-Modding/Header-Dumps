#ifndef UE4SS_SDK_Menu_ServerStatus_HPP
#define UE4SS_SDK_Menu_ServerStatus_HPP

class UMenu_ServerStatus_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    ULobby_BarTop_Countdown_C* CharSelect_Countdown;
    UWND_MissionBar_C* WND_MissionBar;

    void Construct();
    void OnPlayerJoined(UFSDPlayerState* PlayerState);
    void OnMissionSelected(UGeneratedMission* mission);
    void ExecuteUbergraph_Menu_ServerStatus(int32 EntryPoint, UFSDPlayerState* K2Node_CustomEvent_PlayerState, UGeneratedMission* K2Node_CustomEvent_Mission);
}

#endif
