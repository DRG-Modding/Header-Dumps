// AnimBlueprintGeneratedClass ABP_Spider_Boss_Heavy.ABP_Spider_Boss_Heavy_C
// Size: 0x1079 (Inherited: 0x410)
struct UABP_Spider_Boss_Heavy_C : USpiderAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x410(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x418(0x30)
	float __CustomProperty_MeshScale_E54DA08D4BFB3BD45690D29CEB143D0E; // 0x448(0x04)
	char UnknownData_44C[0x4]; // 0x44c(0x04)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_LinkedAnimGraph; // 0x450(0xa0)
	struct FAnimNode_Slot AnimGraphNode_Slot_3; // 0x4f0(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x538(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x580(0x48)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x5c8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x5f0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x618(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x640(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x668(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x6e0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x710(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x788(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x7b8(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x830(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x860(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x8d8(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x908(0xb0)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x9b8(0xc0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5; // 0xa78(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0xb18(0x78)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0xb90(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0xc30(0x78)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0xca8(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xd48(0x78)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3; // 0xdc0(0x48)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0xe08(0x48)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0xe50(0x48)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0xe98(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xf38(0x78)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xfb0(0xa0)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x1050(0x18)
	bool ArmorOpen; // 0x1068(0x01)
	bool WeakSpot_L_Open; // 0x1069(0x01)
	bool WeakSpot_R_Open; // 0x106a(0x01)
	bool WeakSpot_C_Open; // 0x106b(0x01)
	char UnknownData_106C[0x4]; // 0x106c(0x04)
	struct UAnimSequenceBase* DeathAnimation; // 0x1070(0x08)
	bool PlayDeath; // 0x1078(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_Spider_Boss_Heavy.ABP_Spider_Boss_Heavy_C.AnimGraph
	void SetDeathAnimation(struct UAnimSequenceBase* Animation); // Function ABP_Spider_Boss_Heavy.ABP_Spider_Boss_Heavy_C.SetDeathAnimation
	void ExecuteUbergraph_ABP_Spider_Boss_Heavy(int32_t EntryPoint); // Function ABP_Spider_Boss_Heavy.ABP_Spider_Boss_Heavy_C.ExecuteUbergraph_ABP_Spider_Boss_Heavy
};

