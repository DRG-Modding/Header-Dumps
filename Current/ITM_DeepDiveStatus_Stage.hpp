#ifndef UE4SS_SDK_ITM_DeepDiveStatus_Stage_HPP
#define UE4SS_SDK_ITM_DeepDiveStatus_Stage_HPP

class UITM_DeepDiveStatus_Stage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimHighlight;
    class UWidgetAnimation* AnimReveal;
    class UImage* BackgroundImage;
    class UTextBlock* DATA_ObjectiveText;
    class UTextBlock* DATA_StatusText;
    class UITM_DeepDive_ObjectiveIcon_C* ITM_DeepDive_StageIcon;
    class UITM_MatrixCore_C* ITM_DeepDive_StageRewardIcon;
    class UWidgetSwitcher* MissionTextSwitcher;
    class UHorizontalBox* MutatorWarningBox;
    int32 stageIndex;
    FITM_DeepDiveStatus_Stage_COnRevealed OnRevealed;
    void OnRevealed(class UITM_DeepDiveStatus_Stage_C* StageWidget);

    void SetMutators(const class UGeneratedMission* mission);
    void ShowMission(class UDeepDive* InDeepDive, int32 InCurrentStage);
    void ShowNoData();
    void GetObjectiveDescription(TSubclassOf<class UObjective> InClass, float missionLength, FText& MissionDescription);
    void ShowCurrentState();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnRevealFinished();
    void Reveal(float StartDelay);
    void ExecuteUbergraph_ITM_DeepDiveStatus_Stage(int32 EntryPoint);
    void OnRevealed__DelegateSignature(class UITM_DeepDiveStatus_Stage_C* StageWidget);
};

#endif
