// AnimBlueprintGeneratedClass ABP_Mulebay.ABP_Mulebay_C
// Size: 0x33c (Inherited: 0x270)
struct UABP_Mulebay_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x2a8(0x48)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x2f0(0x48)
	bool IsOpen; // 0x338(0x01)
	bool IsOpening; // 0x339(0x01)
	bool IsClosing; // 0x33a(0x01)
	bool IsClosed; // 0x33b(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_Mulebay.ABP_Mulebay_C.AnimGraph
	void ExecuteUbergraph_ABP_Mulebay(int32_t EntryPoint); // Function ABP_Mulebay.ABP_Mulebay_C.ExecuteUbergraph_ABP_Mulebay
};

