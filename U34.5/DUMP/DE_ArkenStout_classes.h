// BlueprintGeneratedClass DE_ArkenStout.DE_ArkenStout_C
// Size: 0xd0 (Inherited: 0xc0)
struct UDE_ArkenStout_C : UDrinkEffectComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	APlayerCharacter* Character; // 0xc8(0x08)

	void OnStopEffect();
	void OnStartEffect(APlayerCharacter* Character);
	void ExecuteUbergraph_DE_ArkenStout(int32_t EntryPoint);
};

