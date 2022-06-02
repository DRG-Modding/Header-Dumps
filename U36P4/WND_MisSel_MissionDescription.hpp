#ifndef UE4SS_SDK_WND_MisSel_MissionDescription_HPP
#define UE4SS_SDK_WND_MisSel_MissionDescription_HPP

class UWND_MisSel_MissionDescription_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_0;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1;
    class UBlurBackground_C* BlurBackground;
    class UBorder* Border_PlayerRankNeeded;
    class UButton* Button_MissionInfo;
    class UBorder* CampaignInfo;
    class UBasic_Menu_ColorBar_C* ColorBar_Bottom;
    class UTextBlock* DATADescription_Assignment;
    class UTextBlock* DATADescription_Assignment_Locked;
    class UTextBlock* DataMissionName;
    class UTextBlock* DATAMissionType;
    class UITM_MisSel_DotMarker_CaveDifficulty_C* DotMarker_Complexity;
    class UITM_MisSel_DotMarker_MissionLength_C* DotMarker_Length;
    class UIcon_ClassLevel_C* Icon_ClassLevel;
    class UImage* Image_0;
    class UImage* Image_93;
    class UITM_MisSel_MissionIconBasic_C* ITEM_MissionSelection_MissionIconBasic_C_100;
    class UITM_MisDesMutator_C* ITM_MisDes_Modifier;
    class UITM_MisSel_ObjectivePrimary_C* ITM_MisSel_ObjectivePrimary;
    class UITM_MisSel_ObjectiveSecondary_C* ITM_MisSel_ObjectiveSecondary;
    class UBorder* Locked;
    class UTextBlock* TextBlock_Rank;
    class UTextBlock* TXTCaveComplexity;
    class UTextBlock* TXTMissionLength;
    class UVerticalBox* vboxMissionModifiers;
    class UVerticalBox* vboxMissionWindow;
    class UVerticalBox* VerticalBox_Objectives;
    class UMissionTemplate* MissionTemplate;

    void HandleAssignments(class UGeneratedMission* mission, class UDifficultySetting* optionalDifficulty);
    void SetData(class UGeneratedMission* mission, class UDifficultySetting* Difficulty);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_MissionInfo_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WND_MisSel_MissionDescription_Button_MissionInfo_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WND_MisSel_MissionDescription_Button_MissionInfo_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_WND_MisSel_MissionDescription(int32 EntryPoint);
};

#endif
