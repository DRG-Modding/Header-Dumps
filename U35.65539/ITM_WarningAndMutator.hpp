#ifndef UE4SS_SDK_ITM_WarningAndMutator_HPP
#define UE4SS_SDK_ITM_WarningAndMutator_HPP

class UITM_WarningAndMutator_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UITM_EscapeMenu_MissionModifier_C* ITM_EscapeMenu_Mutator;
    UITM_EscapeMenu_MissionModifier_C* ITM_EscapeMenu_Warning;
    UUniformGridPanel* UniformGridPanel_Holder;
    FITM_WarningAndMutator_CWarningClicked WarningClicked;
    void WarningClicked();
    FITM_WarningAndMutator_CMutatorClicked MutatorClicked;
    void MutatorClicked();

    void Update(UGeneratedMission* mission);
    void OnClicked_Even_Warning();
    void CustomEvent_Mutator();
    void ExecuteUbergraph_ITM_WarningAndMutator(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, UGeneratedMission* K2Node_CustomEvent_Mission, int32 CallFunc_Array_Length_ReturnValue, TArray<UMissionMutator*>& K2Node_MakeArray_Array, UMissionMutator* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, UITM_EscapeMenu_MissionModifier_C* CallFunc_Create_ReturnValue, UITM_EscapeMenu_MissionModifier_C* CallFunc_Create_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, UMissionWarning* CallFunc_Array_Get_Item_1, OnClicked__DelegateSignature K2Node_CreateDelegate_OutputDelegate, OnClicked__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue_1);
    void MutatorClicked__DelegateSignature();
    void WarningClicked__DelegateSignature();
}

#endif
