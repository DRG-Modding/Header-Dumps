// AnimBlueprintGeneratedClass ABP_FloatingLightPlant_A.ABP_FloatingLightPlant_A_C
// Size: 0x7ba (Inherited: 0x270)
struct UABP_FloatingLightPlant_A_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x2a8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x2d0(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x2f8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x320(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x348(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x370(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x398(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x3c0(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x438(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x468(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x4e0(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x510(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x588(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x5b8(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x630(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x660(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x6d8(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x708(0xb0)
	bool IsOpen; // 0x7b8(0x01)
	bool IsHIt; // 0x7b9(0x01)

	void AnimGraph(FPoseLink AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FloatingLightPlant_A_AnimGraphNode_TransitionResult_3BAAFC614EBBCCF9211CFD8CDFBD6D3E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FloatingLightPlant_A_AnimGraphNode_TransitionResult_3FB1A8D74C801563ABAD31B28E08B5D5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FloatingLightPlant_A_AnimGraphNode_TransitionResult_530FB0CC4F33C0D9F79412B2EC183FAD();
	void BlueprintBeginPlay();
	void OnChangeState(bool IsOpen, bool IsHIt);
	void ExecuteUbergraph_ABP_FloatingLightPlant_A(int32_t EntryPoint);
};

