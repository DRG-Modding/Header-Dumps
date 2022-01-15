#ifndef UE4SS_SDK_UI_Perks_Column_Unlocks_HPP
#define UE4SS_SDK_UI_Perks_Column_Unlocks_HPP

class UUI_Perks_Column_Unlocks_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UVerticalBox* ArrowBox;
    int32 ArrowCount;
    int32 UnlockedCount;
    TArray<UUI_Perks_Column_Unlocks_Arrow_C*> ArrowWidgets;

    void IsUnlocked(bool& Unlocked, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Set Arrow Count(int32 ArrowCount, int32 UnlockedCount);
    void Set Unlocked Count(int32 UnlockedCount);
    void ExecuteUbergraph_UI_Perks_Column_Unlocks(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, UUI_Perks_Column_Unlocks_Arrow_C* CallFunc_Create_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 K2Node_CustomEvent_ArrowCount, int32 K2Node_CustomEvent_UnlockedCount_1, int32 K2Node_CustomEvent_UnlockedCount, int32 CallFunc_Array_Length_ReturnValue, UUI_Perks_Column_Unlocks_Arrow_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue_2);
}

#endif
