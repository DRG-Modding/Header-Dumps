// BlueprintGeneratedClass AIC_FlyingCritterBase.AIC_FlyingCritterBase_C
// Size: 0x368 (Inherited: 0x358)
struct AAIC_FlyingCritterBase_C : AEnemyAIController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UBehaviorTree* BehaviourTree; // 0x360(0x08)

	void ReceivePossess(struct APawn* PossessedPawn); // Function AIC_FlyingCritterBase.AIC_FlyingCritterBase_C.ReceivePossess
	void ExecuteUbergraph_AIC_FlyingCritterBase(int32_t EntryPoint); // Function AIC_FlyingCritterBase.AIC_FlyingCritterBase_C.ExecuteUbergraph_AIC_FlyingCritterBase
};

