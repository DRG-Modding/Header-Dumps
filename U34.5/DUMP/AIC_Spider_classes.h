// BlueprintGeneratedClass AIC_Spider.AIC_Spider_C
// Size: 0x374 (Inherited: 0x358)
struct AAIC_Spider_C : AFSDAIController {
	FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	UBehaviorTree* BehaviorTree; // 0x360(0x08)
	UEnemyHealthComponent* EnemyHealthComponent; // 0x368(0x08)
	float SpeedModifier; // 0x370(0x04)

	void ReceiveBeginPlay();
	void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(APawn* Pawn);
	void OnDeath(UHealthComponentBase* HealthComponent);
	void ReceivePossess(APawn* PossessedPawn);
	void Speed Changer();
	void attackingChanged(bool IsAttacking);
	void StartSpeedModifier();
	void ExecuteUbergraph_AIC_Spider(int32_t EntryPoint);
};

