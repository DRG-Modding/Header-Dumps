// AnimBlueprintGeneratedClass ABP_MainFacility.ABP_MainFacility_C
// Size: 0x571 (Inherited: 0x270)
struct UABP_MainFacility_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2a8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2d0(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x2f8(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x370(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3a0(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x418(0x30)
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x448(0x48)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x490(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x4c0(0xb0)
	bool IsOpen; // 0x570(0x01)

	void AnimGraph(FPoseLink AnimGraph);
	void SetOpen(bool Open);
	void AnimNotify_VauleOpened();
	void ExecuteUbergraph_ABP_MainFacility(int32_t EntryPoint);
};
