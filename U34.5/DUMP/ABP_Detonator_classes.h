// AnimBlueprintGeneratedClass ABP_Detonator.ABP_Detonator_C
// Size: 0x421 (Inherited: 0x270)
struct UABP_Detonator_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2a8(0x48)
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0x2f0(0x48)
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x338(0xa0)
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x3d8(0x48)
	bool IsOpen; // 0x420(0x01)

	void AnimGraph(FPoseLink AnimGraph);
	void ExecuteUbergraph_ABP_Detonator(int32_t EntryPoint);
};

