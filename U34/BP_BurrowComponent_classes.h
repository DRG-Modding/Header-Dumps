// BlueprintGeneratedClass BP_BurrowComponent.BP_BurrowComponent_C
// Size: 0xf8 (Inherited: 0xb0)
struct UBP_BurrowComponent_C : UBurrowComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct UAnimMontage* BurrowAnimation; // 0xb8(0x08)
	struct UAnimMontage* UnBurrowAnimation; // 0xc0(0x08)
	struct FMulticastInlineDelegate OnBurrow; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnUnBurrow; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnBurrowComplete; // 0xe8(0x10)

	void GetPawn(struct AEnemyDeepPathfinderCharacter* AsEnemy Deep Pathfinder Character); // Function BP_BurrowComponent.BP_BurrowComponent_C.GetPawn
	void PlayBurrow(struct UAnimMontage* MontageToPlay); // Function BP_BurrowComponent.BP_BurrowComponent_C.PlayBurrow
	void PlayUnburrow(struct UAnimMontage* MontageToPlay); // Function BP_BurrowComponent.BP_BurrowComponent_C.PlayUnburrow
	void Unburrow(struct UAnimMontage* customMontage); // Function BP_BurrowComponent.BP_BurrowComponent_C.Unburrow
	void Burrow(struct UAnimMontage* customMontage); // Function BP_BurrowComponent.BP_BurrowComponent_C.Burrow
	void ExecuteUbergraph_BP_BurrowComponent(int32_t EntryPoint); // Function BP_BurrowComponent.BP_BurrowComponent_C.ExecuteUbergraph_BP_BurrowComponent
	void OnBurrowComplete__DelegateSignature(bool IsEmerging); // Function BP_BurrowComponent.BP_BurrowComponent_C.OnBurrowComplete__DelegateSignature
	void OnUnBurrow__DelegateSignature(); // Function BP_BurrowComponent.BP_BurrowComponent_C.OnUnBurrow__DelegateSignature
	void OnBurrow__DelegateSignature(); // Function BP_BurrowComponent.BP_BurrowComponent_C.OnBurrow__DelegateSignature
};

