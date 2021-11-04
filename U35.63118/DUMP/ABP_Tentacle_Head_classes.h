// AnimBlueprintGeneratedClass ABP_Tentacle_Head.ABP_Tentacle_Head_C
// Size: 0x9d0 (Inherited: 0x2c0)
struct UABP_Tentacle_Head_C : UFacilityTentacleHeadAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x2f8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x320(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x348(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x370(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x398(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3c0(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x3e8(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x460(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x490(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x508(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x538(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x5b0(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x5e0(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x658(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x688(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x700(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x730(0xb0)
	FAnimNode_Slot AnimGraphNode_Slot_3; // 0x7e0(0x48)
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x828(0x48)
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x870(0xa0)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x910(0x78)
	FAnimNode_Slot AnimGraphNode_Slot; // 0x988(0x48)

	void AnimGraph(FPoseLink AnimGraph);
	void ExecuteUbergraph_ABP_Tentacle_Head(int32_t EntryPoint);
};

