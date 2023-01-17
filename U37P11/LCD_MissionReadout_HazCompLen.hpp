#ifndef UE4SS_SDK_LCD_MissionReadout_HazCompLen_HPP
#define UE4SS_SDK_LCD_MissionReadout_HazCompLen_HPP

class ULCD_MissionReadout_HazCompLen_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UWidget_DropPod_DangerLevel_TextString_C* BP_DropPodScreenTextWidget;
    class UWidget_DropPod_DangerLevel_TextString_C* BP_DropPodScreenTextWidget_C_0;
    class UWidget_DropPod_DangerLevel_TextString_C* BP_DropPodScreenTextWidget_C_1;
    class UWidget_DropPod_DangerLevel_TextString_C* BP_DropPodScreenTextWidget_C_2;
    class UWidget_DropPod_DangerLevel_TextString_C* BP_DropPodScreenTextWidget_C_3;
    class UWidget_DropPod_DangerLevel_TextString_C* BP_DropPodScreenTextWidget_C_4;
    class UWidget_DropPod_DangerLevel_TextString_C* BP_DropPodScreenTextWidget_C_5;
    class UWidget_DropPod_DangerLevel_TextString_C* BP_DropPodScreenTextWidget_C_6;
    class UWidget_DropPod_DangerLevel_TextString_C* BP_DropPodScreenTextWidget_C_7;
    class UWidget_DropPod_DangerLevel_TextString_C* BP_DropPodScreenTextWidget_C_8;
    class UWidget_DropPod_DangerLevel_TextString_C* BP_DropPodScreenTextWidget_C_9;
    class UVerticalBox* ComplexityLevels;
    class UTextBlock* DATA_PlanetaryRegionName;
    class UVerticalBox* HazardLevels;
    class UImage* Image_41;
    class UVerticalBox* LenghtLevels;
    class UProgressBar* ProgressBar_Complexity;
    class UProgressBar* ProgressBar_Haz;
    class UProgressBar* ProgressBar_Length;
    class UUI_MissionReadOut_Base_C* UI_MissionReadOut_Base;
    class UVerticalBox* VerticalBox_MissionData;
    TArray<FText> Names;
    int32 Index;
    float TimePassed;
    int32 MissionComplexity;
    int32 missionLength;

    void AdjustCLBar(float InputPin);
    void AdjustBar(float InputPin);
    void SetGeneratedMission(class UGeneratedMission* In Mission);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature(class UGeneratedMission* InMission);
    void ExecuteUbergraph_LCD_MissionReadout_HazCompLen(int32 EntryPoint);
};

#endif
