// AnimBlueprintGeneratedClass ABP_Refinery_Depositor.ABP_Refinery_Depositor_C
// Size: 0x5f9 (Inherited: 0x270)
struct UABP_Refinery_Depositor_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x2a8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x2d0(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2f8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x320(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x348(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x3c0(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x3f0(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x468(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x498(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x510(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x540(0xb0)
	ABP_Refinery_Depositor_C* Depositor; // 0x5f0(0x08)
	bool DepositorOpen; // 0x5f8(0x01)

	void AnimGraph(FPoseLink AnimGraph);
	void BlueprintBeginPlay();
	void OnDepositorOpenChanged(bool InOpen);
	void ExecuteUbergraph_ABP_Refinery_Depositor(int32_t EntryPoint);
};

