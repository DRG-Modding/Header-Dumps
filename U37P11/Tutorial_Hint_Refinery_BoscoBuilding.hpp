#ifndef UE4SS_SDK_Tutorial_Hint_Refinery_BoscoBuilding_HPP
#define UE4SS_SDK_Tutorial_Hint_Refinery_BoscoBuilding_HPP

class UTutorial_Hint_Refinery_BoscoBuilding_C : public UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    TSubclassOf<class UObjective> Target Objective;
    int32 NumPipeSegmentsBeforeShowingHint;

    void ReceiveOnInitialized();
    void OnBoscoChanged(class ABosco* Bosco);
    void PipelineSegmentPlaced(class APipelineSegment* InSegment);
    void ExecuteUbergraph_Tutorial_Hint_Refinery_BoscoBuilding(int32 EntryPoint);
};

#endif
