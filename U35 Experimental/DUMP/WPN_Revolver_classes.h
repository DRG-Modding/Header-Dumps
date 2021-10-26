// BlueprintGeneratedClass WPN_Revolver.WPN_Revolver_C
// Size: 0x73c (Inherited: 0x6f0)
struct AWPN_Revolver_C : ARevoler {
	FPointerToUberGraphFrame UberGraphFrame; // 0x6f0(0x08)
	UFirstPersonWidgetComponent* FirstPersonWidget; // 0x6f8(0x08)
	UStaticMeshComponent* TP_Drum; // 0x700(0x08)
	UFirstPersonStaticMeshComponent* FP_Drum; // 0x708(0x08)
	UDamageComponent* Damage; // 0x710(0x08)
	UPointLightComponent* MuzzlePointLight; // 0x718(0x08)
	UFirstPersonStaticMeshComponent* Mesh_AmmoCounter; // 0x720(0x08)
	UHitscanComponent* HitScan; // 0x728(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x730(0x08)
	float LastSpread; // 0x738(0x04)

	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void UserConstructionScript();
	void Receive_ReloadBegin();
	void Receive_ReloadEnd();
	void ReceiveBeginPlay();
	void OnSpreadChanged_Event_1(float HorizontalSpread, float VerticalSpread, bool isAtRest);
	void OnSkinChanged(USkinEffect* Skin);
	void ExecuteUbergraph_WPN_Revolver(int32_t EntryPoint);
};

