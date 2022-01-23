#ifndef UE4SS_SDK_HUD_MutatorsAndWarnings_3_HPP
#define UE4SS_SDK_HUD_MutatorsAndWarnings_3_HPP

class UHUD_MutatorsAndWarnings_3_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single;
    class UInvalidationBox* InvalidationBox_0;
    class UITM_MutatorsAndWarnings_Entry1_C* MutatorBP;
    class UVerticalBox* VerticalBox_MutatorsAndWarnings;
    class UITM_MutatorsAndWarnings_Entry1_C* WarningBP;
    bool WasÏtemsAdded;

    void Construct();
    void ExecuteUbergraph_HUD_MutatorsAndWarnings_3(int32 EntryPoint, TArray<class UMissionMutator*>& K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UGeneratedMission* CallFunc_GetGeneratedMission_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMissionWarning* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class UMissionMutator*>& K2Node_MakeArray_Array_1, class UITM_MutatorsAndWarnings_Entry1_C* CallFunc_Create_ReturnValue, class UITM_MutatorsAndWarnings_Entry1_C* CallFunc_Create_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_Variable, TArray<class UMissionMutator*>& K2Node_Select_Default, FMargin K2Node_MakeStruct_Margin, class UMissionMutator* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
};

#endif
