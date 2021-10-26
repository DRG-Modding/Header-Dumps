// BlueprintGeneratedClass DE_StrongerBarrelKicking.DE_StrongerBarrelKicking_C
// Size: 0xd0 (Inherited: 0xc0)
struct UDE_StrongerBarrelKicking_C : UDrinkEffectComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	APlayerCharacter* Character; // 0xc8(0x08)

	void OnStartEffect(APlayerCharacter* Character);
	void OnStopEffect();
	void ExecuteUbergraph_DE_StrongerBarrelKicking(int32_t EntryPoint);
};

