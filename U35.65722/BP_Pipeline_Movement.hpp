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
    void ExecuteUbergraph_BP_Pipeline_Movement(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Pipeline_Segment_C* K2Node_DynamicCast_AsBP_Pipeline_Segment, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetSplineLength_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class USplineComponent* CallFunc_GetComponentByClass_ReturnValue);
};

#endif
