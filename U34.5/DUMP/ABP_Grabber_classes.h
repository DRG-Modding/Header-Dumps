// AnimBlueprintGeneratedClass ABP_Grabber.ABP_Grabber_C
// Size: 0x708 (Inherited: 0x2f0)
struct UABP_Grabber_C : UFlyingLifterAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x2f8(0x30)
	FAnimNode_Slot AnimGraphNode_Slot; // 0x328(0x48)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x370(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x398(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x3c0(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x3e8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x410(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x438(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x460(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x4d8(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x508(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x580(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x5b0(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x628(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x658(0xb0)

	void AnimGraph(FPoseLink AnimGraph);
	void SpawnIdleSound();
	void ExecuteUbergraph_ABP_Grabber(int32_t EntryPoint);
};

