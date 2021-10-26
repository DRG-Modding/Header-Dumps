// BlueprintGeneratedClass WPN_SawedOffShotgun.WPN_SawedOffShotgun_C
// Size: 0x758 (Inherited: 0x728)
struct AWPN_SawedOffShotgun_C : ASawedOffShotgun {
	FPointerToUberGraphFrame UberGraphFrame; // 0x728(0x08)
	UFirstPersonWidgetComponent* FirstPersonWidget; // 0x730(0x08)
	UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x738(0x08)
	UPointLightComponent* MuzzleLight; // 0x740(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x748(0x08)
	UMultiHitscanComponent* MultiHitscan; // 0x750(0x08)

	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_WPN_SawedOffShotgun(int32_t EntryPoint);
};

