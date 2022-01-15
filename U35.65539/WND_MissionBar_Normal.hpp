#ifndef UE4SS_SDK_WND_MissionBar_Normal_HPP
#define UE4SS_SDK_WND_MissionBar_Normal_HPP

class UWND_MissionBar_Normal_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* ANIM_AssignmentIcon_Throb;
    UWidgetAnimation* ANIM_Intro;
    UImage* AssignmentIcon;
    UImage* AssignmentIconGlow;
    UOverlay* AssignmentIconHolder;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_0;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1;
    UBasic_ResourceIcon_C* Basic_ResourceIcon;
    UBasic_ResourceIcon_C* Basic_ResourceIcon_0;
    UBorder* Border_0;
    UBorder* Border_1;
    UBorder* Border_2;
    UBorder* Border_3;
    UBorder* BottomBorder;
    UTextBlock* DATA_HazardLevelName;
    UTextBlock* DATA_MissionName;
    UTextBlock* DATA_MissionType;
    UTextBlock* DATA_PlanetaryRegionName;
    UITM_MisSel_DotMarker_CaveDifficulty_C* ITM_MisSel_DotMarker_CaveDifficulty;
    UITM_MisSel_DotMarker_MissionLength_C* ITM_MisSel_DotMarker_MissionLength;
    UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic;
    UITM_MissionBar_Warning_C* ITM_MissionBar_MutatorDescription;
    UITM_MissionBar_Warning_C* ITM_MissionBar_Warning;
    UBorder* MtopBG;
    UITM_MissionBar_Objective_C* PrimaryObjective;
    UITM_MissionBar_Objective_C* SecondaryObjective;
    UTextBlock* TextBlock_CampaignWarning;
    UBorder* TopBorder;
    UImage* TopSlantL;
    UImage* TopSlantR;
    UVerticalBox* VBox_Mutators;
    UVerticalBox* VBox_Warnings;

    void SetDifficultyData(UDifficultySetting* Target);
    void CampaignChecks(UGeneratedMission* mission, bool& CampaignMission, bool& AreRestrictionsMet, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UCampaignManager* CallFunc_GetCampaingManager_ReturnValue, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_AreRestrictionsMet_ReturnValue, bool CallFunc_IsCampaignMission_ReturnValue);
    void SetGeneratedMission(UGeneratedMission* InMission, UBiome* Biome, TArray<UMissionMutator*>& Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, FMargin K2Node_MakeStruct_Margin, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_CampaignChecks_CampaignMission, bool CallFunc_CampaignChecks_AreRestrictionsMet, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, bool CallFunc_SelectVisibility_IsVisible_2, bool CallFunc_SelectVisibility_VisibilityChanged_2, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_2, UITM_MissionBar_Warning_C* CallFunc_Create_ReturnValue, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, FResourceSpawner CallFunc_Array_Get_Item, TArray<UBasic_ResourceIcon_C*>& K2Node_MakeArray_Array, UBasic_ResourceIcon_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible_3, bool CallFunc_SelectVisibility_VisibilityChanged_3, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_3, bool CallFunc_Less_IntInt_ReturnValue_1, UMissionDNA* CallFunc_GetMissionDNA_ReturnValue, UMissionDNA* CallFunc_GetMissionDNA_ReturnValue_1, UMissionWarning* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, TArray<UMissionMutator*>& K2Node_MakeArray_Array_1, TArray<UMissionMutator*>& K2Node_Select_Default, UMissionMutator* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, UITM_MissionBar_Warning_C* CallFunc_Create_ReturnValue_1, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnDifficultyChanged_Event_0(UDifficultySetting* Setting);
    void ExecuteUbergraph_WND_MissionBar_Normal(int32 EntryPoint, UDifficultySetting* K2Node_CustomEvent_Setting, DifficultyDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue);
}

#endif
