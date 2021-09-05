// BlueprintGeneratedClass AIC_HydraWeed_Shooter.AIC_HydraWeed_Shooter_C
// Size: 0x360 (Inherited: 0x358)
struct AAIC_HydraWeed_Shooter_C : AFSDAIController {
	FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)

	void Recieve_BlackboardValueChanged(FName KeyName);
	void OnDeath(UHealthComponentBase* HealthComponent);
	void ReceivePossess(APawn* PossessedPawn);
	void StartBehavior();
	void ExecuteUbergraph_AIC_HydraWeed_Shooter(int32_t EntryPoint);
};

