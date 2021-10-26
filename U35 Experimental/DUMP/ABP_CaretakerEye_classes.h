// AnimBlueprintGeneratedClass ABP_CaretakerEye.ABP_CaretakerEye_C
// Size: 0x590 (Inherited: 0x2c0)
struct UABP_CaretakerEye_C : UCaretakerEyeAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2f8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x320(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x348(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x3c0(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3f0(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x468(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x498(0xb0)
	FAnimNode_Slot AnimGraphNode_Slot; // 0x548(0x48)

	void AnimGraph(FPoseLink AnimGraph);
	void ExecuteUbergraph_ABP_CaretakerEye(int32_t EntryPoint);
};

