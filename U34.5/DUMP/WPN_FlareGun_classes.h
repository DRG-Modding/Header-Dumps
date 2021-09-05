// BlueprintGeneratedClass WPN_FlareGun.WPN_FlareGun_C
// Size: 0x6b8 (Inherited: 0x690)
struct AWPN_FlareGun_C : AFlareGun {
	FPointerToUberGraphFrame UberGraphFrame; // 0x690(0x08)
	UFirstPersonWidgetComponent* FirstPersonWidget; // 0x698(0x08)
	UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x6a0(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x6a8(0x08)
	UProjectileLauncherComponent* ProjectileLauncher; // 0x6b0(0x08)

	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_WPN_FlareGun(int32_t EntryPoint);
};

