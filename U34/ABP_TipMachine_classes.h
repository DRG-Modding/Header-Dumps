// AnimBlueprintGeneratedClass ABP_TipMachine.ABP_TipMachine_C
// Size: 0x368 (Inherited: 0x270)
struct UABP_TipMachine_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2a8(0x78)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x320(0x48)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_TipMachine.ABP_TipMachine_C.AnimGraph
	void ExecuteUbergraph_ABP_TipMachine(int32_t EntryPoint); // Function ABP_TipMachine.ABP_TipMachine_C.ExecuteUbergraph_ABP_TipMachine
};

