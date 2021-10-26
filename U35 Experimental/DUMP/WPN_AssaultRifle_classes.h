// BlueprintGeneratedClass WPN_AssaultRifle.WPN_AssaultRifle_C
// Size: 0x748 (Inherited: 0x6f8)
struct AWPN_AssaultRifle_C : AAssaultRifle {
	FPointerToUberGraphFrame UberGraphFrame; // 0x6f8(0x08)
	UStaticMeshComponent* TP_AnimationMag; // 0x700(0x08)
	UFirstPersonStaticMeshComponent* FP_AnimationMag; // 0x708(0x08)
	UDamageComponent* Damage; // 0x710(0x08)
	UFirstPersonWidgetComponent* FirstPersonWidget; // 0x718(0x08)
	UStaticMeshComponent* TP_Mag; // 0x720(0x08)
	UFirstPersonStaticMeshComponent* FP_Mag; // 0x728(0x08)
	UPointLightComponent* MuzzleLight; // 0x730(0x08)
	UHitscanComponent* HitScan; // 0x738(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x740(0x08)

	UStaticMeshComponent* Receive_GetTPAnimationEventMesh();
	UFirstPersonStaticMeshComponent* Receive_GetFPAnimationEventMesh();
	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void UserConstructionScript();
	void RecieveEquipped();
	void Recieve_UpdateMeshses(bool IsFirstPerson);
	void ReceiveBeginPlay();
	void Receive_ReloadBegin();
	void Receive_ReloadEnd();
	void OnSkinChanged(USkinEffect* Skin);
	void ExecuteUbergraph_WPN_AssaultRifle(int32_t EntryPoint);
};

