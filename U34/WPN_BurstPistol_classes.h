// BlueprintGeneratedClass WPN_BurstPistol.WPN_BurstPistol_C
// Size: 0x708 (Inherited: 0x6c8)
struct AWPN_BurstPistol_C : ABurstWeapon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6c8(0x08)
	struct UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x6d0(0x08)
	struct UStaticMeshComponent* TP_Mag; // 0x6d8(0x08)
	struct UFirstPersonStaticMeshComponent* FP_Mag; // 0x6e0(0x08)
	struct UHitscanComponent* HitScan; // 0x6e8(0x08)
	struct UFirstPersonWidgetComponent* FirstPersonWidget; // 0x6f0(0x08)
	struct UPointLightComponent* MuzzlePointLight; // 0x6f8(0x08)
	struct UCrosshairAggregator* CrosshairAggregator; // 0x700(0x08)

	void GetGearStatEntry(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function WPN_BurstPistol.WPN_BurstPistol_C.GetGearStatEntry
	void UserConstructionScript(); // Function WPN_BurstPistol.WPN_BurstPistol_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function WPN_BurstPistol.WPN_BurstPistol_C.ReceiveBeginPlay
	void Receive_ReloadBegin(); // Function WPN_BurstPistol.WPN_BurstPistol_C.Receive_ReloadBegin
	void Receive_ReloadEnd(); // Function WPN_BurstPistol.WPN_BurstPistol_C.Receive_ReloadEnd
	void ExecuteUbergraph_WPN_BurstPistol(int32_t EntryPoint); // Function WPN_BurstPistol.WPN_BurstPistol_C.ExecuteUbergraph_WPN_BurstPistol
};

