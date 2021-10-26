// BlueprintGeneratedClass WPN_SMG_OneHand.WPN_SMG_OneHand_C
// Size: 0x774 (Inherited: 0x718)
struct AWPN_SMG_OneHand_C : AElectricalSMG {
	FPointerToUberGraphFrame UberGraphFrame; // 0x718(0x08)
	UParticleSystemComponent* ParticleSystem; // 0x720(0x08)
	UFirstPersonParticleSystemComponent* FirstPersonParticleSystem; // 0x728(0x08)
	UStaticMeshComponent* TP_SMG_MAG; // 0x730(0x08)
	UFirstPersonStaticMeshComponent* SMG_Mag_Full; // 0x738(0x08)
	UFirstPersonWidgetComponent* FirstPersonWidget; // 0x740(0x08)
	UDamageComponent* Damage; // 0x748(0x08)
	UPointLightComponent* MuzzleLight; // 0x750(0x08)
	UHitscanComponent* HitScan; // 0x758(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x760(0x08)
	FVector SalineConductorScale; // 0x768(0x0c)

	void GetElectrutionChance(float Chance);
	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Receive_ReloadBegin();
	void Receive_ReloadEnd();
	void CustomEvent1(UItemUpgrade* Event);
	void ElectriyPlatform(FHitResult Hit, bool alwaysPenetrate);
	void Recieve_UpdateMeshses(bool IsFirstPerson);
	void RecieveEquipped();
	void Server_OnHit(FVector Location);
	void ExecuteUbergraph_WPN_SMG_OneHand(int32_t EntryPoint);
};

