#ifndef UE4SS_SDK_WND_MissionBar_Normal_HPP
#define UE4SS_SDK_WND_MissionBar_Normal_HPP

class UWND_MissionBar_Normal_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ANIM_AssignmentIcon_Throb;
    class UWidgetAnimation* ANIM_Intro;
    class UImage* AssignmentIcon;
    class UImage* AssignmentIconGlow;
    class UOverlay* AssignmentIconHolder;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_0;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1;
    class UBasic_ResourceIcon_C* Basic_ResourceIcon;
    class UBasic_ResourceIcon_C* Basic_ResourceIcon_0;
    class UBorder* Border_0;
    class UBorder* Border_1;
    class UBorder* Border_2;
    class UBorder* Border_3;
    class UBorder* BottomBorder;
    class UTextBlock* DATA_HazardLevelName;
    class UTextBlock* DATA_MissionName;
    class UTextBlock* DATA_MissionType;
    class UTextBlock* DATA_PlanetaryRegionName;
    class UITM_MisSel_DotMarker_CaveDifficulty_C* ITM_MisSel_DotMarker_CaveDifficulty;
    class UITM_MisSel_DotMarker_MissionLength_C* ITM_MisSel_DotMarker_MissionLength;
    class UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic;
    class UITM_MissionBar_Warning_C* ITM_MissionBar_MutatorDescription;
    class UITM_MissionBar_Warning_C* ITM_MissionBar_Warning;
    class UBorder* MtopBG;
    class UITM_MissionBar_Objective_C* PrimaryObjective;
    class UITM_MissionBar_Objective_C* SecondaryObjective;
    class UTextBlock* TextBlock_CampaignWarning;
    class UBorder* TopBorder;
    class UImage* TopSlantL;
    class UImage* TopSlantR;
    class UVerticalBox* VBox_Mutators;
    class UVerticalBox* VBox_Warnings;

    void SetDifficultyData(class UDifficultySetting* Target);
    void CampaignChecks(class UGeneratedMission* mission, bool& CampaignMission, bool& AreRestrictionsMet);
    void SetGeneratedMission(class UGeneratedMission* InMission);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnDifficultyChanged_Event_0(class UDifficultySetting* Setting);
    void ExecuteUbergraph_WND_MissionBar_Normal(int32 EntryPoint);
};

#endif
