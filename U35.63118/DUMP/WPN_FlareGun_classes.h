// BlueprintGeneratedClass WPN_FlareGun.WPN_FlareGun_C
// Size: 0x700 (Inherited: 0x6d8)
struct AWPN_FlareGun_C : AFlareGun {
	FPointerToUberGraphFrame UberGraphFrame; // 0x6d8(0x08)
	UFirstPersonWidgetComponent* FirstPersonWidget; // 0x6e0(0x08)
	UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x6e8(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x6f0(0x08)
	UProjectileLauncherComponent* ProjectileLauncher; // 0x6f8(0x08)

	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_WPN_FlareGun(int32_t EntryPoint);
};

