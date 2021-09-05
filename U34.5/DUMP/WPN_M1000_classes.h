// BlueprintGeneratedClass WPN_M1000.WPN_M1000_C
// Size: 0x7d8 (Inherited: 0x7a8)
struct AWPN_M1000_C : ABoltActionWeapon {
	FPointerToUberGraphFrame UberGraphFrame; // 0x7a8(0x08)
	UFirstPersonWidgetComponent* FirstPersonWidget; // 0x7b0(0x08)
	UDamageComponent* Damage; // 0x7b8(0x08)
	UPointLightComponent* MuzzleLight; // 0x7c0(0x08)
	UHitscanComponent* HitScan; // 0x7c8(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x7d0(0x08)

	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void UserConstructionScript();
	void RecieveEquipped();
	void Recieve_UpdateMeshses(bool IsFirstPerson);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_WPN_M1000(int32_t EntryPoint);
};

