// BlueprintGeneratedClass WPN_BurstPistol.WPN_BurstPistol_C
// Size: 0x750 (Inherited: 0x710)
struct AWPN_BurstPistol_C : ABurstWeapon {
	FPointerToUberGraphFrame UberGraphFrame; // 0x710(0x08)
	UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x718(0x08)
	UStaticMeshComponent* TP_Mag; // 0x720(0x08)
	UFirstPersonStaticMeshComponent* FP_Mag; // 0x728(0x08)
	UHitscanComponent* HitScan; // 0x730(0x08)
	UFirstPersonWidgetComponent* FirstPersonWidget; // 0x738(0x08)
	UPointLightComponent* MuzzlePointLight; // 0x740(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x748(0x08)

	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Receive_ReloadBegin();
	void Receive_ReloadEnd();
	void ExecuteUbergraph_WPN_BurstPistol(int32_t EntryPoint);
};

