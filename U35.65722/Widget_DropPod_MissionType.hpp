#ifndef UE4SS_SDK_Widget_DropPod_MissionType_HPP
#define UE4SS_SDK_Widget_DropPod_MissionType_HPP

class UWidget_DropPod_MissionType_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UTextBlock* DATA_MissionName;
    class UTextBlock* DATA_MissionType;
    class USizeBox* DeepDiveIcon;
    class UHorizontalBox* HorizontalBox_Mutators;
    class UImage* Image_41;
    class UITM_DeepDive_ObjectiveIcon_C* ITM_DeepDive_ObjectiveIcon;
    class UITM_MisDesMutator_C* ITM_MisDesMutator;
    class UITM_MisDesMutator_C* ITM_MisDesMutator_1;
    class UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic;
    class USizeBox* NotDeepDiveIcon;
    class UITM_MissionBarDropPod_Objective_C* PrimaryObjective;
    class UITM_MissionBarDropPod_Objective_C* SecundaryObjective;
    class UVerticalBox* VerticalBox_MissionData;
    class UWidgetSwitcher* WidgetSwitcher_0;
    float TimePassed;
    int32 missionLength;
    int32 MissionComplexity;

    void SetMutators(class UGeneratedMission* mission, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class UMissionMutator*>& K2Node_MakeArray_Array, int32 Temp_int_Array_Index_Variable, FMargin K2Node_MakeStruct_Margin, class UITM_MisDesMutator_C* CallFunc_Create_ReturnValue, class UITM_MisDesMutator_C* CallFunc_Create_ReturnValue_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, TArray<class UMissionMutator*>& Temp_object_Variable, class UMissionWarning* CallFunc_Array_Get_Item, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable_1, TArray<class UMissionMutator*>& K2Node_Select_Default, bool CallFunc_Less_IntInt_ReturnValue, class UMissionMutator* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
    void SetGeneratedMission(class UGeneratedMission* In Mission, FText Temp_text_Variable, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, class UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue, class UDeepDive* CallFunc_GetDeepDiveFromMission_ReturnValue, class UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue_1, bool CallFunc_IsEliteDeepDive_ReturnValue, bool CallFunc_IsDeepDive_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, FText Temp_text_Variable_1, FSlateColor K2Node_MakeStruct_SlateColor_1, bool CallFunc_IsDeepDive_ReturnValue_1, bool Temp_bool_Variable_1, FText K2Node_Select_Default, FText K2Node_Select_Default_1);
    void Construct();
    void OnGeneratedMissionChanged(class UGeneratedMission* OutGeneratedMission);
    void OnDifficultyChanged_Event_0(class UDifficultySetting* Setting);
    void ExecuteUbergraph_Widget_DropPod_MissionType(int32 EntryPoint, FExecuteUbergraph_Widget_DropPod_MissionTypeK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_Widget_DropPod_MissionTypeK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, class UGeneratedMission* K2Node_CustomEvent_OutGeneratedMission, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class UDifficultySetting* K2Node_CustomEvent_Setting, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2);
};

#endif
