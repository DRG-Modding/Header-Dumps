#ifndef UE4SS_SDK_UI_Facility_Objective_PowerStation_HPP
#define UE4SS_SDK_UI_Facility_Objective_PowerStation_HPP

class UUI_Facility_Objective_PowerStation_C : public UOptionalObjectiveWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimArrows;
    class UWidgetAnimation* AnimHackingStopped;
    class UCanvasPanel* Canvas_HackingPod;
    class UCanvasPanel* Canvas_Root;
    class UUI_ImageTinted_C* Img_Arrow_Left;
    class UUI_ImageTinted_C* Img_Arrow_Right;
    class UUI_ImageTinted_C* Img_Cable;
    class UUI_ImageTinted_C* Img_CableOutline;
    class UUI_ImageTinted_C* Img_HackingPod;
    class UUI_ImageTinted_C* Img_HackingPod_Outline;
    class UUI_ImageTinted_C* Img_PowerStation;
    class UUI_ImageTinted_C* Img_PowerStation_Outline;
    int32 PowerStationIndex;
    bool destroyed;
    class UTexture2D* StationWorking;
    class UTexture2D* StationWorkingOutline;
    class UTexture2D* StationDestroyed;
    class UTexture2D* StationDestroyedOutline;
    class UTexture2D* Cable;
    class UTexture2D* CableOutline;
    bool Connected;
    bool HasBeenConnected;
    bool HackingPodCalled;
    class UFacilityObjective* FacilityObjective;
    class ABP_Facility_PowerStation_GeneratorBase_C* Generator;
    class UTexture2D* HackingPod;
    class UTexture2D* HackingPodOutline;

    void Set Data(bool InDestroyed, bool InConnected, bool InHasBeenConnected, bool InHackingPodCalled);
    void TryGetGenerator();
    void Refresh();
    void PreConstruct(bool IsDesignTime);
    void SetObjective(class UObjective* obj);
    void SetGenerator(class ABP_Facility_PowerStation_GeneratorBase_C* InGenerator);
    void PowerChanged_Event(bool hasPower);
    void OnShieldGeneratorCharged(class ABP_Facility_PowerStation_GeneratorBase_C* Generator);
    void Construct();
    void OnOverChargerCalled(bool CanUse);
    void PowerChanged_Event_0(bool hasPower);
    void ExecuteUbergraph_UI_Facility_Objective_PowerStation(int32 EntryPoint);
};

#endif
