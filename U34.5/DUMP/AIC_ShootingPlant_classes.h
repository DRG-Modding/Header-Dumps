// BlueprintGeneratedClass AIC_ShootingPlant.AIC_ShootingPlant_C
// Size: 0x360 (Inherited: 0x358)
struct AAIC_ShootingPlant_C : AFSDAIController {
	FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)

	void Recieve_BlackboardValueChanged(FName KeyName);
	void OnDeath(UHealthComponentBase* HealthComponent);
	void ReceivePossess(APawn* PossessedPawn);
	void StartBehavior();
	void ExecuteUbergraph_AIC_ShootingPlant(int32_t EntryPoint);
};

