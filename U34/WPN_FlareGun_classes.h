// BlueprintGeneratedClass WPN_FlareGun.WPN_FlareGun_C
// Size: 0x6b8 (Inherited: 0x690)
struct AWPN_FlareGun_C : AFlareGun {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x690(0x08)
	struct UFirstPersonWidgetComponent* FirstPersonWidget; // 0x698(0x08)
	struct UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x6a0(0x08)
	struct UCrosshairAggregator* CrosshairAggregator; // 0x6a8(0x08)
	struct UProjectileLauncherComponent* ProjectileLauncher; // 0x6b0(0x08)

	void GetGearStatEntry(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function WPN_FlareGun.WPN_FlareGun_C.GetGearStatEntry
	void ReceiveBeginPlay(); // Function WPN_FlareGun.WPN_FlareGun_C.ReceiveBeginPlay
	void ExecuteUbergraph_WPN_FlareGun(int32_t EntryPoint); // Function WPN_FlareGun.WPN_FlareGun_C.ExecuteUbergraph_WPN_FlareGun
};

