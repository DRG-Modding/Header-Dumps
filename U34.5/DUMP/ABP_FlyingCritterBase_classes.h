// AnimBlueprintGeneratedClass ABP_FlyingCritterBase.ABP_FlyingCritterBase_C
// Size: 0x1041 (Inherited: 0x410)
struct UABP_FlyingCritterBase_C : USpiderAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x410(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x418(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x448(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x470(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x498(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x4c0(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x4e8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x510(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x538(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x560(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x588(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x5b0(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_14; // 0x5d8(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x650(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13; // 0x680(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x6f8(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12; // 0x728(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x7a0(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; // 0x7d0(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x848(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0x878(0x78)
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x8f0(0xa0)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x990(0x78)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0xa08(0x78)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0xa80(0x78)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0xaf8(0x78)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0xb70(0x78)
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0xbe8(0xb0)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0xc98(0x78)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0xd10(0x78)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xd88(0x78)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xe00(0x78)
	FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt; // 0xe78(0xa0)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0xf18(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xf48(0xb0)
	FAnimNode_Slot AnimGraphNode_Slot; // 0xff8(0x48)
	bool Flying; // 0x1040(0x01)

	void AnimGraph(FPoseLink AnimGraph);
	void SetFlying2(bool NewParam);
	void SetFlying(bool SetFlying);
	void ExecuteUbergraph_ABP_FlyingCritterBase(int32_t EntryPoint);
};

