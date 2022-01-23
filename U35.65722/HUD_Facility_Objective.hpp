#ifndef UE4SS_SDK_HUD_Facility_Objective_HPP
#define UE4SS_SDK_HUD_Facility_Objective_HPP

class UHUD_Facility_Objective_C : public UOptionalObjectiveWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UUI_ImageTinted_C* Background;
    class UUI_Facility_Objective_Caretaker_C* Caretaker;
    class UUI_Facility_Objective_PowerStation_C* PowerStation_Left;
    class UUI_Facility_Objective_PowerStation_C* PowerStation_Right;
    class UOverlay* RootOverlay;
    class UUI_Facility_Objective_ShieldEmitter_C* ShieldEmitter;
    class UFacilityObjective* Objective;

    void SetObjective(class UObjective* obj);
    void ExecuteUbergraph_HUD_Facility_Objective(int32 EntryPoint, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UOptionalObjectiveWidget* K2Node_DynamicCast_AsOptional_Objective_Widget, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UObjective* K2Node_Event_obj, class UFacilityObjective* K2Node_DynamicCast_AsFacility_Objective, bool K2Node_DynamicCast_bSuccess_1);
};

#endif
