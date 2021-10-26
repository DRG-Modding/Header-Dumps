// BlueprintGeneratedClass DEC_IsAttackOffCooldown.DEC_IsAttackOffCooldown_C
// Size: 0xac (Inherited: 0xa0)
struct UDEC_IsAttackOffCooldown_C : UBTDecorator_BlueprintBase {
	UPROPERTY(BlueprintReadWrite) bool Any; 
	UPROPERTY(BlueprintReadWrite) FName AttackName; 

	UFUNCTION(BlueprintCallable) bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);
};

