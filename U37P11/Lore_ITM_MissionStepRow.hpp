#ifndef UE4SS_SDK_Lore_ITM_MissionStepRow_HPP
#define UE4SS_SDK_Lore_ITM_MissionStepRow_HPP

class ULore_ITM_MissionStepRow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Arrow_1;
    class UImage* Arrow_2;
    class ULore_ITM_MissionStep_C* Lore_ITM_MissionStep1;
    class ULore_ITM_MissionStep_C* Lore_ITM_MissionStep2;
    class ULore_ITM_MissionStep_C* Lore_ITM_MissionStep3;
    int32 CurrIdx;
    FLore_ITM_MissionStepRow_COnStepHovered OnStepHovered;
    void OnStepHovered(FMissionStepDescription step);
    FLore_ITM_MissionStepRow_COnStepUnhovered OnStepUnhovered;
    void OnStepUnhovered();

    void AddStep(FMissionStepDescription step, int32 StepNumber, int32 StepsInRow, class ULore_ITM_MissionStep_C*& StepWidget);
    void ClearRow();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Lore_ITM_MissionStepRow(int32 EntryPoint);
    void OnStepUnhovered__DelegateSignature();
    void OnStepHovered__DelegateSignature(FMissionStepDescription step);
};

#endif
