// BlueprintGeneratedClass DE_GutWrecker.DE_GutWrecker_C
// Size: 0xd0 (Inherited: 0xc0)
struct UDE_GutWrecker_C : UDrinkEffectComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	APlayerCharacter* Character; // 0xc8(0x08)

	void ReceiveTick(float DeltaSeconds);
	void OnStartEffect(APlayerCharacter* Character);
	void OnStopEffect();
	void ExecuteUbergraph_DE_GutWrecker(int32_t EntryPoint);
};

