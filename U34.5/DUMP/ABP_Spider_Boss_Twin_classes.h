// AnimBlueprintGeneratedClass ABP_Spider_Boss_Twin.ABP_Spider_Boss_Twin_C
// Size: 0x7a8 (Inherited: 0x410)
struct UABP_Spider_Boss_Twin_C : USpiderAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x410(0x08)
	FAnimNode_Slot AnimGraphNode_Slot_3; // 0x418(0x48)
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x460(0x48)
	FAnimNode_Slot AnimGraphNode_Slot; // 0x4a8(0x48)
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x4f0(0xa0)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x590(0x78)
	FAnimNode_Root AnimGraphNode_Root; // 0x608(0x30)
	float __CustomProperty_MeshScale_2736D6F143DF40E6119A3C80493609FF; // 0x638(0x04)
	FAnimNode_LinkedAnimGraph AnimGraphNode_LinkedAnimGraph; // 0x640(0xa0)
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x6e0(0xa0)
	FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x780(0x18)
	bool PlayDeath; // 0x798(0x01)
	UAnimSequenceBase* DeathAnimation; // 0x7a0(0x08)

	void AnimGraph(FPoseLink AnimGraph);
	void SetDeathAnimation(UAnimSequenceBase* Animation);
	void ExecuteUbergraph_ABP_Spider_Boss_Twin(int32_t EntryPoint);
};

