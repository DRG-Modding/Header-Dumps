// AnimBlueprintGeneratedClass APB_Uplink.APB_Uplink_C
// Size: 0x59e (Inherited: 0x270)
struct UAPB_Uplink_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x2a8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2d0(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2f8(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x320(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x398(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3c8(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x440(0x30)
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x470(0x48)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4b8(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x4e8(0xb0)
	float UplinkProgress; // 0x598(0x04)
	bool IsUplinking; // 0x59c(0x01)
	bool Uplinked; // 0x59d(0x01)

	void AnimGraph(FPoseLink AnimGraph);
	void SetProgress(float Progress);
	void ExecuteUbergraph_APB_Uplink(int32_t EntryPoint);
};

