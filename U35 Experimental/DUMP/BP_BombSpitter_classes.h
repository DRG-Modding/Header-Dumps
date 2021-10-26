// BlueprintGeneratedClass BP_BombSpitter.BP_BombSpitter_C
// Size: 0x2a8 (Inherited: 0x220)
struct ABP_BombSpitter_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* BombSpitterMesh; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* ProjectileFake; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* ProjectileSpawnLocation; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule; 
	UPROPERTY(BlueprintReadWrite) USimpleHealthComponent* SimpleHealth; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) float Grow_Scale_E6213CB8461859CFDD77B8B3B4302959; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Grow__Direction_E6213CB8461859CFDD77B8B3B4302959; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Grow; 
	UPROPERTY(BlueprintReadWrite) bool IsReady; 
	UPROPERTY(BlueprintReadWrite) float ReloadTime; 
	UPROPERTY(BlueprintReadWrite) UMaterialInstanceDynamic* DynamicMaterial; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnChangeState; 

	UFUNCTION(BlueprintCallable) void OnRep_IsReady();
	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void Grow__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Grow__UpdateFunc();
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
	UFUNCTION(BlueprintCallable) void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void OnTerrainPointRemoved();
	UFUNCTION(BlueprintCallable) void Shoot();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_BombSpitter(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void OnChangeState__DelegateSignature(bool Closed, bool Open);
};

