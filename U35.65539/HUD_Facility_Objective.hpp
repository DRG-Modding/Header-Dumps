#ifndef UE4SS_SDK_HUD_Facility_Objective_HPP
#define UE4SS_SDK_HUD_Facility_Objective_HPP

class UHUD_Facility_Objective_C : UOptionalObjectiveWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UUI_ImageTinted_C* Background;
    UUI_Facility_Objective_Caretaker_C* Caretaker;
    UUI_Facility_Objective_PowerStation_C* PowerStation_Left;
    UUI_Facility_Objective_PowerStation_C* PowerStation_Right;
    UOverlay* RootOverlay;
    UUI_Facility_Objective_ShieldEmitter_C* ShieldEmitter;
    UFacilityObjective* Objective;

    void SetObjective(UObjective* obj);
    void ExecuteUbergraph_HUD_Facility_Objective(int32 EntryPoint, TArray<UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, UWidget* CallFunc_Array_Get_Item, UOptionalObjectiveWidget* K2Node_DynamicCast_AsOptional_Objective_Widget, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UObjective* K2Node_Event_obj, UFacilityObjective* K2Node_DynamicCast_AsFacility_Objective, bool K2Node_DynamicCast_bSuccess_1);
}

#endif
