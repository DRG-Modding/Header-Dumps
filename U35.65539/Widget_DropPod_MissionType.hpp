#ifndef UE4SS_SDK_Widget_DropPod_MissionType_HPP
#define UE4SS_SDK_Widget_DropPod_MissionType_HPP

class UWidget_DropPod_MissionType_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UTextBlock* DATA_MissionName;
    UTextBlock* DATA_MissionType;
    USizeBox* DeepDiveIcon;
    UHorizontalBox* HorizontalBox_Mutators;
    UImage* Image_41;
    UITM_DeepDive_ObjectiveIcon_C* ITM_DeepDive_ObjectiveIcon;
    UITM_MisDesMutator_C* ITM_MisDesMutator;
    UITM_MisDesMutator_C* ITM_MisDesMutator_1;
    UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic;
    USizeBox* NotDeepDiveIcon;
    UITM_MissionBarDropPod_Objective_C* PrimaryObjective;
    UITM_MissionBarDropPod_Objective_C* SecundaryObjective;
    UVerticalBox* VerticalBox_MissionData;
    UWidgetSwitcher* WidgetSwitcher_0;
    float TimePassed;
    int32 missionLength;
    int32 MissionComplexity;

    void SetMutators(UGeneratedMission* mission, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<UMissionMutator*>& K2Node_MakeArray_Array, int32 Temp_int_Array_Index_Variable, FMargin K2Node_MakeStruct_Margin, UITM_MisDesMutator_C* CallFunc_Create_ReturnValue, UITM_MisDesMutator_C* CallFunc_Create_ReturnValue_1, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, TArray<UMissionMutator*>& Temp_object_Variable, UMissionWarning* CallFunc_Array_Get_Item, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable_1, TArray<UMissionMutator*>& K2Node_Select_Default, bool CallFunc_Less_IntInt_ReturnValue, UMissionMutator* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
    void SetGeneratedMission(UGeneratedMission* In Mission, FText Temp_text_Variable, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue, UDeepDive* CallFunc_GetDeepDiveFromMission_ReturnValue, UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue_1, bool CallFunc_IsEliteDeepDive_ReturnValue, bool CallFunc_IsDeepDive_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, FText Temp_text_Variable_1, FSlateColor K2Node_MakeStruct_SlateColor_1, bool CallFunc_IsDeepDive_ReturnValue_1, bool Temp_bool_Variable_1, FText K2Node_Select_Default, FText K2Node_Select_Default_1);
    void Construct();
    void OnGeneratedMissionChanged(UGeneratedMission* OutGeneratedMission);
    void OnDifficultyChanged_Event_0(UDifficultySetting* Setting);
    void ExecuteUbergraph_Widget_DropPod_MissionType(int32 EntryPoint, GeneratedMissionSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, DifficultyDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, UGeneratedMission* K2Node_CustomEvent_OutGeneratedMission, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UDifficultySetting* K2Node_CustomEvent_Setting, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2);
}

#endif
