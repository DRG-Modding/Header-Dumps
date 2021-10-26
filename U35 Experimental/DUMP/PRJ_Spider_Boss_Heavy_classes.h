// BlueprintGeneratedClass PRJ_Spider_Boss_Heavy.PRJ_Spider_Boss_Heavy_C
// Size: 0x334 (Inherited: 0x2f0)
struct APRJ_Spider_Boss_Heavy_C : AProjectile {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UNiagaraComponent* Niagara; 
	UPROPERTY(BlueprintReadWrite) URotatingMovementComponent* RotatingMovement; 
	UPROPERTY(BlueprintReadWrite) UDamageComponent* Damage; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh; 
	UPROPERTY(BlueprintReadWrite) float MaxLevitation; 
	UPROPERTY(BlueprintReadWrite) float GravityScale; 
	UPROPERTY(BlueprintReadWrite) FRotator RotationRate; 

	UFUNCTION(BlueprintCallable) void OnRep_RotationRate();
	UFUNCTION(BlueprintCallable) void OnRep_GravityScale();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_PRJ_Spider_Boss_Heavy(int32_t EntryPoint);
};

