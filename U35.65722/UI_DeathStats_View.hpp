#ifndef UE4SS_SDK_UI_DeathStats_View_HPP
#define UE4SS_SDK_UI_DeathStats_View_HPP

class UUI_DeathStats_View_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_0;
    class UBasic_ScrollBarBox_C* Basic_ScrollBarBox;
    class UVerticalBox* Header;
    class UTextBlock* HealthInsuranceEvaluation;
    class UTextBlock* PlayerName;
    class UVerticalBox* StatsParent;
    class UVerticalBox* VerticalBox_3;
    TArray<class UUI_InfirmaryStats_Item_C*> MissionStatLines;
    TArray<class UMissionStat*> StoreModeStats;
    class UUI_InfirmaryStats_Item_C* SelectedLine;
    bool StoreMode;
    float StoreModePause;
    TArray<class UTexture2D*> CategoryIcons;
    TArray<class UTexture2D*> CategoryFilter;
    class AFSDPlayerController* OwningPlayer;
    bool StopStoreMode;
    class AFSDPlayerState* OwningState;
    bool Debug;

    void SortStats(TArray<class UMissionStat*>& InStats, TArray<class UTexture2D*>& Categories, TArray<class UMissionStat*>& Sorted Stats, class UMissionStat* CurrentStat, class UTexture2D* CurrentCategory, TArray<class UTexture2D*> OutCategories, TArray<class UMissionStat*> OutStats, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, class UMissionStat* CallFunc_Array_Get_Item, class UTexture2D* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, class UMissionStat* CallFunc_Array_Get_Item_2, class UTexture2D* CallFunc_GetIcon_ReturnValue, class UTexture2D* CallFunc_GetIcon_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2);
    void GetMissionStats(TArray<class UMissionStat*>& Assets, TArray<class UMissionStat*> AllStats, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue, TArray<class UMissionStat*>& CallFunc_GetAllInfirmaryStats_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UMissionStat* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
    void Store Mode(int32 Index);
    void Set Selected Item(class UUI_InfirmaryStats_Item_C* SelectedLine);
    void SetStatsOwner(class AFSDPlayerState* Player State);
    void ChangeName(FString NewName);
    void ReBuild();
    void ExecuteUbergraph_UI_DeathStats_View(int32 EntryPoint, FText Temp_text_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue_1, FText Temp_text_Variable_1, bool CallFunc_IsValid_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FText Temp_text_Variable_2, int32 K2Node_CustomEvent_Index, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, FText Temp_text_Variable_3, class UUI_InfirmaryStats_Item_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_3, class UUI_InfirmaryStats_Item_C* K2Node_CustomEvent_SelectedLine, FText Temp_text_Variable_4, FText Temp_text_Variable_5, TArray<class UMissionStat*>& CallFunc_GetMissionStats_Assets, int32 Temp_int_Variable, TArray<class UTexture2D*>& CallFunc_SortStats_Categories, TArray<class UMissionStat*>& CallFunc_SortStats_Sorted_Stats, class AFSDPlayerState* K2Node_CustomEvent_Player_State, class UMissionStat* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, FString K2Node_CustomEvent_NewName, FText CallFunc_Conv_StringToText_ReturnValue, FExecuteUbergraph_UI_DeathStats_ViewK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_InfirmaryStats_Item_C* CallFunc_Create_ReturnValue, FString CallFunc_GetPlayerName_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class ABP_PlayerState_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_State_Space_Rig, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetHealthInsuranceStatus_HealthInsuranceStatus, FText K2Node_Select_Default);
};

#endif
