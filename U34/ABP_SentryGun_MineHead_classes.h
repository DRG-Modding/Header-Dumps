// AnimBlueprintGeneratedClass ABP_SentryGun_MineHead.ABP_SentryGun_MineHead_C
// Size: 0x698 (Inherited: 0x290)
struct UABP_SentryGun_MineHead_C : USentryGunAnimInstance {
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
	float FoldOutLength; // 0x688(0x04)
	char UnknownData_68C[0x4]; // 0x68c(0x04)
	struct UAnimSequenceBase* FoldOutSequence; // 0x690(0x08)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_SentryGun_MineHead.ABP_SentryGun_MineHead_C.AnimGraph
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryGun_MineHead_AnimGraphNode_ModifyBone_4F9CC0C04AB90D03D69114A047514B0B(); // Function ABP_SentryGun_MineHead.ABP_SentryGun_MineHead_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryGun_MineHead_AnimGraphNode_ModifyBone_4F9CC0C04AB90D03D69114A047514B0B
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryGun_MineHead_AnimGraphNode_ModifyBone_29245DD149B1558D50DED6A999B6E2A1(); // Function ABP_SentryGun_MineHead.ABP_SentryGun_MineHead_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryGun_MineHead_AnimGraphNode_ModifyBone_29245DD149B1558D50DED6A999B6E2A1
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryGun_MineHead_AnimGraphNode_SequenceEvaluator_33158AA143F6B4A10E29DDA22702F35B(); // Function ABP_SentryGun_MineHead.ABP_SentryGun_MineHead_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryGun_MineHead_AnimGraphNode_SequenceEvaluator_33158AA143F6B4A10E29DDA22702F35B
	void BlueprintBeginPlay(); // Function ABP_SentryGun_MineHead.ABP_SentryGun_MineHead_C.BlueprintBeginPlay
	void ExecuteUbergraph_ABP_SentryGun_MineHead(int32_t EntryPoint); // Function ABP_SentryGun_MineHead.ABP_SentryGun_MineHead_C.ExecuteUbergraph_ABP_SentryGun_MineHead
};

