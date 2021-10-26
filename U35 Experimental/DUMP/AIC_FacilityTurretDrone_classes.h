// BlueprintGeneratedClass AIC_FacilityTurretDrone.AIC_FacilityTurretDrone_C
// Size: 0x3a1 (Inherited: 0x358)
struct AAIC_FacilityTurretDrone_C : AEnemyAIController {
	FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	AFacilityTurret* TurretClass; // 0x360(0x08)
	int32_t TurretVersion; // 0x368(0x04)
	FTransform TargetTransform; // 0x370(0x30)
	bool IsSetup; // 0x3a0(0x01)

	void SetTargetTransform(FTransform TargetTransform);
	void ReceivePossess(APawn* PossessedPawn);
	void ExecuteUbergraph_AIC_FacilityTurretDrone(int32_t EntryPoint);
};

