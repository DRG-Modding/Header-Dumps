// BlueprintGeneratedClass WPN_DualMPs.WPN_DualMPs_C
// Size: 0x720 (Inherited: 0x6d8)
struct AWPN_DualMPs_C : ADualMachinePistols {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6d8(0x08)
	struct UFirstPersonWidgetComponent* FirstPersonWidgetLeft; // 0x6e0(0x08)
	struct UFirstPersonStaticMeshComponent* FirstPersonStaticMesh1; // 0x6e8(0x08)
	struct UFirstPersonWidgetComponent* FirstPersonWidget; // 0x6f0(0x08)
	struct UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x6f8(0x08)
	struct UHitscanComponent* HitScan; // 0x700(0x08)
	struct UCrosshairAggregator* CrosshairAggregator; // 0x708(0x08)
	struct UDamageComponent* Damage; // 0x710(0x08)
	struct UPointLightComponent* MuzzleFlash; // 0x718(0x08)

	void GetGearStatEntry(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function WPN_DualMPs.WPN_DualMPs_C.GetGearStatEntry
	void UserConstructionScript(); // Function WPN_DualMPs.WPN_DualMPs_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function WPN_DualMPs.WPN_DualMPs_C.ReceiveBeginPlay
	void ExecuteUbergraph_WPN_DualMPs(int32_t EntryPoint); // Function WPN_DualMPs.WPN_DualMPs_C.ExecuteUbergraph_WPN_DualMPs
};

