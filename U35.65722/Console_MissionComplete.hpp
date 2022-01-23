#ifndef UE4SS_SDK_Console_MissionComplete_HPP
#define UE4SS_SDK_Console_MissionComplete_HPP

class UConsole_MissionComplete_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_0;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_3;
    class UBasic_Menu_WindowBG_C* Basic_Menu_WindowBG;
    class UBasic_Menu_WindowBG_C* Basic_Menu_WindowBG_C_0;
    class UBasic_Menu_WindowBG_C* Basic_Menu_WindowBG_C_1;
    class UBasic_Menu_WindowBG_C* Basic_Menu_WindowBG_C_2;
    class UBasic_Menu_WindowBG_C* Basic_Menu_WindowBG_C_3;
    class UBasic_Menu_WindowBG_C* Basic_Menu_WindowBG_C_5;
    class UBasic_Menu_WindowBG_C* Basic_Menu_WindowBG_C_6;
    class UTextBlock* Data_Complexity;
    class UTextBlock* DATA_CreditsEarned;
    class UTextBlock* Data_HazardLevel;
    class UTextBlock* Data_Length;
    class UTextBlock* DATA_MissionTime;
    class UTextBlock* Data_TotalBonus;
    class UTextBlock* DATA_XPEarned;
    class UImage* Icon_XP;
    class UImage* Image_1;
    class UImage* Image_41;
    class UITM_MisSel_DotMarker_C* ITM_MisSel_DotMarke_Length;
    class UITM_MisSel_DotMarker_C* ITM_MisSel_DotMarker_Complexity;
    class UITM_WarningWithPercent_C* ITM_WarningWithPercent;
    class UVerticalBox* MainScreen;
    class UVerticalBox* MissionFailed;
    class UVerticalBox* MIssionSuccessful;
    class UVerticalBox* MissionTimeHolder;
    class UTextBlock* TEXT_CreditsEarned;
    class UTextBlock* Text_MissionStatus;
    class UTextBlock* TEXT_MissionTime;
    class UTextBlock* TextBlock_1;
    class UTextBlock* TextBlock_3;
    class UTextBlock* TextBlock_4;
    class UTextBlock* TextBlock_5;
    class UVerticalBox* VB_Warnings;
    class UWidgetSwitcher* WidgetSwitcher_Success;

    void GetMissionResult(class UMissionResultInfo*& MissionResultInfo, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void BeginScreen();
    void Construct();
    void ExecuteUbergraph_Console_MissionComplete(int32 EntryPoint, FText Temp_text_Variable, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, class UMissionResultInfo* CallFunc_GetMissionResult_MissionResultInfo, class UMissionResultInfo* CallFunc_GetMissionResult_MissionResultInfo_1, class UMissionResultInfo* CallFunc_GetMissionResult_MissionResultInfo_2, FText CallFunc_GetTimeText_Text, class UMissionResultInfo* CallFunc_GetMissionResult_MissionResultInfo_3, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UMissionResultInfo* CallFunc_GetMissionResult_MissionResultInfo_4, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UWidget* K2Node_Select_Default, int32 Temp_int_Array_Index_Variable, class UMissionResultInfo* CallFunc_GetMissionResult_MissionResultInfo_5, class UMissionResultInfo* CallFunc_GetMissionResult_MissionResultInfo_6, class UTexture2D* CallFunc_Array_Get_Item, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, FText K2Node_Select_Default_1, FText CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, class UMissionResultInfo* CallFunc_GetMissionResult_MissionResultInfo_7, bool CallFunc_Less_IntInt_ReturnValue, class UMissionResultInfo* CallFunc_GetMissionResult_MissionResultInfo_8, class UMissionResultInfo* CallFunc_GetMissionResult_MissionResultInfo_9, bool CallFunc_Greater_FloatFloat_ReturnValue_1, int32 CallFunc_Round_ReturnValue_1, class UMissionResultInfo* CallFunc_GetMissionResult_MissionResultInfo_10, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, FText CallFunc_Format_ReturnValue_1, class UMissionResultInfo* CallFunc_GetMissionResult_MissionResultInfo_11, int32 CallFunc_Round_ReturnValue_2, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_3, int32 CallFunc_Round_ReturnValue_3, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_2, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_4, FText CallFunc_Format_ReturnValue_2, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_3, FText CallFunc_Format_ReturnValue_3, FText Temp_text_Variable_1, bool Temp_bool_Variable_2, FText K2Node_Select_Default_2, class UITM_WarningWithPercent_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
};

#endif
