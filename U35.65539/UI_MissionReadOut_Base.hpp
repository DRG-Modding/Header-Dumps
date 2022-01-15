#ifndef UE4SS_SDK_UI_MissionReadOut_Base_HPP
#define UE4SS_SDK_UI_MissionReadOut_Base_HPP

class UUI_MissionReadOut_Base_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UNamedSlot* ContentSlot;
    ULCD_MissionReadout_NoMissionSelected_C* LCD_MissionReadout_NoMissionSelected;
    UWidgetSwitcher* MissionSwitcher;
    FUI_MissionReadOut_Base_COnMissionSelected OnMissionSelected;
    void OnMissionSelected(UGeneratedMission* InMission);
    bool ShowDeepDives;

    void CanShowMissionType(UGeneratedMission* InMission, bool& CanShow, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsSingleMission_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
    void Construct();
    void OnGeneratedMissionChanged(UGeneratedMission* OutGeneratedMission);
    void ExecuteUbergraph_UI_MissionReadOut_Base(int32 EntryPoint, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, GeneratedMissionSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, UGeneratedMission* K2Node_CustomEvent_OutGeneratedMission, bool CallFunc_CanShowMissionType_CanShow, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, UWidget* K2Node_Select_Default);
    void OnMissionSelected__DelegateSignature(UGeneratedMission* InMission);
}

#endif
