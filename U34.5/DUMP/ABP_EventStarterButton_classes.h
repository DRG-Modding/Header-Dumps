// AnimBlueprintGeneratedClass ABP_EventStarterButton.ABP_EventStarterButton_C
// Size: 0x6e8 (Inherited: 0x270)
struct UABP_EventStarterButton_C : UEventStarterAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x2a8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x2d0(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x2f8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x320(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x348(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x370(0x28)
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x398(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x3c8(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x440(0x30)
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x470(0x48)
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x4b8(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x4e8(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x560(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x590(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x608(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x638(0xb0)

	void AnimGraph(FPoseLink AnimGraph);
	void ExecuteUbergraph_ABP_EventStarterButton(int32_t EntryPoint);
};

