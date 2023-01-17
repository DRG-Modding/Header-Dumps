#ifndef UE4SS_SDK_Menu_ServerStatus_HPP
#define UE4SS_SDK_Menu_ServerStatus_HPP

class UMenu_ServerStatus_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ULobby_BarTop_Countdown_C* CharSelect_Countdown;
    class UWND_MissionBar_C* WND_MissionBar;

    void Construct();
    void OnPlayerJoined(class AFSDPlayerState* PlayerState);
    void OnMissionSelected(class UGeneratedMission* mission);
    void ExecuteUbergraph_Menu_ServerStatus(int32 EntryPoint);
};

#endif
