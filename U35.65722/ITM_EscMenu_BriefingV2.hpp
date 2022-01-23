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
    void UpdateBiomeInfo(class UBiome* Biome, class UTexture2D* CallFunc_GetBiomePicture_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    class UWidget* Get Tool Tip Widget(class UBasic_ToolTip_CutCorner_C* HoverTooltipWidget, FActionIconMapping Temp_struct_Variable, EFSDInputSource Temp_byte_Variable, FActionIconMapping CallFunc_FindMouseKeyboardKeyIcon_KeyIcon, bool CallFunc_FindMouseKeyboardKeyIcon_ReturnValue, FActionIconMapping CallFunc_FindControllerKeyIcon_KeyIcon, bool CallFunc_FindControllerKeyIcon_ReturnValue, EFSDInputSource CallFunc_GetInputSource_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, class UToolTip_WithKeyIcon_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue, FActionIconMapping K2Node_Select_Default);
    void UpdateMissionStructure(bool& IsDeepDive, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsDeepDive_ReturnValue, ESlateVisibility K2Node_Select_Default);
    void UpdateMissionInfo(class UGeneratedMission* mission, ESlateVisibility Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, ESlateVisibility Temp_byte_Variable_1, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class UObjective* CallFunc_GetSecondaryObjective_ReturnValue, class UObjective* CallFunc_GetPrimaryObjective_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, bool Temp_bool_Variable, FObjectiveMissionIcon CallFunc_GetPrimaryObjectiveIcon_ReturnValue, class UCampaignManager* CallFunc_GetCampaingManager_ReturnValue, bool CallFunc_IsCampaignMission_ReturnValue, ESlateVisibility K2Node_Select_Default);
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
    void ExecuteUbergraph_ITM_EscMenu_BriefingV2(int32 EntryPoint, FExecuteUbergraph_ITM_EscMenu_BriefingV2K2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_ITM_EscMenu_BriefingV2K2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, FSlateColor K2Node_MakeStruct_SlateColor, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_UpdateMissionStructure_IsDeepDive, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_2, int32 CallFunc_GetMissionTime_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, FText CallFunc_GetTimeText_Text, FExecuteUbergraph_ITM_EscMenu_BriefingV2K2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FLinearColor CallFunc_MenuColors_OutputColor_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_3, class UGeneratedMission* K2Node_CustomEvent_OutGeneratedMission, bool CallFunc_IsInViewport_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue, class UDeepDive* CallFunc_GetActiveDeepDive_ReturnValue, FExecuteUbergraph_ITM_EscMenu_BriefingV2K2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_GetCurrentDeepDiveStage_ReturnValue, class UGeneratedMission* CallFunc_Array_Get_Item);
    void BiomeClicked__DelegateSignature();
    void WarningClicked__DelegateSignature();
    void MutatorClicked__DelegateSignature();
    void MissionTypeClicked__DelegateSignature();
};

#endif
