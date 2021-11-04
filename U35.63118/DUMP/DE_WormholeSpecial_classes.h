// BlueprintGeneratedClass DE_WormholeSpecial.DE_WormholeSpecial_C
// Size: 0x108 (Inherited: 0xc0)
struct UDE_WormholeSpecial_C : UDrinkEffectComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	APlayerCharacter* Character; // 0xc8(0x08)
	FTransform On Start Transform; // 0xd0(0x30)
	ABP_WormholeLocation_Base_C* ActiveWormhole; // 0x100(0x08)

	void Disable Older Active Wormhole Effects();
	void IsLastActiveWormholeEffect(bool was last effect);
	void Set Original position();
	void ReceiveTick(float DeltaSeconds);
	void OnStartEffect(APlayerCharacter* Character);
	void OnStopEffect();
	void Spawn Teleport Effects();
	void Disable Active Location Effects();
	void ExecuteUbergraph_DE_WormholeSpecial(int32_t EntryPoint);
};

