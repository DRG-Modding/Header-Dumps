// BlueprintGeneratedClass WPN_M1000.WPN_M1000_C
// Size: 0x7d8 (Inherited: 0x7a8)
struct AWPN_M1000_C : ABoltActionWeapon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7a8(0x08)
	struct UFirstPersonWidgetComponent* FirstPersonWidget; // 0x7b0(0x08)
	struct UDamageComponent* Damage; // 0x7b8(0x08)
	struct UPointLightComponent* MuzzleLight; // 0x7c0(0x08)
	struct UHitscanComponent* HitScan; // 0x7c8(0x08)
	struct UCrosshairAggregator* CrosshairAggregator; // 0x7d0(0x08)

	void GetGearStatEntry(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function WPN_M1000.WPN_M1000_C.GetGearStatEntry
	void UserConstructionScript(); // Function WPN_M1000.WPN_M1000_C.UserConstructionScript
	void RecieveEquipped(); // Function WPN_M1000.WPN_M1000_C.RecieveEquipped
	void Recieve_UpdateMeshses(bool IsFirstPerson); // Function WPN_M1000.WPN_M1000_C.Recieve_UpdateMeshses
	void ReceiveBeginPlay(); // Function WPN_M1000.WPN_M1000_C.ReceiveBeginPlay
	void ExecuteUbergraph_WPN_M1000(int32_t EntryPoint); // Function WPN_M1000.WPN_M1000_C.ExecuteUbergraph_WPN_M1000
};

