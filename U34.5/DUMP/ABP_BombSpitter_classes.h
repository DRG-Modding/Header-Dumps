// AnimBlueprintGeneratedClass ABP_BombSpitter.ABP_BombSpitter_C
// Size: 0x5ca (Inherited: 0x270)
struct UABP_BombSpitter_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x2a8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2d0(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2f8(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x320(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x398(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x3c8(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x440(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x470(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4e8(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x518(0xb0)
	bool Closed; // 0x5c8(0x01)
	bool ToOpen; // 0x5c9(0x01)

	void AnimGraph(FPoseLink AnimGraph);
	void BlueprintBeginPlay();
	void OnChangeState(bool Closed, bool Open);
	void ExecuteUbergraph_ABP_BombSpitter(int32_t EntryPoint);
};

