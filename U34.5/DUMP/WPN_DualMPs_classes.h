// BlueprintGeneratedClass WPN_DualMPs.WPN_DualMPs_C
// Size: 0x720 (Inherited: 0x6d8)
struct AWPN_DualMPs_C : ADualMachinePistols {
	FPointerToUberGraphFrame UberGraphFrame; // 0x6d8(0x08)
	UFirstPersonWidgetComponent* FirstPersonWidgetLeft; // 0x6e0(0x08)
	UFirstPersonStaticMeshComponent* FirstPersonStaticMesh1; // 0x6e8(0x08)
	UFirstPersonWidgetComponent* FirstPersonWidget; // 0x6f0(0x08)
	UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x6f8(0x08)
	UHitscanComponent* HitScan; // 0x700(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x708(0x08)
	UDamageComponent* Damage; // 0x710(0x08)
	UPointLightComponent* MuzzleFlash; // 0x718(0x08)

	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_WPN_DualMPs(int32_t EntryPoint);
};

