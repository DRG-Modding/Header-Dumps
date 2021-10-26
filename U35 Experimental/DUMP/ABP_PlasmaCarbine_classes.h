// AnimBlueprintGeneratedClass ABP_PlasmaCarbine.ABP_PlasmaCarbine_C
// Size: 0x4bc (Inherited: 0x280)
struct UABP_PlasmaCarbine_C : UAmmoDrivenWeaponAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x288(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x2b8(0x78)
	FAnimNode_Slot AnimGraphNode_Slot; // 0x330(0x48)
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x378(0xc8)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x440(0x78)
	float FireSpinRate; // 0x4b8(0x04)

	void AnimGraph(FPoseLink AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_PlasmaCarbine(int32_t EntryPoint);
};

