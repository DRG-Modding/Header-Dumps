// BlueprintGeneratedClass WPN_GrenadeLauncher.WPN_GrenadeLauncher_C
// Size: 0x6b0 (Inherited: 0x690)
struct AWPN_GrenadeLauncher_C : AAmmoDrivenWeapon {
	FPointerToUberGraphFrame UberGraphFrame; // 0x690(0x08)
	UFirstPersonWidgetComponent* FirstPersonWidget; // 0x698(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x6a0(0x08)
	UProjectileLauncherComponent* ProjectileLauncher; // 0x6a8(0x08)

	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void ReceiveBeginPlay();
	void CustomEvent1();
	void ExecuteUbergraph_WPN_GrenadeLauncher(int32_t EntryPoint);
};

