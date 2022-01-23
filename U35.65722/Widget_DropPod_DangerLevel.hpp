#ifndef UE4SS_SDK_Widget_DropPod_DangerLevel_HPP
#define UE4SS_SDK_Widget_DropPod_DangerLevel_HPP

class UWidget_DropPod_DangerLevel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UTextBlock* DATA_PlanetaryRegionName;
    class UVerticalBox* DeepDive;
    class UVerticalBox* HazardLevels;
    class UImage* Image_41;
    class UITM_DeepDiveHeader_C* ITM_DeepDiveHeader;
    class UHorizontalBox* NotDeepDive;
    class UProgressBar* ProgressBar_0;
    class UVerticalBox* VerticalBox_MissionData;
    class UWarningBox_C* WarningBox;
    class UWarningBox_C* WarningBox_C_1;
    class UWarningBox_C* WarningBox_C_50;
    class UWarningBox_C* WarningBox_C_51;
    class UWidgetSwitcher* WidgetSwitcher_138;
    TArray<FText> Names;
    int32 Index;
    float TimePassed;

    void AdjustBar(float InputPin, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue);
    void SetGeneratedMission(class UGeneratedMission* In Mission, bool CallFunc_IsValid_ReturnValue, FLinearColor Temp_struct_Variable, int32 Temp_int_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue, bool CallFunc_IsEliteDeepDive_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor Temp_struct_Variable_1, FLinearColor Temp_struct_Variable_2, FSlateColor K2Node_MakeStruct_SlateColor_1, bool CallFunc_IsDeepDive_ReturnValue, FSlateChildSize K2Node_MakeStruct_SlateChildSize, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor_2, FSlateColor K2Node_MakeStruct_SlateColor_3, FLinearColor Temp_struct_Variable_3, FLinearColor Temp_struct_Variable_4, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWidget_DropPod_DangerLevel_TextString_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, FText CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_TextText_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, FLinearColor Temp_struct_Variable_5, class UGameData* CallFunc_GetFSDGameData_ReturnValue, FLinearColor K2Node_Select_Default, int32 Temp_int_Loop_Counter_Variable_1, class UDifficultySetting* CallFunc_Array_Get_Item_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnGeneratedMissionChanged(class UGeneratedMission* OutGeneratedMission);
    void ExecuteUbergraph_Widget_DropPod_DangerLevel(int32 EntryPoint, class UGeneratedMission* K2Node_CustomEvent_OutGeneratedMission, FExecuteUbergraph_Widget_DropPod_DangerLevelK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1);
};

#endif
