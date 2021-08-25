// BlueprintGeneratedClass WPN_DoubleDrills.WPN_DoubleDrills_C
// Size: 0x508 (Inherited: 0x4a8)
struct AWPN_DoubleDrills_C : ADoubleDrillItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a8(0x08)
	struct UFirstPersonWidgetComponent* Widget_Heat; // 0x4b0(0x08)
	struct UFirstPersonWidgetComponent* Widget_Fuel; // 0x4b8(0x08)
	struct UFirstPersonStaticMeshComponent* FirstPersonStaticMesh1; // 0x4c0(0x08)
	struct UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x4c8(0x08)
	struct USceneComponent* OverheatingAudioScene; // 0x4d0(0x08)
	struct UHeatMaterialComponent* HeatMaterial; // 0x4d8(0x08)
	struct UCrosshairAggregator* CrosshairAggregator; // 0x4e0(0x08)
	float NextSplatTime; // 0x4e8(0x04)
	float DefaultFOV; // 0x4ec(0x04)
	struct UWeaponDisplay_Overheat_C* OverheatWidget1; // 0x4f0(0x08)
	struct UWeaponDisplay_Overheat_C* OverheaWidget2; // 0x4f8(0x08)
	struct UWeaponDisplay_Drill_Heat_C* OverheatWidget; // 0x500(0x08)

	void GetGearStatEntry(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function WPN_DoubleDrills.WPN_DoubleDrills_C.GetGearStatEntry
	struct USceneComponent* GetHeatingAudioSceneComponent(); // Function WPN_DoubleDrills.WPN_DoubleDrills_C.GetHeatingAudioSceneComponent
	void OnTemperatureChanged(float Temperature, bool Overheated); // Function WPN_DoubleDrills.WPN_DoubleDrills_C.OnTemperatureChanged
	void Increase FOV(); // Function WPN_DoubleDrills.WPN_DoubleDrills_C.Increase FOV
	void Decrease FOV(); // Function WPN_DoubleDrills.WPN_DoubleDrills_C.Decrease FOV
	void AddedToInventory(struct APlayerCharacter* ItemOwner); // Function WPN_DoubleDrills.WPN_DoubleDrills_C.AddedToInventory
	void BP_OnDrillDamage(); // Function WPN_DoubleDrills.WPN_DoubleDrills_C.BP_OnDrillDamage
	void OnStartDrilling(); // Function WPN_DoubleDrills.WPN_DoubleDrills_C.OnStartDrilling
	void OnStopDrilling(); // Function WPN_DoubleDrills.WPN_DoubleDrills_C.OnStopDrilling
	void Receive_Overheated(); // Function WPN_DoubleDrills.WPN_DoubleDrills_C.Receive_Overheated
	void ReceiveBeginPlay(); // Function WPN_DoubleDrills.WPN_DoubleDrills_C.ReceiveBeginPlay
	void Gunsling(); // Function WPN_DoubleDrills.WPN_DoubleDrills_C.Gunsling
	void RecieveCycledItem(); // Function WPN_DoubleDrills.WPN_DoubleDrills_C.RecieveCycledItem
	void ExecuteUbergraph_WPN_DoubleDrills(int32_t EntryPoint); // Function WPN_DoubleDrills.WPN_DoubleDrills_C.ExecuteUbergraph_WPN_DoubleDrills
};

