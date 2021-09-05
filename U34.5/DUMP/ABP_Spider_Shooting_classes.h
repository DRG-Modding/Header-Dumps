// AnimBlueprintGeneratedClass ABP_Spider_Shooting.ABP_Spider_Shooting_C
// Size: 0x1260 (Inherited: 0x430)
struct UABP_Spider_Shooting_C : UShootingSpiderAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x430(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x438(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x468(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x490(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x4b8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x4e0(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x508(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x530(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x558(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x580(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x5a8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x5d0(0x28)
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3; // 0x5f8(0xe0)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x6d8(0x78)
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x750(0xa0)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x7f0(0x78)
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x868(0xc8)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x930(0x78)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x9a8(0x78)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0xa20(0x78)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0xa98(0x78)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xb10(0x78)
	FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt; // 0xb88(0xa0)
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0xc28(0x30)
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0xc58(0xe0)
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0xd38(0x30)
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0xd68(0xe0)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0xe48(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xe78(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0xef0(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xf20(0xb0)
	FAnimNode_Slot AnimGraphNode_Slot_3; // 0xfd0(0x48)
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x1018(0x48)
	FAnimNode_Slot AnimGraphNode_Slot; // 0x1060(0x48)
	FAnimNode_AimOffsetLookAt AnimGraphNode_AimOffsetLookAt; // 0x10b0(0x1b0)

	void AnimGraph(FPoseLink AnimGraph);
	void AnimNotify_Hide();
	void ExecuteUbergraph_ABP_Spider_Shooting(int32_t EntryPoint);
};

