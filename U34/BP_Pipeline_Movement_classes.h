// BlueprintGeneratedClass BP_Pipeline_Movement.BP_Pipeline_Movement_C
// Size: 0xd8 (Inherited: 0xb8)
struct UBP_Pipeline_Movement_C : UTrackBuilderMovement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb8(0x08)
	struct USplineComponent* MovementSpline; // 0xc0(0x08)
	float SplineLength; // 0xc8(0x04)
	float VerticalOffset; // 0xcc(0x04)
	struct ABP_Pipeline_Segment_C* PipelineSegment; // 0xd0(0x08)

	void ReceiveBeginPlay(); // Function BP_Pipeline_Movement.BP_Pipeline_Movement_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_Pipeline_Movement(int32_t EntryPoint); // Function BP_Pipeline_Movement.BP_Pipeline_Movement_C.ExecuteUbergraph_BP_Pipeline_Movement
};

