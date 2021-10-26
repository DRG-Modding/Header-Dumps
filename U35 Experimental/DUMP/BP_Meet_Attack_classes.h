// BlueprintGeneratedClass BP_Meet_Attack.BP_Meet_Attack_C
// Size: 0xfc (Inherited: 0xf0)
struct UBP_Meet_Attack_C : UAttackBaseComponent {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) float BurrowDuration; 

	UFUNCTION(BlueprintCallable) void ReceiveAbortAttack();
	UFUNCTION(BlueprintCallable) void StartMeeting();
	UFUNCTION(BlueprintCallable) void OnUnburrowed(bool IsEmerging);
	UFUNCTION(BlueprintCallable) void OnBurrowedDone(bool IsEmerging);
	UFUNCTION(BlueprintCallable) void ReceiveAttackTarget(AActor* Target);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Meet_Attack(int32_t EntryPoint);
};

