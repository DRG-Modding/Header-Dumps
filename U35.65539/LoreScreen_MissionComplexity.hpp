#ifndef UE4SS_SDK_LoreScreen_MissionComplexity_HPP
#define UE4SS_SDK_LoreScreen_MissionComplexity_HPP

class ULoreScreen_MissionComplexity_C : ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Window_CutCorner_C* Basic_Window_CutCorner;
    UBasic_Window_CutCorner_C* Basic_Window_CutCorner_132;
    UBasic_Window_CutCorner_C* Basic_Window_CutCorner_C_134;
    UBasic_Window_CutCorner_C* Basic_Window_CutCorner_C_135;
    UBasic_Window_CutCorner_C* Basic_Window_CutCorner_C_136;
    UBasic_Window_CutCorner_C* Basic_Window_CutCorner_C_137;
    UBasic_Window_CutCorner_C* Basic_Window_CutCorner_C_138;
    UBasic_Window_CutCorner_C* Basic_Window_CutCorner_C_139;
    UITM_MisSel_DotMarker_CaveDifficulty_C* ITM_MisSel_DotMarker_CaveDifficulty;
    UITM_MisSel_DotMarker_CaveDifficulty_C* ITM_MisSel_DotMarker_CaveDifficulty_C_1;
    UITM_MisSel_DotMarker_CaveDifficulty_C* ITM_MisSel_DotMarker_CaveDifficulty_C_2;
    UITM_MisSel_DotMarker_CaveDifficulty_C* ITM_MisSel_DotMarker_CaveDifficulty_C_3;
    UITM_MisSel_DotMarker_CaveDifficulty_C* ITM_MisSel_DotMarker_CaveDifficulty_C_4;
    UITM_MisSel_DotMarker_MissionLength_C* ITM_MisSel_DotMarker_MissionLength;
    UITM_MisSel_DotMarker_MissionLength_C* ITM_MisSel_DotMarker_MissionLength_C_1;
    UITM_MisSel_DotMarker_MissionLength_C* ITM_MisSel_DotMarker_MissionLength_C_2;
    UITM_MisSel_DotMarker_MissionLength_C* ITM_MisSel_DotMarker_MissionLength_C_3;
    UITM_MisSel_DotMarker_MissionLength_C* ITM_MisSel_DotMarker_MissionLength_C_4;
    UITM_MisSel_DotMarker_WorkEnvironment_C* ITM_MisSel_DotMarker_WorkEnvironment;
    UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic;
    UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic_C_1;
    UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic_C_2;
    UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic_C_3;
    UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic_C_4;
    ULoreScreen_Template_C* LoreScreen_Template;
    URichTextBlock* RichTextBlock_152;
    URichTextBlock* RichTextBlock_153;
    URichTextBlock* RichTextBlock_154;
    UMissionTemplate* MissionTemplate;
    UMissionComplexity* MissionComplexity;
    UAudioComponent* HoverSound;

    void Construct();
    void RefreshContent();
    void ExecuteUbergraph_LoreScreen_MissionComplexity(int32 EntryPoint, FObjectiveMissionIcon CallFunc_GetPrimaryObjectiveIcon_ReturnValue, FObjectiveMissionIcon K2Node_MakeStruct_ObjectiveMissionIcon);
}

#endif
