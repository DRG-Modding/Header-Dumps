// AnimBlueprintGeneratedClass ABP_BombSpitter.ABP_BombSpitter_C
// Size: 0x5ca (Inherited: 0x270)
struct UABP_BombSpitter_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x2a8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2d0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2f8(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x320(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x398(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x3c8(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x440(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x470(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4e8(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x518(0xb0)
	bool Closed; // 0x5c8(0x01)
	bool ToOpen; // 0x5c9(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_BombSpitter.ABP_BombSpitter_C.AnimGraph
	void BlueprintBeginPlay(); // Function ABP_BombSpitter.ABP_BombSpitter_C.BlueprintBeginPlay
	void OnChangeState(bool Closed, bool Open); // Function ABP_BombSpitter.ABP_BombSpitter_C.OnChangeState
	void ExecuteUbergraph_ABP_BombSpitter(int32_t EntryPoint); // Function ABP_BombSpitter.ABP_BombSpitter_C.ExecuteUbergraph_ABP_BombSpitter
};

