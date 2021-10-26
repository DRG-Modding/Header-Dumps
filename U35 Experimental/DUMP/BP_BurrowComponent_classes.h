// BlueprintGeneratedClass BP_BurrowComponent.BP_BurrowComponent_C
// Size: 0xf8 (Inherited: 0xb0)
struct UBP_BurrowComponent_C : UBurrowComponent {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UAnimMontage* BurrowAnimation; 
	UPROPERTY(BlueprintReadWrite) UAnimMontage* UnBurrowAnimation; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnBurrow; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnUnBurrow; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnBurrowComplete; 

	UFUNCTION(BlueprintCallable) void GetPawn(AEnemyDeepPathfinderCharacter* AsEnemy Deep Pathfinder Character);
	UFUNCTION(BlueprintCallable) void PlayBurrow(UAnimMontage* MontageToPlay);
	UFUNCTION(BlueprintCallable) void PlayUnburrow(UAnimMontage* MontageToPlay);
	UFUNCTION(BlueprintCallable) void Unburrow(UAnimMontage* customMontage);
	UFUNCTION(BlueprintCallable) void Burrow(UAnimMontage* customMontage);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_BurrowComponent(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void OnBurrowComplete__DelegateSignature(bool IsEmerging);
	UFUNCTION(BlueprintCallable) void OnUnBurrow__DelegateSignature();
	UFUNCTION(BlueprintCallable) void OnBurrow__DelegateSignature();
};

