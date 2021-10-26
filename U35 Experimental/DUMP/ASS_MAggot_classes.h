// AnimBlueprintGeneratedClass ASS_MAggot.ASS_Maggot_C
// Size: 0x340 (Inherited: 0x290)
struct UASS_Maggot_C : UAnimSharingStateInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x298(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2c8(0x78)

	void AnimGraph(FPoseLink AnimGraph);
	void ExecuteUbergraph_ASS_Maggot(int32_t EntryPoint);
};

