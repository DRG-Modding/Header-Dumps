#ifndef UE4SS_SDK_UI_MissionCheat_Base_HPP
#define UE4SS_SDK_UI_MissionCheat_Base_HPP

class UUI_MissionCheat_Base_C : public UUserWidget
{

    void TeleportTo(float desiredDistance, class AActor*& Taget);
    class UCheatMenu_BasicButtonWText_C* CreateButton(FString Base Text, FString Item Text, class UPanelWidget*& Panel, const TArray<class UCheatMenu_BasicButtonWText_C*>& TargetArray);
};

#endif
