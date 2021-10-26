// BlueprintGeneratedClass BP_CaretakerDroneAction_UNUSED.BP_CaretakerDroneAction_UNUSED_C
// Size: 0x138 (Inherited: 0xe0)
struct UBP_CaretakerDroneAction_UNUSED_C : UBP_CaretakerActionBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xe0(0x08)
	int32_t DroneCount; // 0xe8(0x04)
	int32_t MaxDroneCount; // 0xec(0x04)
	int32_t DronesPerWave; // 0xf0(0x04)
	FMulticastInlineDelegate OnDroneKilled; // 0xf8(0x10)
	FMulticastInlineDelegate OnAllDronesKilled; // 0x108(0x10)
	TArray<APawn*> Drones; // 0x118(0x10)
	TArray<FName> BuildLocations; // 0x128(0x10)

	bool CanUse();
	void OnStarted();
	void DroneSpawned(APawn* enemy);
	void DroneKilled(UHealthComponentBase* HealthComponent);
	void ExecuteUbergraph_BP_CaretakerDroneAction_UNUSED(int32_t EntryPoint);
	void OnAllDronesKilled__DelegateSignature();
	void OnDroneKilled__DelegateSignature();
};

