// AnimBlueprintGeneratedClass APB_BarnacleAnim.APB_BarnacleAnim_C
// Size: 0x4f9 (Inherited: 0x270)
struct UAPB_BarnacleAnim_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2a8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2d0(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x2f8(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x370(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3a0(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x418(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x448(0xb0)
	bool attacking; // 0x4f8(0x01)

	void AnimGraph(FPoseLink AnimGraph);
	void ExecuteUbergraph_APB_BarnacleAnim(int32_t EntryPoint);
};

