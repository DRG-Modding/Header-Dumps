// AnimBlueprintGeneratedClass APB_JellySwarmer.APB_JellySwarmer_C
// Size: 0x560 (Inherited: 0x2c0)
struct UAPB_JellySwarmer_C : UJellyFishAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x2f8(0xe0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x3d8(0x48)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x420(0x78)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x498(0xc8)

	void AnimGraph(struct FPoseLink AnimGraph); // Function APB_JellySwarmer.APB_JellySwarmer_C.AnimGraph
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function APB_JellySwarmer.APB_JellySwarmer_C.BlueprintUpdateAnimation
	void ExecuteUbergraph_APB_JellySwarmer(int32_t EntryPoint); // Function APB_JellySwarmer.APB_JellySwarmer_C.ExecuteUbergraph_APB_JellySwarmer
};

