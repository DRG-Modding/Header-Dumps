// BlueprintGeneratedClass BP_StabberVine_Claw.BP_StabberVine_Claw_C
// Size: 0x264 (Inherited: 0x220)
struct ABP_StabberVine_Claw_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UEnemyComponent* enemy; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_StabberVine_Blade; 
	UPROPERTY(BlueprintReadWrite) UMaterialInstanceDynamic* Material; 
	UPROPERTY(BlueprintReadWrite) FLinearColor DissolveTint1; 
	UPROPERTY(BlueprintReadWrite) FLinearColor DissolveTint2; 
	UPROPERTY(BlueprintReadWrite) float DissolveDuration; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void Dissolve();
	UFUNCTION(BlueprintCallable) void AddImpulse();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_StabberVine_Claw(int32_t EntryPoint);
};

