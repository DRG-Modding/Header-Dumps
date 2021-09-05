// BlueprintGeneratedClass WPN_DoubleDrills.WPN_DoubleDrills_C
// Size: 0x508 (Inherited: 0x4a8)
struct AWPN_DoubleDrills_C : ADoubleDrillItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4a8(0x08)
	UFirstPersonWidgetComponent* Widget_Heat; // 0x4b0(0x08)
	UFirstPersonWidgetComponent* Widget_Fuel; // 0x4b8(0x08)
	UFirstPersonStaticMeshComponent* FirstPersonStaticMesh1; // 0x4c0(0x08)
	UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x4c8(0x08)
	USceneComponent* OverheatingAudioScene; // 0x4d0(0x08)
	UHeatMaterialComponent* HeatMaterial; // 0x4d8(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x4e0(0x08)
	float NextSplatTime; // 0x4e8(0x04)
	float DefaultFOV; // 0x4ec(0x04)
	UWeaponDisplay_Overheat_C* OverheatWidget1; // 0x4f0(0x08)
	UWeaponDisplay_Overheat_C* OverheaWidget2; // 0x4f8(0x08)
	UWeaponDisplay_Drill_Heat_C* OverheatWidget; // 0x500(0x08)

	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	USceneComponent* GetHeatingAudioSceneComponent();
	void OnTemperatureChanged(float Temperature, bool Overheated);
	void Increase FOV();
	void Decrease FOV();
	void AddedToInventory(APlayerCharacter* ItemOwner);
	void BP_OnDrillDamage();
	void OnStartDrilling();
	void OnStopDrilling();
	void Receive_Overheated();
	void ReceiveBeginPlay();
	void Gunsling();
	void RecieveCycledItem();
	void ExecuteUbergraph_WPN_DoubleDrills(int32_t EntryPoint);
};

