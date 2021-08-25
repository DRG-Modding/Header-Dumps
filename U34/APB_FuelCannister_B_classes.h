// AnimBlueprintGeneratedClass APB_FuelCannister_B.APB_FuelCannister_B_C
// Size: 0x6e8 (Inherited: 0x270)
struct UAPB_FuelCannister_B_C : UFuelCannisterItemAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x2a8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x2d0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x370(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x398(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x410(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x440(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x4b8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x4e8(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x560(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x590(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x608(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x638(0xb0)

	void AnimGraph(struct FPoseLink AnimGraph); // Function APB_FuelCannister_B.APB_FuelCannister_B_C.AnimGraph
	void ExecuteUbergraph_APB_FuelCannister_B(int32_t EntryPoint); // Function APB_FuelCannister_B.APB_FuelCannister_B_C.ExecuteUbergraph_APB_FuelCannister_B
};

