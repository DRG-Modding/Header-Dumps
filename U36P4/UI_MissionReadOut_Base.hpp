#ifndef UE4SS_SDK_UI_MissionReadOut_Base_HPP
#define UE4SS_SDK_UI_MissionReadOut_Base_HPP

class UUI_MissionReadOut_Base_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNamedSlot* ContentSlot;
    class ULCD_MissionReadout_NoMissionSelected_C* LCD_MissionReadout_NoMissionSelected;
    class UWidgetSwitcher* MissionSwitcher;
    FUI_MissionReadOut_Base_COnMissionSelected OnMissionSelected;
    void OnMissionSelected(class UGeneratedMission* InMission);
    bool ShowDeepDives;

    void CanShowMissionType(class UGeneratedMission* InMission, bool& CanShow);
    void Construct();
    void OnGeneratedMissionChanged(class UGeneratedMission* OutGeneratedMission);
    void ExecuteUbergraph_UI_MissionReadOut_Base(int32 EntryPoint);
    void OnMissionSelected__DelegateSignature(class UGeneratedMission* InMission);
};

#endif
