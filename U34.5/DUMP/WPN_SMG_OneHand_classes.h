// BlueprintGeneratedClass WPN_SMG_OneHand.WPN_SMG_OneHand_C
// Size: 0x720 (Inherited: 0x6d0)
struct AWPN_SMG_OneHand_C : AElectricalSMG {
	FPointerToUberGraphFrame UberGraphFrame; // 0x6d0(0x08)
	UParticleSystemComponent* ParticleSystem; // 0x6d8(0x08)
	UFirstPersonParticleSystemComponent* FirstPersonParticleSystem; // 0x6e0(0x08)
	UStaticMeshComponent* TP_SMG_MAG; // 0x6e8(0x08)
	UFirstPersonStaticMeshComponent* SMG_Mag_Full; // 0x6f0(0x08)
	UFirstPersonWidgetComponent* FirstPersonWidget; // 0x6f8(0x08)
	UDamageComponent* Damage; // 0x700(0x08)
	UPointLightComponent* MuzzleLight; // 0x708(0x08)
	UHitscanComponent* HitScan; // 0x710(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x718(0x08)

	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void UserConstructionScript();
	void RecieveEquipped();
	void Recieve_UpdateMeshses(bool IsFirstPerson);
	void ReceiveBeginPlay();
	void Receive_ReloadBegin();
	void Receive_ReloadEnd();
	void ExecuteUbergraph_WPN_SMG_OneHand(int32_t EntryPoint);
};

