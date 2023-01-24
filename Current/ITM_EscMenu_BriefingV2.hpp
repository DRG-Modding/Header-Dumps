#ifndef UE4SS_SDK_ITM_EscMenu_BriefingV2_HPP
#define UE4SS_SDK_ITM_EscMenu_BriefingV2_HPP

class UITM_EscMenu_BriefingV2_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* NewMissionSelected;
    class UBasic_IconWithOutline_C* Basic_IconWithOutline;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_2;
    class UTextBlock* BiomeName;
    class UImage* BiomeOutlined;
    class UButton* Button_Biome;
    class UButton* Button_MissionType;
    class UButton* Button_Spacerig;
    class UTextBlock* DATA_MissionTime;
    class UTextBlock* DataMissionName;
    class UImage* Image_Campaign;
    class UImage* Image_MissionTerminal;
    class UImage* Image_Separator;
    class UImage* Image_Spacerig;
    class UImage* ImageBG;
    class UImage* ImageMissionIconGlow;
    class UITM_DeepDive_ObjectiveIcon_C* ITM_DeepDive_ObjectiveIcon;
    class UITM_DeepDiveHeader_C* ITM_DeepDiveHeader;
    class UITM_DeepDiveInfo_C* ITM_DeepDiveInfo;
    class UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic;
    class UITM_MissionInfo_C* ITM_MissionInfo;
    class UWidgetSwitcher* MissionContent;
    class UWidgetSwitcher* MissionHeader;
    class UWidgetSwitcher* MissionInfo;
    class UVerticalBox* MissionTime;
    class UITM_MissionBar_Objective_C* OnSpacerigPrimaryObjective;
    class UITM_MissionBar_Objective_C* OnSpacerigSecondaryObjective;
    class UITM_ObjectiveBox_InMission_C* PlagueObj_InMission;
    class UITM_ObjectiveBox_InMission_C* PrimaryObj_InMission;
    class URichTextSizable* RichTextSizable_106;
    class UITM_ObjectiveBox_InMission_C* SecondaryObj_InMission;
    class USpacer* Spacer_DeepDive;
    class UTextBlock* Spacerig;
    class UTextBlock* Text_MissionName;
    class UTextBlock* TEXT_MissionTime;
    class UTextBlock* TextBlock_0;
    class UTextBlock* TextBlock_1;
    class UTextBlock* TextBlock_MissionType;
    class UWidgetSwitcher* WidgetSwitcher_MissionObjectives;
    FTimerHandle MissionUpdateTimer;
    FITM_EscMenu_BriefingV2_CMissionTypeClicked MissionTypeClicked;
    void MissionTypeClicked();
    FITM_EscMenu_BriefingV2_CMutatorClicked MutatorClicked;
    void MutatorClicked();
    FITM_EscMenu_BriefingV2_CWarningClicked WarningClicked;
    void WarningClicked();
    FITM_EscMenu_BriefingV2_CBiomeClicked BiomeClicked;
    void BiomeClicked();

    void SequenceEvent__ENTRYPOINTITM_EscMenu_BriefingV2_0();
    void UpdateFromAnimation();
    void UpdateBiomeInfo(class UBiome* Biome);
    class UWidget* Get Tool Tip Widget();
    void UpdateMissionStructure(bool& IsDeepDive);
    void UpdateMissionInfo(class UGeneratedMission* mission);
    void PreConstruct(bool IsDesignTime);
    void Update();
    void UpdateMissionTime();
    void Close();
    void BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Biome_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Spacerig_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void OnGeneratedMissionChanged(class UGeneratedMission* OutGeneratedMission);
    void MutatorClicked_Event();
    void WarningClicked_Event();
    void ExecuteUbergraph_ITM_EscMenu_BriefingV2(int32 EntryPoint);
    void BiomeClicked__DelegateSignature();
    void WarningClicked__DelegateSignature();
    void MutatorClicked__DelegateSignature();
    void MissionTypeClicked__DelegateSignature();
};

#endif
