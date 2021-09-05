// AnimBlueprintGeneratedClass ABP_JellyFish_Egg_A.ABP_JellyFish_Egg_A_C
// Size: 0x8f0 (Inherited: 0x270)
struct UABP_JellyFish_Egg_A_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x2a8(0x20)
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x2c8(0x20)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2e8(0x78)
	FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x360(0x590)

	void AnimGraph(FPoseLink AnimGraph);
	void ExecuteUbergraph_ABP_JellyFish_Egg_A(int32_t EntryPoint);
};

