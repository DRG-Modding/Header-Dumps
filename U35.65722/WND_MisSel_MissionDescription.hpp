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

    void HandleAssignments(class UGeneratedMission* mission, class UDifficultySetting* optionalDifficulty, bool CallFunc_IsValid_ReturnValue, class UCampaignManager* CallFunc_GetCampaingManager_ReturnValue, bool CallFunc_IsCampaignRestrictionsMet_ReturnValue, bool CallFunc_IsCampaignMission_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1);
    void SetData(class UGeneratedMission* mission, class UDifficultySetting* Difficulty);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_MissionInfo_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_WND_MisSel_MissionDescription(int32 EntryPoint, FMargin K2Node_MakeStruct_Margin, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UGeneratedMission* K2Node_CustomEvent_Mission, class UDifficultySetting* K2Node_CustomEvent_Difficulty, float CallFunc_GetTotalHazardBonus_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class UMissionMutator*>& K2Node_MakeArray_Array, class UMissionDNA* CallFunc_GetMissionDNA_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FText CallFunc_TextToUpper_ReturnValue, float CallFunc_GetMissionScale_ReturnValue, FText CallFunc_TextToUpper_ReturnValue_1, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UITM_MisSel_ObjectivePrimary_C* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UITM_MisSel_ObjectiveSecondary_C* CallFunc_Create_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor_1, TArray<class UMissionMutator*>& Temp_object_Variable, bool Temp_bool_Variable, FText CallFunc_Conv_IntToText_ReturnValue, TArray<class UMissionMutator*>& K2Node_Select_Default, class UMissionMutator* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UMissionWarning* CallFunc_Array_Get_Item_1, FLinearColor CallFunc_MenuColors_OutputColor_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class UITM_MisDesMutator_C* CallFunc_Create_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UITM_MisDesMutator_C* CallFunc_Create_ReturnValue_3, class ULoreScreen_MissionType_C* CallFunc_Create_ReturnValue_4, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_2, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_3, bool Temp_bool_Variable_1, ESlateVisibility K2Node_Select_Default_1);
};

#endif
