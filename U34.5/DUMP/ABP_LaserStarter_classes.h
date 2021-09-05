// AnimBlueprintGeneratedClass ABP_LaserStarter.ABP_LaserStarter_C
// Size: 0x740 (Inherited: 0x270)
struct UABP_LaserStarter_C : UEventStarterAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x2a8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x2d0(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2f8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x320(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x348(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x3c0(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x3f0(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x468(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x498(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x510(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x540(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x5b8(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x5e8(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x660(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x690(0xb0)

	void AnimGraph(FPoseLink AnimGraph);
	void ExecuteUbergraph_ABP_LaserStarter(int32_t EntryPoint);
};

