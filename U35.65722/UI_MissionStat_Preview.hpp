#ifndef UE4SS_SDK_UI_MissionStat_Preview_HPP
#define UE4SS_SDK_UI_MissionStat_Preview_HPP

class UUI_MissionStat_Preview_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UTextBlock* StatTitle;
    class UVerticalBox* VerticalParent;
    class UMissionStat* PreviewMissionStat;
    class UMissionStat* MissionStat;
    TArray<class UUI_MissionStat_PreviewItem_C*> BarWidgets;

    void Construct();
    void SetMissionStat(class UMissionStat* MissionStat);
    void ExecuteUbergraph_UI_MissionStat_Preview(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_MissionStat_PreviewItem_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UMissionStat* K2Node_CustomEvent_MissionStat, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, TArray<class UPlayerCharacterID*>& CallFunc_GetPlayableCharacterIDs_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, class UPlayerCharacterID* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class UUI_MissionStat_PreviewItem_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
};

#endif
