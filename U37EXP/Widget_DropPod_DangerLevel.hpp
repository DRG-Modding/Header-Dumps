#ifndef UE4SS_SDK_Widget_DropPod_DangerLevel_HPP
#define UE4SS_SDK_Widget_DropPod_DangerLevel_HPP

class UWidget_DropPod_DangerLevel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UTextBlock* DATA_PlanetaryRegionName;
    class UVerticalBox* DeepDive;
    class UVerticalBox* HazardLevels;
    class UImage* Image_41;
    class UITM_DeepDiveHeader_C* ITM_DeepDiveHeader;
    class UHorizontalBox* NotDeepDive;
    class UProgressBar* ProgressBar_0;
    class UVerticalBox* VerticalBox_MissionData;
    class UWarningBox_C* WarningBox;
    class UWarningBox_C* WarningBox_C_1;
    class UWarningBox_C* WarningBox_C_50;
    class UWarningBox_C* WarningBox_C_51;
    class UWidgetSwitcher* WidgetSwitcher_138;
    TArray<FText> Names;
    int32 Index;
    float TimePassed;

    void AdjustBar(float InputPin);
    void SetGeneratedMission(class UGeneratedMission* In Mission);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnGeneratedMissionChanged(class UGeneratedMission* OutGeneratedMission);
    void ExecuteUbergraph_Widget_DropPod_DangerLevel(int32 EntryPoint);
};

#endif
