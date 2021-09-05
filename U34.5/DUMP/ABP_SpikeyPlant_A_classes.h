// AnimBlueprintGeneratedClass ABP_SpikeyPlant_A.ABP_SpikeyPlant_A_C
// Size: 0x8aa (Inherited: 0x270)
struct UABP_SpikeyPlant_A_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x2a8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x2d0(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x2f8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x320(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x348(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x370(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x3e8(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x418(0x78)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x490(0x78)
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x508(0xc8)
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x5d0(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x600(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x678(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x6a8(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x720(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x750(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x7c8(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x7f8(0xb0)
	bool IsExtruded; // 0x8a8(0x01)
	bool IsTriggered; // 0x8a9(0x01)

	void AnimGraph(FPoseLink AnimGraph);
	void BlueprintBeginPlay();
	void Change state(bool Is Extruded, bool Is Triggered);
	void ExecuteUbergraph_ABP_SpikeyPlant_A(int32_t EntryPoint);
};

