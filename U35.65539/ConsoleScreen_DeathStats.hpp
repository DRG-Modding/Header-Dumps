#ifndef UE4SS_SDK_ConsoleScreen_DeathStats_HPP
#define UE4SS_SDK_ConsoleScreen_DeathStats_HPP

class UConsoleScreen_DeathStats_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UConsoleScreen_Notification_C* ConsoleScreen_Notification;
    UCanvasPanel* Empty;
    UUI_DeathStats_View_C* UI_DeathStats_View;
    UUI_WhiteOverlay_C* UI_WhiteOverlay;
    ABP_PlayerController_SpaceRig_C* Player;
    AFSDPlayerState* Owner State;

    void SetStatsOwner(const UFSDPlayerState*& Player State);
    void ExecuteUbergraph_ConsoleScreen_DeathStats(int32 EntryPoint, const UFSDPlayerState* K2Node_CustomEvent_Player_State, bool CallFunc_IsValid_ReturnValue);
}

#endif
