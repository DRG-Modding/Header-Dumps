// AnimBlueprintGeneratedClass ABP_BarrelDispenser.ABP_BarrelDispenser_C
// Size: 0x710 (Inherited: 0x270)
struct UABP_BarrelDispenser_C : UItemDispenserAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x2a8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x2d0(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x2f8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x320(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x348(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x370(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x398(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x3c0(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x438(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x468(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x4e0(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x510(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x588(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x5b8(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x630(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x660(0xb0)

	void AnimGraph(FPoseLink AnimGraph);
	void ExecuteUbergraph_ABP_BarrelDispenser(int32_t EntryPoint);
};

