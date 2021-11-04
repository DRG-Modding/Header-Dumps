// BlueprintGeneratedClass WPN_GrenadeLauncher.WPN_GrenadeLauncher_C
// Size: 0x6f8 (Inherited: 0x6d8)
struct AWPN_GrenadeLauncher_C : AAmmoDrivenWeapon {
	FPointerToUberGraphFrame UberGraphFrame; // 0x6d8(0x08)
	UFirstPersonWidgetComponent* FirstPersonWidget; // 0x6e0(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x6e8(0x08)
	UProjectileLauncherComponent* ProjectileLauncher; // 0x6f0(0x08)

	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void ReceiveBeginPlay();
	void CustomEvent1(UItemUpgrade* Event);
	void ExecuteUbergraph_WPN_GrenadeLauncher(int32_t EntryPoint);
};

