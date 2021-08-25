// BlueprintGeneratedClass AIC_Flea.AIC_Flea_C
// Size: 0x368 (Inherited: 0x358)
struct AAIC_Flea_C : AEnemyAIController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UBehaviorTree* BehaviourTree; // 0x360(0x08)

	void ReceivePossess(struct APawn* PossessedPawn); // Function AIC_Flea.AIC_Flea_C.ReceivePossess
	void ExecuteUbergraph_AIC_Flea(int32_t EntryPoint); // Function AIC_Flea.AIC_Flea_C.ExecuteUbergraph_AIC_Flea
};

