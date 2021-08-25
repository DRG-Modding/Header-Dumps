// BlueprintGeneratedClass AIC_HydraWeed_Shooter.AIC_HydraWeed_Shooter_C
// Size: 0x360 (Inherited: 0x358)
struct AAIC_HydraWeed_Shooter_C : AFSDAIController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)

	void Recieve_BlackboardValueChanged(struct FName KeyName); // Function AIC_HydraWeed_Shooter.AIC_HydraWeed_Shooter_C.Recieve_BlackboardValueChanged
	void OnDeath(struct UHealthComponentBase* HealthComponent); // Function AIC_HydraWeed_Shooter.AIC_HydraWeed_Shooter_C.OnDeath
	void ReceivePossess(struct APawn* PossessedPawn); // Function AIC_HydraWeed_Shooter.AIC_HydraWeed_Shooter_C.ReceivePossess
	void StartBehavior(); // Function AIC_HydraWeed_Shooter.AIC_HydraWeed_Shooter_C.StartBehavior
	void ExecuteUbergraph_AIC_HydraWeed_Shooter(int32_t EntryPoint); // Function AIC_HydraWeed_Shooter.AIC_HydraWeed_Shooter_C.ExecuteUbergraph_AIC_HydraWeed_Shooter
};

