// BlueprintGeneratedClass AIC_Flea.AIC_Flea_C
// Size: 0x368 (Inherited: 0x358)
struct AAIC_Flea_C : AEnemyAIController {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UBehaviorTree* BehaviourTree; 

	UFUNCTION(BlueprintCallable) void ReceivePossess(APawn* PossessedPawn);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_AIC_Flea(int32_t EntryPoint);
};

