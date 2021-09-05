// BlueprintGeneratedClass WPN_BurstPistol.WPN_BurstPistol_C
// Size: 0x708 (Inherited: 0x6c8)
struct AWPN_BurstPistol_C : ABurstWeapon {
	FPointerToUberGraphFrame UberGraphFrame; // 0x6c8(0x08)
	UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x6d0(0x08)
	UStaticMeshComponent* TP_Mag; // 0x6d8(0x08)
	UFirstPersonStaticMeshComponent* FP_Mag; // 0x6e0(0x08)
	UHitscanComponent* HitScan; // 0x6e8(0x08)
	UFirstPersonWidgetComponent* FirstPersonWidget; // 0x6f0(0x08)
	UPointLightComponent* MuzzlePointLight; // 0x6f8(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x700(0x08)

	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Receive_ReloadBegin();
	void Receive_ReloadEnd();
	void ExecuteUbergraph_WPN_BurstPistol(int32_t EntryPoint);
};

