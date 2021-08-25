// AnimBlueprintGeneratedClass ABP_JellyFish_Egg_A.ABP_JellyFish_Egg_A_C
// Size: 0x8f0 (Inherited: 0x270)
struct UABP_JellyFish_Egg_A_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x2a8(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x2c8(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2e8(0x78)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x360(0x590)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_JellyFish_Egg_A.ABP_JellyFish_Egg_A_C.AnimGraph
	void ExecuteUbergraph_ABP_JellyFish_Egg_A(int32_t EntryPoint); // Function ABP_JellyFish_Egg_A.ABP_JellyFish_Egg_A_C.ExecuteUbergraph_ABP_JellyFish_Egg_A
};

