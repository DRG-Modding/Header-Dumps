// BlueprintGeneratedClass WPN_GrenadeLauncher.WPN_GrenadeLauncher_C
// Size: 0x6b0 (Inherited: 0x690)
struct AWPN_GrenadeLauncher_C : AAmmoDrivenWeapon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x690(0x08)
	struct UFirstPersonWidgetComponent* FirstPersonWidget; // 0x698(0x08)
	struct UCrosshairAggregator* CrosshairAggregator; // 0x6a0(0x08)
	struct UProjectileLauncherComponent* ProjectileLauncher; // 0x6a8(0x08)

	void GetGearStatEntry(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function WPN_GrenadeLauncher.WPN_GrenadeLauncher_C.GetGearStatEntry
	void ReceiveBeginPlay(); // Function WPN_GrenadeLauncher.WPN_GrenadeLauncher_C.ReceiveBeginPlay
	void CustomEvent1(); // Function WPN_GrenadeLauncher.WPN_GrenadeLauncher_C.CustomEvent1
	void ExecuteUbergraph_WPN_GrenadeLauncher(int32_t EntryPoint); // Function WPN_GrenadeLauncher.WPN_GrenadeLauncher_C.ExecuteUbergraph_WPN_GrenadeLauncher
};

