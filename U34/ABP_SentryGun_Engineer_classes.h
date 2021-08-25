// AnimBlueprintGeneratedClass ABP_SentryGun_Engineer.ABP_SentryGun_Engineer_C
// Size: 0x694 (Inherited: 0x290)
struct UABP_SentryGun_Engineer_C : USentryGunAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x298(0x30)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x2c8(0x48)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x310(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x340(0xb0)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x3f0(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x4f8(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x518(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x538(0x108)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x640(0x48)
	struct UAnimSequenceBase* FoldOutSequence; // 0x688(0x08)
	float FoldOutLength; // 0x690(0x04)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_SentryGun_Engineer.ABP_SentryGun_Engineer_C.AnimGraph
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryGun_Engineer_AnimGraphNode_ModifyBone_068DF41E4B8B0454D03DCA9AA7A7BB73(); // Function ABP_SentryGun_Engineer.ABP_SentryGun_Engineer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryGun_Engineer_AnimGraphNode_ModifyBone_068DF41E4B8B0454D03DCA9AA7A7BB73
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryGun_Engineer_AnimGraphNode_ModifyBone_E56B43184AF24B45A18EE89772B077B8(); // Function ABP_SentryGun_Engineer.ABP_SentryGun_Engineer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryGun_Engineer_AnimGraphNode_ModifyBone_E56B43184AF24B45A18EE89772B077B8
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryGun_Engineer_AnimGraphNode_SequenceEvaluator_C693E2CD403BD3554BAE139B739F587C(); // Function ABP_SentryGun_Engineer.ABP_SentryGun_Engineer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryGun_Engineer_AnimGraphNode_SequenceEvaluator_C693E2CD403BD3554BAE139B739F587C
	void BlueprintBeginPlay(); // Function ABP_SentryGun_Engineer.ABP_SentryGun_Engineer_C.BlueprintBeginPlay
	void ExecuteUbergraph_ABP_SentryGun_Engineer(int32_t EntryPoint); // Function ABP_SentryGun_Engineer.ABP_SentryGun_Engineer_C.ExecuteUbergraph_ABP_SentryGun_Engineer
};

