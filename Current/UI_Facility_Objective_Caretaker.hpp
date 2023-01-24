#ifndef UE4SS_SDK_UI_Facility_Objective_Caretaker_HPP
#define UE4SS_SDK_UI_Facility_Objective_Caretaker_HPP

class UUI_Facility_Objective_Caretaker_C : public UOptionalObjectiveWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UUI_ImageTinted_C* Img_Caretaker_Outline;
    class UUI_ImageTinted_C* Img_Caretaker_Solid;
    class UUI_ImageTinted_C* Img_Shield;
    bool ShieldOn;
    bool CaretakerDestroyed;
    class ABP_MainFacility_DataVault_C* mainFacility;
    class UFacilityObjective* Objective;

    void GetCaretakerIsAlive(bool& IsAlive);
    void TryFindMainFacility();
    void Refresh();
    void PreConstruct(bool IsDesignTime);
    void SetObjective(class UObjective* obj);
    void OnObjectiveUpdated(class UObjective* Objective);
    void SetMainFacility(class ABP_MainFacility_DataVault_C* InMainFacility);
    void FacilityActivated();
    void ExecuteUbergraph_UI_Facility_Objective_Caretaker(int32 EntryPoint);
};

#endif
