// AnimBlueprintGeneratedClass ABP_SuckingPlant.ABP_SuckingPlant_C
// Size: 0xcbc (Inherited: 0x270)
struct UABP_SuckingPlant_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x2a8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x2d0(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x2f8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x320(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x348(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x3c0(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x3f0(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x468(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x498(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x510(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x540(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x5b8(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x5e8(0xb0)
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x698(0xc8)
	FAnimNode_TransitionPoseEvaluator AnimGraphNode_TransitionPoseEvaluator_4; // 0x760(0x58)
	FAnimNode_TransitionPoseEvaluator AnimGraphNode_TransitionPoseEvaluator_3; // 0x7b8(0x58)
	FAnimNode_StateResult AnimGraphNode_CustomTransitionResult_2; // 0x810(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x840(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x868(0x28)
	FAnimNode_TransitionPoseEvaluator AnimGraphNode_TransitionPoseEvaluator_2; // 0x890(0x58)
	FAnimNode_TransitionPoseEvaluator AnimGraphNode_TransitionPoseEvaluator; // 0x8e8(0x58)
	FAnimNode_StateResult AnimGraphNode_CustomTransitionResult; // 0x940(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x970(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x998(0x28)
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_2; // 0x9c0(0xe8)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0xaa8(0x30)
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator; // 0xad8(0xe8)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0xbc0(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xbf0(0xb0)
	ABP_SuckingPlant__C* SuckingPlant_Ref; // 0xca0(0x08)
	FRotator Current Rotation; // 0xca8(0x0c)
	bool remove test; // 0xcb4(0x01)
	float Previous Yaw Value; // 0xcb8(0x04)

	void AnimGraph(FPoseLink AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SuckingPlant_AnimGraphNode_TransitionResult_94DB4A024F5107A011793D8A7A917BB8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SuckingPlant_AnimGraphNode_BlendSpaceEvaluator_A352300A4C09A2E51C85FEA937DACB1E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SuckingPlant_AnimGraphNode_TransitionResult_E2AF042E4851FC81E3E48B8889497FB8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SuckingPlant_AnimGraphNode_BlendSpaceEvaluator_FAF2A81D4D60864F94696AA842026B63();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SuckingPlant_AnimGraphNode_TransitionResult_561A0D0D497D83C4B66150B3EF828CBC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SuckingPlant_AnimGraphNode_TransitionResult_8406EC9946965BC871F0FDAB578C9963();
	void BlueprintInitializeAnimation();
	void set rotation(FVector Target Rotation);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SuckingPlant_AnimGraphNode_TransitionResult_9167A2C140F772009EEF7A8C0F8436C7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SuckingPlant_AnimGraphNode_TransitionResult_0EA1C1304252907E29C29C9A3ADDA903();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SuckingPlant_AnimGraphNode_TransitionResult_6CCF84CD42BE5088DB62ECAA791DD0DD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SuckingPlant_AnimGraphNode_TransitionResult_DC2ED01848B1FF5FCA3FE5A3455DFEA8();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void Remove me too();
	void ExecuteUbergraph_ABP_SuckingPlant(int32_t EntryPoint);
};

