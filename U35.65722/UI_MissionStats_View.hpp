#ifndef UE4SS_SDK_UI_MissionStats_View_HPP
#define UE4SS_SDK_UI_MissionStats_View_HPP

class UUI_MissionStats_View_C : public UUI_KPI_Tab_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_ScrollBarBox_C* Basic_ScrollBarBox;
    class UVerticalBox* Header;
    class UUI_MissionStat_Preview_C* MissionStat_Preview;
    class UVerticalBox* StatsParent;
    class UUI_MissionStats_Categories_C* UI_MissionStats_Categories;
    TArray<class UUI_MissionStats_Item_C*> MissionStatLines;
    TArray<class UMissionStat*> StoreModeStats;
    class UUI_MissionStats_Item_C* SelectedLine;
    bool StoreMode;
    float StoreModePause;
    TArray<class UTexture2D*> CategoryIcons;
    TArray<class UTexture2D*> CategoryFilter;
    FTimerHandle StoreModeTimer;

    void NextStoreMode(int32 NextIndex, FNextStoreModeK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, class UUI_MissionStats_Item_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue);
    void SortStats(TArray<class UMissionStat*>& InStats, TArray<class UTexture2D*>& Categories, TArray<class UMissionStat*>& Sorted Stats, class UMissionStat* CurrentStat, class UTexture2D* CurrentCategory, TArray<class UTexture2D*> OutCategories, TArray<class UMissionStat*> OutStats, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, class UMissionStat* CallFunc_Array_Get_Item, class UTexture2D* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, class UMissionStat* CallFunc_Array_Get_Item_2, class UTexture2D* CallFunc_GetIcon_ReturnValue, class UTexture2D* CallFunc_GetIcon_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2);
    void GetMissionStats(TArray<class UMissionStat*>& Assets, TArray<class UMissionStat*> AllStats, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue, TArray<class UMissionStat*>& CallFunc_GetAllMissionStats_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UMissionStat* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Set Selected Item(class UUI_MissionStats_Item_C* SelectedLine);
    void OnHoverBegin_Event(class UUI_MissionStats_Item_C* Sender);
    void OnHoverEnd_Event(class UUI_MissionStats_Item_C* Sender);
    void Setup Category Selection();
    void OnCategorySelectionChanged();
    void ExecuteUbergraph_UI_MissionStats_View(int32 EntryPoint, FExecuteUbergraph_UI_MissionStats_ViewK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, FExecuteUbergraph_UI_MissionStats_ViewK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_MissionStats_Item_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, FExecuteUbergraph_UI_MissionStats_ViewK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, int32 CallFunc_Array_AddUnique_ReturnValue, class UUI_MissionStats_Item_C* K2Node_CustomEvent_SelectedLine, FExecuteUbergraph_UI_MissionStats_ViewK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue, class UMissionStat* CallFunc_GetMissionStat_Mission_Stat, class UUI_MissionStats_Item_C* K2Node_CustomEvent_Sender_1, class UUI_MissionStats_Item_C* K2Node_CustomEvent_Sender, bool CallFunc_IsValid_ReturnValue_1, TArray<class UMissionStat*>& CallFunc_GetMissionStats_Assets, TArray<class UTexture2D*>& CallFunc_SortStats_Categories, TArray<class UMissionStat*>& CallFunc_SortStats_Sorted_Stats, class UMissionStat* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UUI_MissionStats_Item_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<class UTexture2D*>& CallFunc_GetCategorySelection_Selection, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue);
};

#endif
