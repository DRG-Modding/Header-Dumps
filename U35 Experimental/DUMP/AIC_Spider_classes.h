// BlueprintGeneratedClass AIC_Spider.AIC_Spider_C
// Size: 0x374 (Inherited: 0x358)
struct AAIC_Spider_C : AFSDAIController {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UBehaviorTree* BehaviorTree; 
	UPROPERTY(BlueprintReadWrite) UEnemyHealthComponent* EnemyHealthComponent; 
	UPROPERTY(BlueprintReadWrite) float SpeedModifier; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(APawn* Pawn);
	UFUNCTION(BlueprintCallable) void OnDeath(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void ReceivePossess(APawn* PossessedPawn);
	UFUNCTION(BlueprintCallable) void Speed Changer();
	UFUNCTION(BlueprintCallable) void attackingChanged(bool IsAttacking);
	UFUNCTION(BlueprintCallable) void StartSpeedModifier();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_AIC_Spider(int32_t EntryPoint);
};

