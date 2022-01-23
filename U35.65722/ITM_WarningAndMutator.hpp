#ifndef UE4SS_SDK_ITM_WarningAndMutator_HPP
#define UE4SS_SDK_ITM_WarningAndMutator_HPP

class UITM_WarningAndMutator_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_EscapeMenu_MissionModifier_C* ITM_EscapeMenu_Mutator;
    class UITM_EscapeMenu_MissionModifier_C* ITM_EscapeMenu_Warning;
    class UUniformGridPanel* UniformGridPanel_Holder;
    FITM_WarningAndMutator_CWarningClicked WarningClicked;
    void WarningClicked();
    FITM_WarningAndMutator_CMutatorClicked MutatorClicked;
    void MutatorClicked();

    void Update(class UGeneratedMission* mission);
    void OnClicked_Even_Warning();
    void CustomEvent_Mutator();
    void ExecuteUbergraph_ITM_WarningAndMutator(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, class UGeneratedMission* K2Node_CustomEvent_Mission, int32 CallFunc_Array_Length_ReturnValue, TArray<class UMissionMutator*>& K2Node_MakeArray_Array, class UMissionMutator* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UITM_EscapeMenu_MissionModifier_C* CallFunc_Create_ReturnValue, class UITM_EscapeMenu_MissionModifier_C* CallFunc_Create_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class UMissionWarning* CallFunc_Array_Get_Item_1, FExecuteUbergraph_ITM_WarningAndMutatorK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_ITM_WarningAndMutatorK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue_1);
    void MutatorClicked__DelegateSignature();
    void WarningClicked__DelegateSignature();
};

#endif
