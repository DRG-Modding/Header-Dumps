// BlueprintGeneratedClass DE_LeafLoverDisableAllEffects.DE_LeafLoverDisableAllEffects_C
// Size: 0xe0 (Inherited: 0xc0)
struct UDE_LeafLoverDisableAllEffects_C : UDrinkEffectComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	float TargetScale; // 0xc8(0x04)
	APlayerCharacter* Character; // 0xd0(0x08)
	float StartScale; // 0xd8(0x04)
	float Progress; // 0xdc(0x04)

	void OnStartEffect(APlayerCharacter* Character);
	void ExecuteUbergraph_DE_LeafLoverDisableAllEffects(int32_t EntryPoint);
};

