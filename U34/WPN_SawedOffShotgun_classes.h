// BlueprintGeneratedClass WPN_SawedOffShotgun.WPN_SawedOffShotgun_C
// Size: 0x710 (Inherited: 0x6e0)
struct AWPN_SawedOffShotgun_C : ASawedOffShotgun {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6e0(0x08)
	struct UFirstPersonWidgetComponent* FirstPersonWidget; // 0x6e8(0x08)
	struct UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x6f0(0x08)
	struct UPointLightComponent* MuzzleLight; // 0x6f8(0x08)
	struct UCrosshairAggregator* CrosshairAggregator; // 0x700(0x08)
	struct UMultiHitscanComponent* MultiHitscan; // 0x708(0x08)

	void GetGearStatEntry(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function WPN_SawedOffShotgun.WPN_SawedOffShotgun_C.GetGearStatEntry
	void UserConstructionScript(); // Function WPN_SawedOffShotgun.WPN_SawedOffShotgun_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function WPN_SawedOffShotgun.WPN_SawedOffShotgun_C.ReceiveBeginPlay
	void ExecuteUbergraph_WPN_SawedOffShotgun(int32_t EntryPoint); // Function WPN_SawedOffShotgun.WPN_SawedOffShotgun_C.ExecuteUbergraph_WPN_SawedOffShotgun
};

