#ifndef UE4SS_SDK_ITM_DeepDiveStatus_Stage_HPP
#define UE4SS_SDK_ITM_DeepDiveStatus_Stage_HPP

class UITM_DeepDiveStatus_Stage_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimHighlight;
    UWidgetAnimation* AnimReveal;
    UImage* BackgroundImage;
    UTextBlock* DATA_ObjectiveText;
    UTextBlock* DATA_StatusText;
    UITM_DeepDive_ObjectiveIcon_C* ITM_DeepDive_StageIcon;
    UITM_MatrixCore_C* ITM_DeepDive_StageRewardIcon;
    UWidgetSwitcher* MissionTextSwitcher;
    UHorizontalBox* MutatorWarningBox;
    int32 stageIndex;
    FITM_DeepDiveStatus_Stage_COnRevealed OnRevealed;
    void OnRevealed(UITM_DeepDiveStatus_Stage_C* StageWidget);

    void SetMutators(const UGeneratedMission* mission, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<UMissionMutator*>& K2Node_MakeArray_Array, int32 Temp_int_Array_Index_Variable, FMargin K2Node_MakeStruct_Margin, UITM_MisDesMutator_C* CallFunc_Create_ReturnValue, UITM_MisDesMutator_C* CallFunc_Create_ReturnValue_1, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, TArray<UMissionMutator*>& Temp_object_Variable, UMissionWarning* CallFunc_Array_Get_Item, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable_1, TArray<UMissionMutator*>& K2Node_Select_Default, bool CallFunc_Less_IntInt_ReturnValue, UMissionMutator* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
    void ShowMission(UDeepDive* InDeepDive, int32 InCurrentStage, int32 MissionsCompleted, UGeneratedMission* mission, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetMissionScale_ReturnValue, FText CallFunc_GetObjectiveDescription_MissionDescription, FText CallFunc_GetObjectiveDescription_MissionDescription_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, bool Temp_bool_Variable, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, int32 Temp_int_Variable, FText CallFunc_Format_ReturnValue, FText CallFunc_TextTrimPrecedingAndTrailing_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_SetVisibilityIf_IsVisible, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, FText Temp_text_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, FText Temp_text_Variable_1, bool CallFunc_LessEqual_IntInt_ReturnValue, UGeneratedMission* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_2, FText Temp_text_Variable_2, int32 K2Node_Select_Default, FText K2Node_Select_Default_1, FText K2Node_Select_Default_2, FText CallFunc_TextToUpper_ReturnValue);
    void ShowNoData();
    void GetObjectiveDescription(TSubclassOf<UObjective> InClass, float missionLength, FText& MissionDescription, FText CallFunc_GetObjectiveDescriptionFromClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue);
    void ShowCurrentState(bool MissionVisible, UGeneratedMission* ActiveMission, UDeepDive* ActiveDive, UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue, UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue_1, int32 CallFunc_GetCurrentDeepDiveStage_ReturnValue, int32 CallFunc_GetCurrentDeepDiveStage_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue_2, UDeepDive* CallFunc_GetActiveDeepDive_ReturnValue);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnRevealFinished();
    void Reveal(float StartDelay);
    void ExecuteUbergraph_ITM_DeepDiveStatus_Stage(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue, int32 CallFunc_GetCurrentDeepDiveStage_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UDeepDive* CallFunc_GetActiveDeepDive_ReturnValue, float K2Node_CustomEvent_StartDelay);
    void OnRevealed__DelegateSignature(UITM_DeepDiveStatus_Stage_C* StageWidget);
}

#endif
