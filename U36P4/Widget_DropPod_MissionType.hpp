#ifndef UE4SS_SDK_Widget_DropPod_MissionType_HPP
#define UE4SS_SDK_Widget_DropPod_MissionType_HPP

class UWidget_DropPod_MissionType_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UTextBlock* DATA_MissionName;
    class UTextBlock* DATA_MissionType;
    class USizeBox* DeepDiveIcon;
    class UHorizontalBox* HorizontalBox_Mutators;
    class UImage* Image_41;
    class UITM_DeepDive_ObjectiveIcon_C* ITM_DeepDive_ObjectiveIcon;
    class UITM_MisDesMutator_C* ITM_MisDesMutator;
    class UITM_MisDesMutator_C* ITM_MisDesMutator_1;
    class UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic;
    class USizeBox* NotDeepDiveIcon;
    class UITM_MissionBarDropPod_Objective_C* PrimaryObjective;
    class UITM_MissionBarDropPod_Objective_C* SecundaryObjective;
    class UVerticalBox* VerticalBox_MissionData;
    class UWidgetSwitcher* WidgetSwitcher_0;
    float TimePassed;
    int32 missionLength;
    int32 MissionComplexity;

    void SetMutators(class UGeneratedMission* mission);
    void SetGeneratedMission(class UGeneratedMission* In Mission);
    void Construct();
    void OnGeneratedMissionChanged(class UGeneratedMission* OutGeneratedMission);
    void OnDifficultyChanged_Event_0(class UDifficultySetting* Setting);
    void ExecuteUbergraph_Widget_DropPod_MissionType(int32 EntryPoint);
};

#endif
