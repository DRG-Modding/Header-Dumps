// BlueprintGeneratedClass AIC_FlyingCritterBase.AIC_FlyingCritterBase_C
// Size: 0x368 (Inherited: 0x358)
struct AAIC_FlyingCritterBase_C : AEnemyAIController {
	FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	UBehaviorTree* BehaviourTree; // 0x360(0x08)

	void ReceivePossess(APawn* PossessedPawn);
	void ExecuteUbergraph_AIC_FlyingCritterBase(int32_t EntryPoint);
};

