// BlueprintGeneratedClass BP_ConeAttackBase.BP_ConeAttackBase_C
// Size: 0x139 (Inherited: 0x120)
struct UBP_ConeAttackBase_C : USpecialAttackComponent {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UPrimitiveComponent* ConeCollider; 
	UPROPERTY(BlueprintReadWrite) UStatusEffect* StatusEffect; 
	UPROPERTY(BlueprintReadWrite) bool AttackIsActive; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnAttackActionNotify_Event(FName nameValue);
	UFUNCTION(BlueprintCallable) void SetConeCollider(UPrimitiveComponent* ConeCollider);
	UFUNCTION(BlueprintCallable) void Cone_Begin_Overlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	UFUNCTION(BlueprintCallable) void Cone_End_Overlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	UFUNCTION(BlueprintCallable) void OnFrozen(bool IsFrozen);
	UFUNCTION(BlueprintCallable) void ReceiveAbortAttack();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_ConeAttackBase(int32_t EntryPoint);
};

