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

    void CanShowMissionType(class UGeneratedMission* InMission, bool& CanShow, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsSingleMission_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
    void Construct();
    void OnGeneratedMissionChanged(class UGeneratedMission* OutGeneratedMission);
    void ExecuteUbergraph_UI_MissionReadOut_Base(int32 EntryPoint, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, FExecuteUbergraph_UI_MissionReadOut_BaseK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, class UGeneratedMission* K2Node_CustomEvent_OutGeneratedMission, bool CallFunc_CanShowMissionType_CanShow, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, class UWidget* K2Node_Select_Default);
    void OnMissionSelected__DelegateSignature(class UGeneratedMission* InMission);
};

#endif
