#ifndef UE4SS_SDK_LCD_MissionReadout_Data_HPP
#define UE4SS_SDK_LCD_MissionReadout_Data_HPP

class ULCD_MissionReadout_Data_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* DATA_MissionName;
    UTextBlock* DATA_MissionType;
    UHorizontalBox* HorizontalBox_Anomalies;
    UHorizontalBox* HorizontalBox_Warnings;
    UITM_MisDesMutator_C* ITM_MisDesMutator;
    UITM_MisDesMutator_C* ITM_MisDesMutator_1;
    UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic;
    UUI_MissionReadOut_Base_C* UI_MissionReadOut_Base;

    void SetGeneratedMission(UGeneratedMission* In Mission, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, UITM_MisDesMutator_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<UMissionMutator*>& Temp_object_Variable, bool Temp_bool_Variable, UITM_MisDesMutator_C* CallFunc_Create_ReturnValue_1, UPanelSlot* CallFunc_AddChild_ReturnValue, UPanelSlot* CallFunc_AddChild_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, UMissionWarning* CallFunc_Array_Get_Item, TArray<UMissionMutator*>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<UMissionMutator*>& K2Node_Select_Default, UMissionMutator* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
    void BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature(UGeneratedMission* InMission);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_LCD_MissionReadout_Data(int32 EntryPoint, bool K2Node_Event_IsDesignTime, UGeneratedMission* K2Node_ComponentBoundEvent_InMission);
}

#endif
