#ifndef UE4SS_SDK_ITM_MissionBarDropPod_Objective_HPP
#define UE4SS_SDK_ITM_MissionBarDropPod_Objective_HPP

class UITM_MissionBarDropPod_Objective_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ResourceIcon_C* Basic_ResourceIcon;
    class UTextBlock* DATA_Amount;
    class UTextBlock* DATA_Objective;
    bool SecondaryObjective;
    FText ObjectiveText;
    int32 FontSize;

    void SetShowReward(bool Show);
    void SetObjective(class UGeneratedMission* mission, TSubclassOf<class UObjective> ObjectiveType);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_MissionBarDropPod_Objective(int32 EntryPoint);
};

#endif
