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
    void CampaignChecks(class UGeneratedMission* mission, bool& CampaignMission, bool& AreRestrictionsMet, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCampaignManager* CallFunc_GetCampaingManager_ReturnValue, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_AreRestrictionsMet_ReturnValue, bool CallFunc_IsCampaignMission_ReturnValue);
    void SetGeneratedMission(class UGeneratedMission* InMission, class UBiome* Biome, TArray<class UMissionMutator*>& Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, FMargin K2Node_MakeStruct_Margin, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_CampaignChecks_CampaignMission, bool CallFunc_CampaignChecks_AreRestrictionsMet, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, bool CallFunc_SelectVisibility_IsVisible_2, bool CallFunc_SelectVisibility_VisibilityChanged_2, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_2, class UITM_MissionBar_Warning_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, FResourceSpawner CallFunc_Array_Get_Item, TArray<class UBasic_ResourceIcon_C*>& K2Node_MakeArray_Array, class UBasic_ResourceIcon_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible_3, bool CallFunc_SelectVisibility_VisibilityChanged_3, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_3, bool CallFunc_Less_IntInt_ReturnValue_1, class UMissionDNA* CallFunc_GetMissionDNA_ReturnValue, class UMissionDNA* CallFunc_GetMissionDNA_ReturnValue_1, class UMissionWarning* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, TArray<class UMissionMutator*>& K2Node_MakeArray_Array_1, TArray<class UMissionMutator*>& K2Node_Select_Default, class UMissionMutator* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, class UITM_MissionBar_Warning_C* CallFunc_Create_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnDifficultyChanged_Event_0(class UDifficultySetting* Setting);
    void ExecuteUbergraph_WND_MissionBar_Normal(int32 EntryPoint, class UDifficultySetting* K2Node_CustomEvent_Setting, FExecuteUbergraph_WND_MissionBar_NormalK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue);
};

#endif
