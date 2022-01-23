#ifndef UE4SS_SDK_LoreScreen_MissionComplexity_HPP
#define UE4SS_SDK_LoreScreen_MissionComplexity_HPP

class ULoreScreen_MissionComplexity_C : public ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Window_CutCorner_C* Basic_Window_CutCorner;
    class UBasic_Window_CutCorner_C* Basic_Window_CutCorner_132;
    class UBasic_Window_CutCorner_C* Basic_Window_CutCorner_C_134;
    class UBasic_Window_CutCorner_C* Basic_Window_CutCorner_C_135;
    class UBasic_Window_CutCorner_C* Basic_Window_CutCorner_C_136;
    class UBasic_Window_CutCorner_C* Basic_Window_CutCorner_C_137;
    class UBasic_Window_CutCorner_C* Basic_Window_CutCorner_C_138;
    class UBasic_Window_CutCorner_C* Basic_Window_CutCorner_C_139;
    class UITM_MisSel_DotMarker_CaveDifficulty_C* ITM_MisSel_DotMarker_CaveDifficulty;
    class UITM_MisSel_DotMarker_CaveDifficulty_C* ITM_MisSel_DotMarker_CaveDifficulty_C_1;
    class UITM_MisSel_DotMarker_CaveDifficulty_C* ITM_MisSel_DotMarker_CaveDifficulty_C_2;
    class UITM_MisSel_DotMarker_CaveDifficulty_C* ITM_MisSel_DotMarker_CaveDifficulty_C_3;
    class UITM_MisSel_DotMarker_CaveDifficulty_C* ITM_MisSel_DotMarker_CaveDifficulty_C_4;
    class UITM_MisSel_DotMarker_MissionLength_C* ITM_MisSel_DotMarker_MissionLength;
    class UITM_MisSel_DotMarker_MissionLength_C* ITM_MisSel_DotMarker_MissionLength_C_1;
    class UITM_MisSel_DotMarker_MissionLength_C* ITM_MisSel_DotMarker_MissionLength_C_2;
    class UITM_MisSel_DotMarker_MissionLength_C* ITM_MisSel_DotMarker_MissionLength_C_3;
    class UITM_MisSel_DotMarker_MissionLength_C* ITM_MisSel_DotMarker_MissionLength_C_4;
    class UITM_MisSel_DotMarker_WorkEnvironment_C* ITM_MisSel_DotMarker_WorkEnvironment;
    class UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic;
    class UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic_C_1;
    class UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic_C_2;
    class UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic_C_3;
    class UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic_C_4;
    class ULoreScreen_Template_C* LoreScreen_Template;
    class URichTextBlock* RichTextBlock_152;
    class URichTextBlock* RichTextBlock_153;
    class URichTextBlock* RichTextBlock_154;
    class UMissionTemplate* MissionTemplate;
    class UMissionComplexity* MissionComplexity;
    class UAudioComponent* HoverSound;

    void Construct();
    void RefreshContent();
    void ExecuteUbergraph_LoreScreen_MissionComplexity(int32 EntryPoint, FObjectiveMissionIcon CallFunc_GetPrimaryObjectiveIcon_ReturnValue, FObjectiveMissionIcon K2Node_MakeStruct_ObjectiveMissionIcon);
};

#endif
