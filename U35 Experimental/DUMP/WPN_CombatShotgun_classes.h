// BlueprintGeneratedClass WPN_CombatShotgun.WPN_CombatShotgun_C
// Size: 0x720 (Inherited: 0x6e8)
struct AWPN_CombatShotgun_C : AAutoShotgun {
	FPointerToUberGraphFrame UberGraphFrame; // 0x6e8(0x08)
	UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x6f0(0x08)
	UFirstPersonWidgetComponent* FirstPersonWidget; // 0x6f8(0x08)
	UDamageComponent* Damage; // 0x700(0x08)
	UPointLightComponent* MuzzlePointLight; // 0x708(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x710(0x08)
	UMultiHitscanComponent* MultiHitscan; // 0x718(0x08)

	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void CustomEvent1(UItemUpgrade* Event);
	void AddPoisonToPlatform(FHitResult Hit, bool alwaysPenetrate);
	void ExecuteUbergraph_WPN_CombatShotgun(int32_t EntryPoint);
};

