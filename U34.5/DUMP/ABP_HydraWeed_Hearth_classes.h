// AnimBlueprintGeneratedClass ABP_HydraWeed_Hearth.ABP_HydraWeed_Hearth_C
// Size: 0x822 (Inherited: 0x270)
struct UABP_HydraWeed_Hearth_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x2a8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x2d0(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2f8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x320(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x348(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x3c0(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x3f0(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x468(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x498(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x510(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x540(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x5b8(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x5e8(0xb0)
	FAnimNode_Slot AnimGraphNode_Slot; // 0x698(0x48)
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x6e0(0xc8)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x7a8(0x78)
	bool IsOpen; // 0x820(0x01)
	bool IsDormant; // 0x821(0x01)

	void AnimGraph(FPoseLink AnimGraph);
	void BlueprintBeginPlay();
	void OnOpenChanged_Event_1(bool IsOpen);
	void OnDormantChanged_Event_1(bool IsDormant);
	void ExecuteUbergraph_ABP_HydraWeed_Hearth(int32_t EntryPoint);
};

