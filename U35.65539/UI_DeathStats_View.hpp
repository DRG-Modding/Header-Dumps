#ifndef UE4SS_SDK_UI_DeathStats_View_HPP
#define UE4SS_SDK_UI_DeathStats_View_HPP

class UUI_DeathStats_View_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_0;
    UBasic_ScrollBarBox_C* Basic_ScrollBarBox;
    UVerticalBox* Header;
    UTextBlock* HealthInsuranceEvaluation;
    UTextBlock* PlayerName;
    UVerticalBox* StatsParent;
    UVerticalBox* VerticalBox_3;
    TArray<UUI_InfirmaryStats_Item_C*> MissionStatLines;
    TArray<UMissionStat*> StoreModeStats;
    UUI_InfirmaryStats_Item_C* SelectedLine;
    bool StoreMode;
    float StoreModePause;
    TArray<UTexture2D*> CategoryIcons;
    TArray<UTexture2D*> CategoryFilter;
    AFSDPlayerController* OwningPlayer;
    bool StopStoreMode;
    AFSDPlayerState* OwningState;
    bool Debug;

    void SortStats(TArray<UMissionStat*>& InStats, TArray<UTexture2D*>& Categories, TArray<UMissionStat*>& Sorted Stats, UMissionStat* CurrentStat, UTexture2D* CurrentCategory, TArray<UTexture2D*> OutCategories, TArray<UMissionStat*> OutStats, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, UMissionStat* CallFunc_Array_Get_Item, UTexture2D* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, UMissionStat* CallFunc_Array_Get_Item_2, UTexture2D* CallFunc_GetIcon_ReturnValue, UTexture2D* CallFunc_GetIcon_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2);
    void GetMissionStats(TArray<UMissionStat*>& Assets, TArray<UMissionStat*> AllStats, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, TArray<UMissionStat*>& CallFunc_GetAllInfirmaryStats_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UMissionStat* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
    void Store Mode(int32 Index);
    void Set Selected Item(UUI_InfirmaryStats_Item_C* SelectedLine);
    void SetStatsOwner(UFSDPlayerState* Player State);
    void ChangeName(FString NewName);
    void ReBuild();
    void ExecuteUbergraph_UI_DeathStats_View(int32 EntryPoint, FText Temp_text_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue_1, FText Temp_text_Variable_1, bool CallFunc_IsValid_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FText Temp_text_Variable_2, int32 K2Node_CustomEvent_Index, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, FText Temp_text_Variable_3, UUI_InfirmaryStats_Item_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_3, UUI_InfirmaryStats_Item_C* K2Node_CustomEvent_SelectedLine, FText Temp_text_Variable_4, FText Temp_text_Variable_5, TArray<UMissionStat*>& CallFunc_GetMissionStats_Assets, int32 Temp_int_Variable, TArray<UTexture2D*>& CallFunc_SortStats_Categories, TArray<UMissionStat*>& CallFunc_SortStats_Sorted_Stats, UFSDPlayerState* K2Node_CustomEvent_Player_State, UMissionStat* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, FString K2Node_CustomEvent_NewName, FText CallFunc_Conv_StringToText_ReturnValue, PlayerNameChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UUI_InfirmaryStats_Item_C* CallFunc_Create_ReturnValue, FString CallFunc_GetPlayerName_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, UBP_PlayerState_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_State_Space_Rig, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetHealthInsuranceStatus_HealthInsuranceStatus, FText K2Node_Select_Default);
}

#endif
