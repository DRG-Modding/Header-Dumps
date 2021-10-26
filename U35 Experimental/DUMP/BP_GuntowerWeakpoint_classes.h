// BlueprintGeneratedClass BP_GuntowerWeakpoint.BP_GuntowerWeakpoint_C
// Size: 0x368 (Inherited: 0x330)
struct ABP_GuntowerWeakpoint_C : AGuntowerWeakPoint {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UPawnAfflictionComponent* PawnAffliction; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* ProjectileCollision'; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) UEnemyComponent* enemy; 
	UPROPERTY(BlueprintReadWrite) UPawnStatsComponent* PawnStats; 

	UFUNCTION(BlueprintCallable) FVector GetTargetCenterMass();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void OnExposedChanged(bool isExposed);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_GuntowerWeakpoint(int32_t EntryPoint);
};

