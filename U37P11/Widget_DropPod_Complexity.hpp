#ifndef UE4SS_SDK_Widget_DropPod_Complexity_HPP
#define UE4SS_SDK_Widget_DropPod_Complexity_HPP

class UWidget_DropPod_Complexity_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_0;
    class UVerticalBox* DeepDive_MissionData;
    class UImage* Image_41;
    class UITM_MisSel_DotMarker_CaveDifficulty_C* ITM_MisSel_DotMarker_CaveDifficulty;
    class UITM_MisSel_DotMarker_MissionLength_C* ITM_MisSel_DotMarker_MissionLength;
    class UVerticalBox* NoDeepDive_MissionData;
    class UProgressBar* ProgressBar_0;
    class UProgressBar* ProgressBar_1;
    class UProgressBar* ProgressBar_2;
    class UProgressBar* ProgressBar_3;
    class UTextBlock* TextBlock_0;
    class UTextBlock* TextBlock_1;
    class UTextBlock* TextBlock_2;
    class UTextBlock* TextBlock_3;
    class UTextBlock* TextBlock_4;
    class UTextBlock* TextBlock_5;
    class UTextBlock* TextBlock_6;
    class UWarningBox_C* WarningBox;
    class UWarningBox_C* WarningBox_C_1;
    class UWarningBox_C* WarningBox_C_2;
    class UWarningBox_C* WarningBox_C_3;
    class UWarningBox_C* WarningBox_C_4;
    class UWarningBox_C* WarningBox_C_5;
    class UWidgetSwitcher* WidgetSwitcher_0;
    float TimePassed;
    int32 missionLength;
    int32 MissionComplexity;

    void AdjustBar(float InputPin);
    void SetGeneratedMission(class UGeneratedMission* In Mission);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnGeneratedMissionChanged(class UGeneratedMission* OutGeneratedMission);
    void ExecuteUbergraph_Widget_DropPod_Complexity(int32 EntryPoint);
};

#endif
