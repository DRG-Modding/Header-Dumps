// AnimBlueprintGeneratedClass ABP_FlameThrower_A.ABP_FlameThrower_A_C
// Size: 0x890 (Inherited: 0x280)
struct UABP_FlameThrower_A_C : UAmmoDrivenWeaponAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x288(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x2b8(0x78)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x330(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3d0(0x78)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x448(0xc0)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x508(0x48)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x550(0xa0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x5f0(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x610(0x108)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x718(0x20)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x738(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x7f0(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x818(0x28)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x840(0x48)
	struct FRandomStream RandoStream; // 0x888(0x08)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_FlameThrower_A.ABP_FlameThrower_A_C.AnimGraph
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FlameThrower_A_AnimGraphNode_ModifyBone_FF8B823A4EF687E5EFCD9D9060A550B8(); // Function ABP_FlameThrower_A.ABP_FlameThrower_A_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FlameThrower_A_AnimGraphNode_ModifyBone_FF8B823A4EF687E5EFCD9D9060A550B8
	void ExecuteUbergraph_ABP_FlameThrower_A(int32_t EntryPoint); // Function ABP_FlameThrower_A.ABP_FlameThrower_A_C.ExecuteUbergraph_ABP_FlameThrower_A
};

