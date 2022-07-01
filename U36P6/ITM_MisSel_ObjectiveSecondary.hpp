#ifndef UE4SS_SDK_ITM_MisSel_ObjectiveSecondary_HPP
#define UE4SS_SDK_ITM_MisSel_ObjectiveSecondary_HPP

class UITM_MisSel_ObjectiveSecondary_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* DataMissionReward;
    class UTextBlock* DATAMissionSecondaryObjective;
    class UImage* Image_0;

    void SetData(TSubclassOf<class UObjective> Objective, float missionLength, float HazardBonus);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_MisSel_ObjectiveSecondary(int32 EntryPoint);
};

#endif
