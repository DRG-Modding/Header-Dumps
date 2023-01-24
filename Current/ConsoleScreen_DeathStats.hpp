#ifndef UE4SS_SDK_ConsoleScreen_DeathStats_HPP
#define UE4SS_SDK_ConsoleScreen_DeathStats_HPP

class UConsoleScreen_DeathStats_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UConsoleScreen_Notification_C* ConsoleScreen_Notification;
    class UCanvasPanel* Empty;
    class UUI_DeathStats_View_C* UI_DeathStats_View;
    class ABP_PlayerController_SpaceRig_C* Player;
    class AFSDPlayerState* Owner State;

    void SetStatsOwner(const class AFSDPlayerState*& Player State);
    void ExecuteUbergraph_ConsoleScreen_DeathStats(int32 EntryPoint);
};

#endif
