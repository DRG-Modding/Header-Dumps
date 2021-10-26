// BlueprintGeneratedClass WPN_DualMPs.WPN_DualMPs_C
// Size: 0x770 (Inherited: 0x728)
struct AWPN_DualMPs_C : ADualMachinePistols {
	FPointerToUberGraphFrame UberGraphFrame; // 0x728(0x08)
	UFirstPersonWidgetComponent* FirstPersonWidgetLeft; // 0x730(0x08)
	UFirstPersonStaticMeshComponent* FirstPersonStaticMesh1; // 0x738(0x08)
	UFirstPersonWidgetComponent* FirstPersonWidget; // 0x740(0x08)
	UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x748(0x08)
	UHitscanComponent* HitScan; // 0x750(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x758(0x08)
	UDamageComponent* Damage; // 0x760(0x08)
	UPointLightComponent* MuzzleFlash; // 0x768(0x08)

	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_WPN_DualMPs(int32_t EntryPoint);
};

