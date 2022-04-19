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
    void ExecuteUbergraph_HUD_Facility_Objective(int32 EntryPoint);
};

#endif
