// BlueprintGeneratedClass WPN_Pistol_A.WPN_Pistol_A_C
// Size: 0x748 (Inherited: 0x6f0)
struct AWPN_Pistol_A_C : ABasicPistol {
	FPointerToUberGraphFrame UberGraphFrame; // 0x6f0(0x08)
	UStaticMeshComponent* TP_Animation_Mag; // 0x6f8(0x08)
	UFirstPersonStaticMeshComponent* FP_Animation_Mag; // 0x700(0x08)
	UFirstPersonWidgetComponent* FirstPersonWidget; // 0x708(0x08)
	UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x710(0x08)
	UDamageComponent* Damage; // 0x718(0x08)
	UFirstPersonStaticMeshComponent* FP_Mag; // 0x720(0x08)
	UStaticMeshComponent* TP_Mag; // 0x728(0x08)
	UPointLightComponent* MuzzlePointLight; // 0x730(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x738(0x08)
	UHitscanComponent* HitScan; // 0x740(0x08)

	UStaticMeshComponent* Receive_GetTPAnimationEventMesh();
	UFirstPersonStaticMeshComponent* Receive_GetFPAnimationEventMesh();
	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Receive_ReloadBegin();
	void Receive_ReloadEnd();
	void OnSkinChanged(USkinEffect* Skin);
	void ExecuteUbergraph_WPN_Pistol_A(int32_t EntryPoint);
};

