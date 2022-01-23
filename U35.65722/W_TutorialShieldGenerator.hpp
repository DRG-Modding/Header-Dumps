#ifndef UE4SS_SDK_W_TutorialShieldGenerator_HPP
#define UE4SS_SDK_W_TutorialShieldGenerator_HPP

class UW_TutorialShieldGenerator_C : public UW_TutorialContent_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Gold Mined;
    float GoldToMine;
    class AWPN_ShieldRegeneratorItem_C* ShieldItem;

    void OnShown();
    void UpdateTaskText();
    void Shield Used(int32 Amount);
    void ExecuteUbergraph_W_TutorialShieldGenerator(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool Temp_bool_IsClosed_Variable, FExecuteUbergraph_W_TutorialShieldGeneratorK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasCharacter_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const TArray<class AItem*>& CallFunc_GetAllItems_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AItem* CallFunc_Array_Get_Item, class AWPN_ShieldRegeneratorItem_C* K2Node_DynamicCast_AsWPN_Shield_Regenerator_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 K2Node_CustomEvent_Amount);
};

#endif
