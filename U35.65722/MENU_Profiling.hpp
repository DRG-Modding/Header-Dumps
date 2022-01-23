#ifndef UE4SS_SDK_MENU_Profiling_HPP
#define UE4SS_SDK_MENU_Profiling_HPP

class UMENU_Profiling_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UScrollBox* ScrollBox_57;

    void Construct();
    void ExecuteUbergraph_MENU_Profiling(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UProfileEntry_C* CallFunc_Create_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UProfilingSubSystem* CallFunc_GetWorldSubsystem_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, float CallFunc_GetTotalTime_ReturnValue, TArray<FProfileCategoryTiming>& CallFunc_GetCategoryTimings_ReturnValue, FProfileCategoryTiming K2Node_MakeStruct_ProfileCategoryTiming, FProfileCategoryTiming CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const TArray<FProfileEntry>& CallFunc_GetEntries_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FProfileEntry CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UProfileCategoryEntry_C* CallFunc_Create_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class UProfileCategoryEntry_C* CallFunc_Create_ReturnValue_2, class UPanelSlot* CallFunc_AddChild_ReturnValue_2);
};

#endif
