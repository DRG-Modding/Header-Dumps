// BlueprintGeneratedClass WPN_Pistol_A.WPN_Pistol_A_C
// Size: 0x700 (Inherited: 0x6a8)
struct AWPN_Pistol_A_C : ABasicPistol {
	FPointerToUberGraphFrame UberGraphFrame; // 0x6a8(0x08)
	UStaticMeshComponent* TP_Animation_Mag; // 0x6b0(0x08)
	UFirstPersonStaticMeshComponent* FP_Animation_Mag; // 0x6b8(0x08)
	UFirstPersonWidgetComponent* FirstPersonWidget; // 0x6c0(0x08)
	UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x6c8(0x08)
	UDamageComponent* Damage; // 0x6d0(0x08)
	UFirstPersonStaticMeshComponent* FP_Mag; // 0x6d8(0x08)
	UStaticMeshComponent* TP_Mag; // 0x6e0(0x08)
	UPointLightComponent* MuzzlePointLight; // 0x6e8(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x6f0(0x08)
	UHitscanComponent* HitScan; // 0x6f8(0x08)

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

