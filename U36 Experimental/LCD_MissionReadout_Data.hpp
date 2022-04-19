#ifndef UE4SS_SDK_LCD_MissionReadout_Data_HPP
#define UE4SS_SDK_LCD_MissionReadout_Data_HPP

class ULCD_MissionReadout_Data_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* DATA_MissionName;
    class UTextBlock* DATA_MissionType;
    class UHorizontalBox* HorizontalBox_Anomalies;
    class UHorizontalBox* HorizontalBox_Warnings;
    class UITM_MisDesMutator_C* ITM_MisDesMutator;
    class UITM_MisDesMutator_C* ITM_MisDesMutator_1;
    class UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic;
    class UUI_MissionReadOut_Base_C* UI_MissionReadOut_Base;

    void SetGeneratedMission(class UGeneratedMission* In Mission);
    void BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature(class UGeneratedMission* InMission);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_LCD_MissionReadout_Data(int32 EntryPoint);
};

#endif
