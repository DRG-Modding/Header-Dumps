#ifndef UE4SS_SDK_Console_MissionComplete_HPP
#define UE4SS_SDK_Console_MissionComplete_HPP

class UConsole_MissionComplete_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_0;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_3;
    UBasic_Menu_WindowBG_C* Basic_Menu_WindowBG;
    UBasic_Menu_WindowBG_C* Basic_Menu_WindowBG_C_0;
    UBasic_Menu_WindowBG_C* Basic_Menu_WindowBG_C_1;
    UBasic_Menu_WindowBG_C* Basic_Menu_WindowBG_C_2;
    UBasic_Menu_WindowBG_C* Basic_Menu_WindowBG_C_3;
    UBasic_Menu_WindowBG_C* Basic_Menu_WindowBG_C_5;
    UBasic_Menu_WindowBG_C* Basic_Menu_WindowBG_C_6;
    UTextBlock* Data_Complexity;
    UTextBlock* DATA_CreditsEarned;
    UTextBlock* Data_HazardLevel;
    UTextBlock* Data_Length;
    UTextBlock* DATA_MissionTime;
    UTextBlock* Data_TotalBonus;
    UTextBlock* DATA_XPEarned;
    UImage* Icon_XP;
    UImage* Image_1;
    UImage* Image_41;
    UITM_MisSel_DotMarker_C* ITM_MisSel_DotMarke_Length;
    UITM_MisSel_DotMarker_C* ITM_MisSel_DotMarker_Complexity;
    UITM_WarningWithPercent_C* ITM_WarningWithPercent;
    UVerticalBox* MainScreen;
    UVerticalBox* MissionFailed;
    UVerticalBox* MIssionSuccessful;
    UVerticalBox* MissionTimeHolder;
    UTextBlock* TEXT_CreditsEarned;
    UTextBlock* Text_MissionStatus;
    UTextBlock* TEXT_MissionTime;
    UTextBlock* TextBlock_1;
    UTextBlock* TextBlock_3;
    UTextBlock* TextBlock_4;
    UTextBlock* TextBlock_5;
    UVerticalBox* VB_Warnings;
    UWidgetSwitcher* WidgetSwitcher_Success;

    void GetMissionResult(UMissionResultInfo*& MissionResultInfo, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void BeginScreen();
    void Construct();
    void ExecuteUbergraph_Console_MissionComplete(int32 EntryPoint, FText Temp_text_Variable, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, UMissionResultInfo* CallFunc_GetMissionResult_MissionResultInfo, UMissionResultInfo* CallFunc_GetMissionResult_MissionResultInfo_1, UMissionResultInfo* CallFunc_GetMissionResult_MissionResultInfo_2, FText CallFunc_GetTimeText_Text, UMissionResultInfo* CallFunc_GetMissionResult_MissionResultInfo_3, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UMissionResultInfo* CallFunc_GetMissionResult_MissionResultInfo_4, bool Temp_bool_Variable, bool Temp_bool_Variable_1, UWidget* K2Node_Select_Default, int32 Temp_int_Array_Index_Variable, UMissionResultInfo* CallFunc_GetMissionResult_MissionResultInfo_5, UMissionResultInfo* CallFunc_GetMissionResult_MissionResultInfo_6, UTexture2D* CallFunc_Array_Get_Item, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, FText K2Node_Select_Default_1, FText CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, UMissionResultInfo* CallFunc_GetMissionResult_MissionResultInfo_7, bool CallFunc_Less_IntInt_ReturnValue, UMissionResultInfo* CallFunc_GetMissionResult_MissionResultInfo_8, UMissionResultInfo* CallFunc_GetMissionResult_MissionResultInfo_9, bool CallFunc_Greater_FloatFloat_ReturnValue_1, int32 CallFunc_Round_ReturnValue_1, UMissionResultInfo* CallFunc_GetMissionResult_MissionResultInfo_10, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, FText CallFunc_Format_ReturnValue_1, UMissionResultInfo* CallFunc_GetMissionResult_MissionResultInfo_11, int32 CallFunc_Round_ReturnValue_2, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_3, int32 CallFunc_Round_ReturnValue_3, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_2, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_4, FText CallFunc_Format_ReturnValue_2, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_3, FText CallFunc_Format_ReturnValue_3, FText Temp_text_Variable_1, bool Temp_bool_Variable_2, FText K2Node_Select_Default_2, UITM_WarningWithPercent_C* CallFunc_Create_ReturnValue, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
}

#endif
