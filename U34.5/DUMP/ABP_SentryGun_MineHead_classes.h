// AnimBlueprintGeneratedClass ABP_SentryGun_MineHead.ABP_SentryGun_MineHead_C
// Size: 0x698 (Inherited: 0x290)
struct UABP_SentryGun_MineHead_C : USentryGunAnimInstance {
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
	float FoldOutLength; // 0x688(0x04)
	UAnimSequenceBase* FoldOutSequence; // 0x690(0x08)

	void AnimGraph(FPoseLink AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryGun_MineHead_AnimGraphNode_ModifyBone_4F9CC0C04AB90D03D69114A047514B0B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryGun_MineHead_AnimGraphNode_ModifyBone_29245DD149B1558D50DED6A999B6E2A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryGun_MineHead_AnimGraphNode_SequenceEvaluator_33158AA143F6B4A10E29DDA22702F35B();
	void BlueprintBeginPlay();
	void ExecuteUbergraph_ABP_SentryGun_MineHead(int32_t EntryPoint);
};

