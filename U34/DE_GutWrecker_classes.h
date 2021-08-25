// BlueprintGeneratedClass DE_GutWrecker.DE_GutWrecker_C
// Size: 0xd0 (Inherited: 0xc0)
struct UDE_GutWrecker_C : UDrinkEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct APlayerCharacter* Character; // 0xc8(0x08)

	void ReceiveTick(float DeltaSeconds); // Function DE_GutWrecker.DE_GutWrecker_C.ReceiveTick
	void OnStartEffect(struct APlayerCharacter* Character); // Function DE_GutWrecker.DE_GutWrecker_C.OnStartEffect
	void OnStopEffect(); // Function DE_GutWrecker.DE_GutWrecker_C.OnStopEffect
	void ExecuteUbergraph_DE_GutWrecker(int32_t EntryPoint); // Function DE_GutWrecker.DE_GutWrecker_C.ExecuteUbergraph_DE_GutWrecker
};

