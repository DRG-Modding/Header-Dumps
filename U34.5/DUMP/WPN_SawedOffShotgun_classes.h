// BlueprintGeneratedClass WPN_SawedOffShotgun.WPN_SawedOffShotgun_C
// Size: 0x710 (Inherited: 0x6e0)
struct AWPN_SawedOffShotgun_C : ASawedOffShotgun {
	FPointerToUberGraphFrame UberGraphFrame; // 0x6e0(0x08)
	UFirstPersonWidgetComponent* FirstPersonWidget; // 0x6e8(0x08)
	UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x6f0(0x08)
	UPointLightComponent* MuzzleLight; // 0x6f8(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x700(0x08)
	UMultiHitscanComponent* MultiHitscan; // 0x708(0x08)

	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_WPN_SawedOffShotgun(int32_t EntryPoint);
};

