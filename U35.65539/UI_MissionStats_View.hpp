#ifndef UE4SS_SDK_UI_MissionStats_View_HPP
#define UE4SS_SDK_UI_MissionStats_View_HPP

class UUI_MissionStats_View_C : UUI_KPI_Tab_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBasic_ScrollBarBox_C* Basic_ScrollBarBox;
    UVerticalBox* Header;
    UUI_MissionStat_Preview_C* MissionStat_Preview;
    UVerticalBox* StatsParent;
    UUI_MissionStats_Categories_C* UI_MissionStats_Categories;
    TArray<UUI_MissionStats_Item_C*> MissionStatLines;
    TArray<UMissionStat*> StoreModeStats;
    UUI_MissionStats_Item_C* SelectedLine;
    bool StoreMode;
    float StoreModePause;
    TArray<UTexture2D*> CategoryIcons;
    TArray<UTexture2D*> CategoryFilter;
    FTimerHandle StoreModeTimer;

    void NextStoreMode(int32 NextIndex, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, UUI_MissionStats_Item_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue);
    void SortStats(TArray<UMissionStat*>& InStats, TArray<UTexture2D*>& Categories, TArray<UMissionStat*>& Sorted Stats, UMissionStat* CurrentStat, UTexture2D* CurrentCategory, TArray<UTexture2D*> OutCategories, TArray<UMissionStat*> OutStats, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, UMissionStat* CallFunc_Array_Get_Item, UTexture2D* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, UMissionStat* CallFunc_Array_Get_Item_2, UTexture2D* CallFunc_GetIcon_ReturnValue, UTexture2D* CallFunc_GetIcon_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2);
    void GetMissionStats(TArray<UMissionStat*>& Assets, TArray<UMissionStat*> AllStats, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, TArray<UMissionStat*>& CallFunc_GetAllMissionStats_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UMissionStat* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Set Selected Item(UUI_MissionStats_Item_C* SelectedLine);
    void OnHoverBegin_Event(UUI_MissionStats_Item_C* Sender);
    void OnHoverEnd_Event(UUI_MissionStats_Item_C* Sender);
    void Setup Category Selection();
    void OnCategorySelectionChanged();
    void ExecuteUbergraph_UI_MissionStats_View(int32 EntryPoint, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, OnSelectedChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UUI_MissionStats_Item_C* CallFunc_Create_ReturnValue, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, OnHoverEnd__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, int32 CallFunc_Array_AddUnique_ReturnValue, UUI_MissionStats_Item_C* K2Node_CustomEvent_SelectedLine, OnHoverBegin__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue, UMissionStat* CallFunc_GetMissionStat_Mission_Stat, UUI_MissionStats_Item_C* K2Node_CustomEvent_Sender_1, UUI_MissionStats_Item_C* K2Node_CustomEvent_Sender, bool CallFunc_IsValid_ReturnValue_1, TArray<UMissionStat*>& CallFunc_GetMissionStats_Assets, TArray<UTexture2D*>& CallFunc_SortStats_Categories, TArray<UMissionStat*>& CallFunc_SortStats_Sorted_Stats, UMissionStat* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UUI_MissionStats_Item_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<UTexture2D*>& CallFunc_GetCategorySelection_Selection, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue);
}

#endif
