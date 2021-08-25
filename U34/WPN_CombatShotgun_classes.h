// BlueprintGeneratedClass WPN_CombatShotgun.WPN_CombatShotgun_C
// Size: 0x6d0 (Inherited: 0x698)
struct AWPN_CombatShotgun_C : AAutoShotgun {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x698(0x08)
	struct UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x6a0(0x08)
	struct UFirstPersonWidgetComponent* FirstPersonWidget; // 0x6a8(0x08)
	struct UDamageComponent* Damage; // 0x6b0(0x08)
	struct UPointLightComponent* MuzzlePointLight; // 0x6b8(0x08)
	struct UCrosshairAggregator* CrosshairAggregator; // 0x6c0(0x08)
	struct UMultiHitscanComponent* MultiHitscan; // 0x6c8(0x08)

	void GetGearStatEntry(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function WPN_CombatShotgun.WPN_CombatShotgun_C.GetGearStatEntry
	void UserConstructionScript(); // Function WPN_CombatShotgun.WPN_CombatShotgun_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function WPN_CombatShotgun.WPN_CombatShotgun_C.ReceiveBeginPlay
	void ExecuteUbergraph_WPN_CombatShotgun(int32_t EntryPoint); // Function WPN_CombatShotgun.WPN_CombatShotgun_C.ExecuteUbergraph_WPN_CombatShotgun
};

