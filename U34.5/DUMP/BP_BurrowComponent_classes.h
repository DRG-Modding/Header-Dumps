// BlueprintGeneratedClass BP_BurrowComponent.BP_BurrowComponent_C
// Size: 0xf8 (Inherited: 0xb0)
struct UBP_BurrowComponent_C : UBurrowComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	UAnimMontage* BurrowAnimation; // 0xb8(0x08)
	UAnimMontage* UnBurrowAnimation; // 0xc0(0x08)
	FMulticastInlineDelegate OnBurrow; // 0xc8(0x10)
	FMulticastInlineDelegate OnUnBurrow; // 0xd8(0x10)
	FMulticastInlineDelegate OnBurrowComplete; // 0xe8(0x10)

	void GetPawn(AEnemyDeepPathfinderCharacter* AsEnemy Deep Pathfinder Character);
	void PlayBurrow(UAnimMontage* MontageToPlay);
	void PlayUnburrow(UAnimMontage* MontageToPlay);
	void Unburrow(UAnimMontage* customMontage);
	void Burrow(UAnimMontage* customMontage);
	void ExecuteUbergraph_BP_BurrowComponent(int32_t EntryPoint);
	void OnBurrowComplete__DelegateSignature(bool IsEmerging);
	void OnUnBurrow__DelegateSignature();
	void OnBurrow__DelegateSignature();
};

