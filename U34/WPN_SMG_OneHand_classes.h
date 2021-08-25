// BlueprintGeneratedClass WPN_SMG_OneHand.WPN_SMG_OneHand_C
// Size: 0x720 (Inherited: 0x6d0)
struct AWPN_SMG_OneHand_C : AElectricalSMG {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6d0(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x6d8(0x08)
	struct UFirstPersonParticleSystemComponent* FirstPersonParticleSystem; // 0x6e0(0x08)
	struct UStaticMeshComponent* TP_SMG_MAG; // 0x6e8(0x08)
	struct UFirstPersonStaticMeshComponent* SMG_Mag_Full; // 0x6f0(0x08)
	struct UFirstPersonWidgetComponent* FirstPersonWidget; // 0x6f8(0x08)
	struct UDamageComponent* Damage; // 0x700(0x08)
	struct UPointLightComponent* MuzzleLight; // 0x708(0x08)
	struct UHitscanComponent* HitScan; // 0x710(0x08)
	struct UCrosshairAggregator* CrosshairAggregator; // 0x718(0x08)

	void GetGearStatEntry(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.GetGearStatEntry
	void UserConstructionScript(); // Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.UserConstructionScript
	void RecieveEquipped(); // Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.RecieveEquipped
	void Recieve_UpdateMeshses(bool IsFirstPerson); // Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.Recieve_UpdateMeshses
	void ReceiveBeginPlay(); // Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.ReceiveBeginPlay
	void Receive_ReloadBegin(); // Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.Receive_ReloadBegin
	void Receive_ReloadEnd(); // Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.Receive_ReloadEnd
	void ExecuteUbergraph_WPN_SMG_OneHand(int32_t EntryPoint); // Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.ExecuteUbergraph_WPN_SMG_OneHand
};

