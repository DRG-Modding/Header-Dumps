// BlueprintGeneratedClass WPN_M1000.WPN_M1000_C
// Size: 0x838 (Inherited: 0x808)
struct AWPN_M1000_C : ABoltActionWeapon {
	FPointerToUberGraphFrame UberGraphFrame; // 0x808(0x08)
	UFirstPersonWidgetComponent* FirstPersonWidget; // 0x810(0x08)
	UDamageComponent* Damage; // 0x818(0x08)
	UPointLightComponent* MuzzleLight; // 0x820(0x08)
	UHitscanComponent* HitScan; // 0x828(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x830(0x08)

	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void UserConstructionScript();
	void RecieveEquipped();
	void Recieve_UpdateMeshses(bool IsFirstPerson);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_WPN_M1000(int32_t EntryPoint);
};

