#ifndef UE4SS_SDK_ITM_MissionBar_Objective_HPP
#define UE4SS_SDK_ITM_MissionBar_Objective_HPP

class UITM_MissionBar_Objective_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ResourceIcon_C* Basic_ResourceIcon;
    class UTextBlock* DATA_Amount;
    class UHUD_DefaultLabel_C* DATA_Objective;
    bool SecondaryObjective;
    FText ObjectiveText;

    void SetObjective(class UGeneratedMission* mission, TSubclassOf<class UObjective> ObjectiveType);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_MissionBar_Objective(int32 EntryPoint);
};

#endif
