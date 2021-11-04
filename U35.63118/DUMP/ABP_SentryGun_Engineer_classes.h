// AnimBlueprintGeneratedClass ABP_SentryGun_Engineer.ABP_SentryGun_Engineer_C
// Size: 0x694 (Inherited: 0x290)
struct UABP_SentryGun_Engineer_C : USentryGunAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x298(0x30)
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x2c8(0x48)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x310(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x340(0xb0)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x3f0(0x108)
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x4f8(0x20)
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x518(0x20)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x538(0x108)
	FAnimNode_Slot AnimGraphNode_Slot; // 0x640(0x48)
	UAnimSequenceBase* FoldOutSequence; // 0x688(0x08)
	float FoldOutLength; // 0x690(0x04)

	void AnimGraph(FPoseLink AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryGun_Engineer_AnimGraphNode_ModifyBone_068DF41E4B8B0454D03DCA9AA7A7BB73();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryGun_Engineer_AnimGraphNode_ModifyBone_E56B43184AF24B45A18EE89772B077B8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryGun_Engineer_AnimGraphNode_SequenceEvaluator_C693E2CD403BD3554BAE139B739F587C();
	void BlueprintBeginPlay();
	void ExecuteUbergraph_ABP_SentryGun_Engineer(int32_t EntryPoint);
};

