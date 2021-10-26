// BlueprintGeneratedClass AIC_FlyingCritterBase.AIC_FlyingCritterBase_C
// Size: 0x368 (Inherited: 0x358)
struct AAIC_FlyingCritterBase_C : AEnemyAIController {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UBehaviorTree* BehaviourTree; 

	UFUNCTION(BlueprintCallable) void ReceivePossess(APawn* PossessedPawn);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_AIC_FlyingCritterBase(int32_t EntryPoint);
};

