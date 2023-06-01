#ifndef UE4SS_SDK_UI_HackingTool_Progress_HPP
#define UE4SS_SDK_UI_HackingTool_Progress_HPP

class UUI_HackingTool_Progress_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* BulletsBox;
    int32 MaxStages;
    int32 CurrentStage;
    TArray<class UImage*> stages;
    TArray<class UImage*> Transitions;
    FUI_HackingTool_Progress_COnNextStage OnNextStage;
    void OnNextStage(int32 InNewStage, int32 InTotalStages);
    FVector2D BulletSize;
    FVector2D SeparatorSize;

    void Update(int32 InCurrent, int32 InMax);
    void GetMaxStages(int32& MaxStages);
    void GetCurrentStage(int32& CurrentStage);
    void NextStage();
    void SetCurrentStage(int32 InCurrentStage);
    void SetMaxStages(int32 MaxStages);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_HackingTool_Progress(int32 EntryPoint);
    void OnNextStage__DelegateSignature(int32 InNewStage, int32 InTotalStages);
};

#endif
