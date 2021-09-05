// BlueprintGeneratedClass WPN_AssaultRifle.WPN_AssaultRifle_C
// Size: 0x700 (Inherited: 0x6b0)
struct AWPN_AssaultRifle_C : AAssaultRifle {
	FPointerToUberGraphFrame UberGraphFrame; // 0x6b0(0x08)
	UStaticMeshComponent* TP_AnimationMag; // 0x6b8(0x08)
	UFirstPersonStaticMeshComponent* FP_AnimationMag; // 0x6c0(0x08)
	UDamageComponent* Damage; // 0x6c8(0x08)
	UFirstPersonWidgetComponent* FirstPersonWidget; // 0x6d0(0x08)
	UStaticMeshComponent* TP_Mag; // 0x6d8(0x08)
	UFirstPersonStaticMeshComponent* FP_Mag; // 0x6e0(0x08)
	UPointLightComponent* MuzzleLight; // 0x6e8(0x08)
	UHitscanComponent* HitScan; // 0x6f0(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x6f8(0x08)

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

