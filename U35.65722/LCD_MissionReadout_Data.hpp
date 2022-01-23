#ifndef UE4SS_SDK_LCD_MissionReadout_Data_HPP
#define UE4SS_SDK_LCD_MissionReadout_Data_HPP

class ULCD_MissionReadout_Data_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* DATA_MissionName;
    class UTextBlock* DATA_MissionType;
    class UHorizontalBox* HorizontalBox_Anomalies;
    class UHorizontalBox* HorizontalBox_Warnings;
    class UITM_MisDesMutator_C* ITM_MisDesMutator;
    class UITM_MisDesMutator_C* ITM_MisDesMutator_1;
    class UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic;
    class UUI_MissionReadOut_Base_C* UI_MissionReadOut_Base;

    void SetGeneratedMission(class UGeneratedMission* In Mission, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UITM_MisDesMutator_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class UMissionMutator*>& Temp_object_Variable, bool Temp_bool_Variable, class UITM_MisDesMutator_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UMissionWarning* CallFunc_Array_Get_Item, TArray<class UMissionMutator*>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UMissionMutator*>& K2Node_Select_Default, class UMissionMutator* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
    void BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature(class UGeneratedMission* InMission);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_LCD_MissionReadout_Data(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UGeneratedMission* K2Node_ComponentBoundEvent_InMission);
};

#endif
