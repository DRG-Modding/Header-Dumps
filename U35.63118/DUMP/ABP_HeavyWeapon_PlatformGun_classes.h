// AnimBlueprintGeneratedClass ABP_HeavyWeapon_PlatformGun.ABP_HeavyWeapon_PlatformGun_C
// Size: 0x388 (Inherited: 0x290)
struct UABP_HeavyWeapon_PlatformGun_C : UPlatformGunAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x298(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2c8(0x78)
	FAnimNode_Slot AnimGraphNode_Slot; // 0x340(0x48)

	void AnimGraph(FPoseLink AnimGraph);
	void ExecuteUbergraph_ABP_HeavyWeapon_PlatformGun(int32_t EntryPoint);
};

