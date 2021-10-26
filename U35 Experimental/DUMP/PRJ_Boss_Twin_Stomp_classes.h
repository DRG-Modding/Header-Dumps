// BlueprintGeneratedClass PRJ_Boss_Twin_Stomp.PRJ_Boss_Twin_Stomp_C
// Size: 0x318 (Inherited: 0x2f0)
struct APRJ_Boss_Twin_Stomp_C : AProjectile {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* Twin_B_ProjectileBarrage_Cue; 
	UPROPERTY(BlueprintReadWrite) UNiagaraComponent* Niagara; 
	UPROPERTY(BlueprintReadWrite) UDamageComponent* Damage; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* Box; 

	UFUNCTION(BlueprintCallable) void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void CustomEvent_1(AActor* DestroyedActor);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_PRJ_Boss_Twin_Stomp(int32_t EntryPoint);
};

