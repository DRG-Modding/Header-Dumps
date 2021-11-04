// BlueprintGeneratedClass BP_CaretakerTurretAction.BP_CaretakerTurretAction_C
// Size: 0x13e (Inherited: 0xe0)
struct UBP_CaretakerTurretAction_C : UBP_CaretakerActionBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xe0(0x08)
	TArray<FTransform> TurretTransforms; // 0xe8(0x10)
	TArray<ABP_FacilityTurretDrone_C*> ChosenTurrets; // 0xf8(0x10)
	TArray<AActor*> Turrets; // 0x108(0x10)
	FTimerHandle TurretWave_Handle; // 0x118(0x08)
	int32_t BaseMaxTurrets; // 0x120(0x04)
	int32_t ExtraMaxTurretsPerPlayer; // 0x124(0x04)
	int32_t MaxTurrets; // 0x128(0x04)
	int32_t TurretCount; // 0x12c(0x04)
	int32_t NumTurretsPerWave; // 0x130(0x04)
	int32_t NumTurretsRemainToTriggerNewWave; // 0x134(0x04)
	int32_t NumTurretsInFirstWave; // 0x138(0x04)
	bool CanSpawn; // 0x13c(0x01)
	bool CanReplenish; // 0x13d(0x01)

	bool CanUse();
	void OnStarted();
	void Turret wave();
	void OnStopped();
	void SetupDrone(ABP_FacilityTurretDrone_C* Drone, FTransform Transform);
	void TurretSpawned(AFacilityTurret* spawnedTurret);
	void TurretDied(UHealthComponentBase* HealthComponent);
	void OnTriggered();
	void SpawnTurrets(int32_t amountOfTurrets);
	void ActivateLights();
	void DeactivateLights();
	void ExecuteUbergraph_BP_CaretakerTurretAction(int32_t EntryPoint);
};

