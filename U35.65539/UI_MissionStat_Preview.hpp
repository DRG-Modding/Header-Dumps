#ifndef UE4SS_SDK_UI_MissionStat_Preview_HPP
#define UE4SS_SDK_UI_MissionStat_Preview_HPP

class UUI_MissionStat_Preview_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UTextBlock* StatTitle;
    UVerticalBox* VerticalParent;
    UMissionStat* PreviewMissionStat;
    UMissionStat* MissionStat;
    TArray<UUI_MissionStat_PreviewItem_C*> BarWidgets;

    void Construct();
    void SetMissionStat(UMissionStat* MissionStat);
    void ExecuteUbergraph_UI_MissionStat_Preview(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UUI_MissionStat_PreviewItem_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable_1, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, UMissionStat* K2Node_CustomEvent_MissionStat, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, TArray<UPlayerCharacterID*>& CallFunc_GetPlayableCharacterIDs_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, UPlayerCharacterID* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, UUI_MissionStat_PreviewItem_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
}

#endif
