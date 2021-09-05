// AnimBlueprintGeneratedClass ABP_Spider_Boss_Adult.ABP_Spider_Boss_Adult_C
// Size: 0x7a8 (Inherited: 0x410)
struct UABP_Spider_Boss_Adult_C : USpiderAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x410(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x418(0x30)
	FAnimNode_Slot AnimGraphNode_Slot_3; // 0x448(0x48)
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x490(0x48)
	FAnimNode_Slot AnimGraphNode_Slot; // 0x4d8(0x48)
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x520(0xa0)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x5c0(0x78)
	float __CustomProperty_MeshScale_4D6B70A748F15E1DE35FEB954FC42998; // 0x638(0x04)
	FAnimNode_LinkedAnimGraph AnimGraphNode_LinkedAnimGraph; // 0x640(0xa0)
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x6e0(0xa0)
	FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x780(0x18)
	bool PlayDeath; // 0x798(0x01)
	UAnimSequenceBase* DeathAnimation; // 0x7a0(0x08)

	void AnimGraph(FPoseLink AnimGraph);
	void SetDeathAnimation(UAnimSequenceBase* Animation);
	void ExecuteUbergraph_ABP_Spider_Boss_Adult(int32_t EntryPoint);
};

