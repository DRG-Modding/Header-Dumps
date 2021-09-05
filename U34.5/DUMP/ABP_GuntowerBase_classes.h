// AnimBlueprintGeneratedClass ABP_GuntowerBase.ABP_GuntowerBase_C
// Size: 0x5a0 (Inherited: 0x270)
struct UABP_GuntowerBase_C : UGameEventAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2a8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2d0(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x2f8(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x370(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x3a0(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x418(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x448(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4c0(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x4f0(0xb0)

	void AnimGraph(FPoseLink AnimGraph);
	void ExecuteUbergraph_ABP_GuntowerBase(int32_t EntryPoint);
};

