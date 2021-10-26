// BlueprintGeneratedClass ENE_ShootingPlant.ENE_ShootingPlant_C
// Size: 0x398 (Inherited: 0x348)
struct AENE_ShootingPlant_C : AShootingPlant {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UProjectileAttackComponent* ProjectileAttack; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* WEakspot2; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Weakspot; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UPawnSensingComponent* PawnSensing; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 

	UFUNCTION(BlueprintCallable) USkeletalMeshComponent* GetMesh();
	UFUNCTION(BlueprintCallable) void BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void BndEvt__Health_K2Node_ComponentBoundEvent_31_HealthChangedSig__DelegateSignature(float Health);
	UFUNCTION(BlueprintCallable) void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(APawn* Pawn);
	UFUNCTION(BlueprintCallable) void OnFrozen(AActor* Source);
	UFUNCTION(BlueprintCallable) void OnUnFrozen();
	UFUNCTION(BlueprintCallable) void OnRep_Target();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_ShootingPlant(int32_t EntryPoint);
};

