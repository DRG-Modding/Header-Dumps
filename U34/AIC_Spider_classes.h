// BlueprintGeneratedClass AIC_Spider.AIC_Spider_C
// Size: 0x374 (Inherited: 0x358)
struct AAIC_Spider_C : AFSDAIController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UBehaviorTree* BehaviorTree; // 0x360(0x08)
	struct UEnemyHealthComponent* EnemyHealthComponent; // 0x368(0x08)
	float SpeedModifier; // 0x370(0x04)

	void ReceiveBeginPlay(); // Function AIC_Spider.AIC_Spider_C.ReceiveBeginPlay
	void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(struct APawn* Pawn); // Function AIC_Spider.AIC_Spider_C.BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature
	void OnDeath(struct UHealthComponentBase* HealthComponent); // Function AIC_Spider.AIC_Spider_C.OnDeath
	void ReceivePossess(struct APawn* PossessedPawn); // Function AIC_Spider.AIC_Spider_C.ReceivePossess
	void Speed Changer(); // Function AIC_Spider.AIC_Spider_C.Speed Changer
	void attackingChanged(bool IsAttacking); // Function AIC_Spider.AIC_Spider_C.attackingChanged
	void StartSpeedModifier(); // Function AIC_Spider.AIC_Spider_C.StartSpeedModifier
	void ExecuteUbergraph_AIC_Spider(int32_t EntryPoint); // Function AIC_Spider.AIC_Spider_C.ExecuteUbergraph_AIC_Spider
};

