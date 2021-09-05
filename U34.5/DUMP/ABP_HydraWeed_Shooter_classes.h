// AnimBlueprintGeneratedClass ABP_HydraWeed_Shooter.ABP_HydraWeed_Shooter_C
// Size: 0xb29 (Inherited: 0x2e0)
struct UABP_HydraWeed_Shooter_C : UShootingPlantAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x2e8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x310(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x338(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x360(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x388(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3b0(0x28)
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x3d8(0x48)
	FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x420(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x450(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x4c8(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x4f8(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x570(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x5a0(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x618(0x30)
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_2; // 0x648(0xe8)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x730(0x30)
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator; // 0x760(0xe8)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x848(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x878(0xb0)
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x928(0xc8)
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x9f0(0x48)
	FAnimNode_Slot AnimGraphNode_Slot; // 0xa38(0x48)
	FAnimNode_Root AnimGraphNode_Root; // 0xa80(0x30)
	FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer; // 0xab0(0x78)
	bool WaitToGrow; // 0xb28(0x01)

	void AnimGraph(FPoseLink AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydraWeed_Shooter_AnimGraphNode_BlendSpaceEvaluator_CB5BB89E45E64D98B4798A919F0F0B09();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydraWeed_Shooter_AnimGraphNode_TransitionResult_8FC3F39141410AB1112C5DA64C0D50BC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydraWeed_Shooter_AnimGraphNode_BlendSpaceEvaluator_D9F6E6D649EE4F28458FB48849A1E87A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydraWeed_Shooter_AnimGraphNode_TransitionResult_B4739F754CB6172441192B8DFB8EABAD();
	void ExecuteUbergraph_ABP_HydraWeed_Shooter(int32_t EntryPoint);
};

