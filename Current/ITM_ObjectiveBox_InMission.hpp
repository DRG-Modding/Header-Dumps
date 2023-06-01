#ifndef UE4SS_SDK_ITM_ObjectiveBox_InMission_HPP
#define UE4SS_SDK_ITM_ObjectiveBox_InMission_HPP

class UITM_ObjectiveBox_InMission_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* CounterIcon;
    class UHUD_DefaultLabel_C* CounterText;
    class UHUD_DefaultLabel_C* ObjectiveText;
    class UObjective* Objective;
    bool Primary;

    void UpdateText(const FText& InText, FText InCounterText, class UTexture2D* InCounterIcon, bool Completed);
    void Set Objective(class UObjective* Objective, bool IsPrimary);
    void OnObjectiveUpdated(class UObjective* Objective);
    void SetCustom(FText Text, bool Completed);
    void ExecuteUbergraph_ITM_ObjectiveBox_InMission(int32 EntryPoint);
};

#endif
