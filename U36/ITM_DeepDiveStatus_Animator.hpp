#ifndef UE4SS_SDK_ITM_DeepDiveStatus_Animator_HPP
#define UE4SS_SDK_ITM_DeepDiveStatus_Animator_HPP

class UITM_DeepDiveStatus_Animator_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* CompletedStage3;
    class UWidgetAnimation* CompletedStage2;
    class UWidgetAnimation* CompletedStage1;
    class UITM_DeepDive_StageIcon_C* IconStage1;
    class UITM_DeepDive_StageIcon_C* IconStage2;
    class UITM_DeepDive_StageIcon_C* IconStage3;
    class UBorder* VerticalBar;
    TArray<class UWidgetAnimation*> StageAnims;
    int32 NextStage;
    FITM_DeepDiveStatus_Animator_COnStageAnimationsFinished OnStageAnimationsFinished;
    void OnStageAnimationsFinished();
    int32 MissionsCompleted;

    void InitStageIcons();
    void PreConstruct(bool IsDesignTime);
    void FinishedAnimating();
    void SetActiveDeepDive();
    void Construct();
    void Play();
    void ExecuteUbergraph_ITM_DeepDiveStatus_Animator(int32 EntryPoint);
    void OnStageAnimationsFinished__DelegateSignature();
};

#endif
