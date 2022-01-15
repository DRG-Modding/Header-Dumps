#ifndef UE4SS_SDK_ITM_EscMenu_BriefingV2_HPP
#define UE4SS_SDK_ITM_EscMenu_BriefingV2_HPP

class UITM_EscMenu_BriefingV2_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* NewMissionSelected;
    UBasic_IconWithOutline_C* Basic_IconWithOutline;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_2;
    UTextBlock* BiomeName;
    UImage* BiomeOutlined;
    UButton* Button_Biome;
    UButton* Button_MissionType;
    UButton* Button_Spacerig;
    UTextBlock* DATA_MissionTime;
    UTextBlock* DataMissionName;
    UImage* Image_Campaign;
    UImage* Image_MissionTerminal;
    UImage* Image_Separator;
    UImage* Image_Spacerig;
    UImage* ImageBG;
    UImage* ImageMissionIconGlow;
    UITM_DeepDive_ObjectiveIcon_C* ITM_DeepDive_ObjectiveIcon;
    UITM_DeepDiveHeader_C* ITM_DeepDiveHeader;
    UITM_DeepDiveInfo_C* ITM_DeepDiveInfo;
    UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic;
    UITM_MissionInfo_C* ITM_MissionInfo;
    UWidgetSwitcher* MissionContent;
    UWidgetSwitcher* MissionHeader;
    UWidgetSwitcher* MissionInfo;
    UVerticalBox* MissionTime;
    UITM_MissionBar_Objective_C* OnSpacerigPrimaryObjective;
    UITM_MissionBar_Objective_C* OnSpacerigSecondaryObjective;
    UITM_ObjectiveBox_InMission_C* PrimaryObj_InMission;
    URichTextSizable* RichTextSizable_106;
    UITM_ObjectiveBox_InMission_C* SecondaryObj_InMission;
    USpacer* Spacer_DeepDive;
    UTextBlock* Spacerig;
    UTextBlock* Text_MissionName;
    UTextBlock* TEXT_MissionTime;
    UTextBlock* TextBlock_0;
    UTextBlock* TextBlock_1;
    UTextBlock* TextBlock_MissionType;
    UWidgetSwitcher* WidgetSwitcher_MissionObjectives;
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
    void UpdateBiomeInfo(UBiome* Biome, UTexture2D* CallFunc_GetBiomePicture_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    UWidget* Get Tool Tip Widget(UBasic_ToolTip_CutCorner_C* HoverTooltipWidget, FActionIconMapping Temp_struct_Variable, EFSDInputSource Temp_byte_Variable, FActionIconMapping CallFunc_FindMouseKeyboardKeyIcon_KeyIcon, bool CallFunc_FindMouseKeyboardKeyIcon_ReturnValue, FActionIconMapping CallFunc_FindControllerKeyIcon_KeyIcon, bool CallFunc_FindControllerKeyIcon_ReturnValue, EFSDInputSource CallFunc_GetInputSource_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, UToolTip_WithKeyIcon_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue, FActionIconMapping K2Node_Select_Default);
    void UpdateMissionStructure(bool& IsDeepDive, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsDeepDive_ReturnValue, ESlateVisibility K2Node_Select_Default);
    void UpdateMissionInfo(UGeneratedMission* mission, ESlateVisibility Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, ESlateVisibility Temp_byte_Variable_1, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UObjective* CallFunc_GetSecondaryObjective_ReturnValue, UObjective* CallFunc_GetPrimaryObjective_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, bool Temp_bool_Variable, FObjectiveMissionIcon CallFunc_GetPrimaryObjectiveIcon_ReturnValue, UCampaignManager* CallFunc_GetCampaingManager_ReturnValue, bool CallFunc_IsCampaignMission_ReturnValue, ESlateVisibility K2Node_Select_Default);
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
    void OnGeneratedMissionChanged(UGeneratedMission* OutGeneratedMission);
    void MutatorClicked_Event();
    void WarningClicked_Event();
    void ExecuteUbergraph_ITM_EscMenu_BriefingV2(int32 EntryPoint, MutatorClicked__DelegateSignature K2Node_CreateDelegate_OutputDelegate, WarningClicked__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, FSlateColor K2Node_MakeStruct_SlateColor, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_UpdateMissionStructure_IsDeepDive, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_2, int32 CallFunc_GetMissionTime_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, FText CallFunc_GetTimeText_Text, GeneratedMissionSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FLinearColor CallFunc_MenuColors_OutputColor_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_3, UGeneratedMission* K2Node_CustomEvent_OutGeneratedMission, bool CallFunc_IsInViewport_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue, UDeepDive* CallFunc_GetActiveDeepDive_ReturnValue, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_GetCurrentDeepDiveStage_ReturnValue, UGeneratedMission* CallFunc_Array_Get_Item);
    void BiomeClicked__DelegateSignature();
    void WarningClicked__DelegateSignature();
    void MutatorClicked__DelegateSignature();
    void MissionTypeClicked__DelegateSignature();
}

#endif
