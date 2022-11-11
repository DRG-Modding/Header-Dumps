#ifndef UE4SS_SDK_UI_Facility_Objective_ShieldEmitter_HPP
#define UE4SS_SDK_UI_Facility_Objective_ShieldEmitter_HPP

class UUI_Facility_Objective_ShieldEmitter_C : public UOptionalObjectiveWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimArrows;
    class UUI_ImageTinted_C* Img_Arrow_Left;
    class UUI_ImageTinted_C* Img_Arrow_Right;
    class UUI_ImageTinted_C* Img_ShieldEmitter;
    class UUI_ImageTinted_C* Img_ShieldEmitter_Outline;
    class UCanvasPanel* RootCanvas;
    class UFacilityObjective* Objective;
    class ABP_Mainfacility_ShieldEmitter_ForceFieldProjector_C* ShieldEmitter;

    void Refresh();
    void TryFindEmitter();
    void SetObjective(class UObjective* obj);
    void SetEmitter(class ABP_Mainfacility_ShieldEmitter_ForceFieldProjector_C* InEmitter);
    void OnLeftUsableChanged(bool CanUse);
    void Construct();
    void OnRightUsableChanged(bool CanUse);
    void OnObjectiveUpdated(class UObjective* Objective);
    void ExecuteUbergraph_UI_Facility_Objective_ShieldEmitter(int32 EntryPoint);
};

#endif
