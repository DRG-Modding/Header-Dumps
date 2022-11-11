#ifndef UE4SS_SDK_BP_Pipeline_Movement_HPP
#define UE4SS_SDK_BP_Pipeline_Movement_HPP

class UBP_Pipeline_Movement_C : public UTrackBuilderMovement
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USplineComponent* MovementSpline;
    float SplineLength;
    float VerticalOffset;
    class ABP_Pipeline_Segment_C* PipelineSegment;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Pipeline_Movement(int32 EntryPoint);
};

#endif
