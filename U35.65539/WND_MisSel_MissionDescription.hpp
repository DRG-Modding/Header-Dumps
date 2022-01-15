#ifndef UE4SS_SDK_WND_MisSel_MissionDescription_HPP
#define UE4SS_SDK_WND_MisSel_MissionDescription_HPP

class UWND_MisSel_MissionDescription_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_0;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1;
    UBlurBackground_C* BlurBackground;
    UBorder* Border_PlayerRankNeeded;
    UButton* Button_MissionInfo;
    UBorder* CampaignInfo;
    UBasic_Menu_ColorBar_C* ColorBar_Bottom;
    UTextBlock* DATADescription_Assignment;
    UTextBlock* DATADescription_Assignment_Locked;
    UTextBlock* DataMissionName;
    UTextBlock* DATAMissionType;
    UITM_MisSel_DotMarker_CaveDifficulty_C* DotMarker_Complexity;
    UITM_MisSel_DotMarker_MissionLength_C* DotMarker_Length;
    UIcon_ClassLevel_C* Icon_ClassLevel;
    UImage* Image_0;
    UImage* Image_93;
    UITM_MisSel_MissionIconBasic_C* ITEM_MissionSelection_MissionIconBasic_C_100;
    UITM_MisDesMutator_C* ITM_MisDes_Modifier;
    UITM_MisSel_ObjectivePrimary_C* ITM_MisSel_ObjectivePrimary;
    UITM_MisSel_ObjectiveSecondary_C* ITM_MisSel_ObjectiveSecondary;
    UBorder* Locked;
    UTextBlock* TextBlock_Rank;
    UTextBlock* TXTCaveComplexity;
    UTextBlock* TXTMissionLength;
    UVerticalBox* vboxMissionModifiers;
    UVerticalBox* vboxMissionWindow;
    UVerticalBox* VerticalBox_Objectives;
    UMissionTemplate* MissionTemplate;

    void HandleAssignments(UGeneratedMission* mission, UDifficultySetting* optionalDifficulty, bool CallFunc_IsValid_ReturnValue, UCampaignManager* CallFunc_GetCampaingManager_ReturnValue, bool CallFunc_IsCampaignRestrictionsMet_ReturnValue, bool CallFunc_IsCampaignMission_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1);
    void SetData(UGeneratedMission* mission, UDifficultySetting* Difficulty);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_MissionInfo_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_WND_MisSel_MissionDescription(int32 EntryPoint, FMargin K2Node_MakeStruct_Margin, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, UGeneratedMission* K2Node_CustomEvent_Mission, UDifficultySetting* K2Node_CustomEvent_Difficulty, float CallFunc_GetTotalHazardBonus_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<UMissionMutator*>& K2Node_MakeArray_Array, UMissionDNA* CallFunc_GetMissionDNA_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FText CallFunc_TextToUpper_ReturnValue, float CallFunc_GetMissionScale_ReturnValue, FText CallFunc_TextToUpper_ReturnValue_1, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UITM_MisSel_ObjectivePrimary_C* CallFunc_Create_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, UITM_MisSel_ObjectiveSecondary_C* CallFunc_Create_ReturnValue_1, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor_1, TArray<UMissionMutator*>& Temp_object_Variable, bool Temp_bool_Variable, FText CallFunc_Conv_IntToText_ReturnValue, TArray<UMissionMutator*>& K2Node_Select_Default, UMissionMutator* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, UMissionWarning* CallFunc_Array_Get_Item_1, FLinearColor CallFunc_MenuColors_OutputColor_2, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, UITM_MisDesMutator_C* CallFunc_Create_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, UITM_MisDesMutator_C* CallFunc_Create_ReturnValue_3, ULoreScreen_MissionType_C* CallFunc_Create_ReturnValue_4, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_2, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_3, bool Temp_bool_Variable_1, ESlateVisibility K2Node_Select_Default_1);
}

#endif
