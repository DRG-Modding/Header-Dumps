// BlueprintGeneratedClass WPN_Revolver.WPN_Revolver_C
// Size: 0x6f4 (Inherited: 0x6a8)
struct AWPN_Revolver_C : ARevoler {
	FPointerToUberGraphFrame UberGraphFrame; // 0x6a8(0x08)
	UFirstPersonWidgetComponent* FirstPersonWidget; // 0x6b0(0x08)
	UStaticMeshComponent* TP_Drum; // 0x6b8(0x08)
	UFirstPersonStaticMeshComponent* FP_Drum; // 0x6c0(0x08)
	UDamageComponent* Damage; // 0x6c8(0x08)
	UPointLightComponent* MuzzlePointLight; // 0x6d0(0x08)
	UFirstPersonStaticMeshComponent* Mesh_AmmoCounter; // 0x6d8(0x08)
	UHitscanComponent* HitScan; // 0x6e0(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x6e8(0x08)
	float LastSpread; // 0x6f0(0x04)

	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void UserConstructionScript();
	void Receive_ReloadBegin();
	void Receive_ReloadEnd();
	void ReceiveBeginPlay();
	void OnSpreadChanged_Event_1(float HorizontalSpread, float VerticalSpread, bool isAtRest);
	void OnSkinChanged(USkinEffect* Skin);
	void ExecuteUbergraph_WPN_Revolver(int32_t EntryPoint);
};

