// BlueprintGeneratedClass DefencePointActor_Base.DefencePointActor_Base_C
// Size: 0x298 (Inherited: 0x260)
struct ADefencePointActor_Base_C : ADefensePointActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Terrain scanner mesh; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* DistressSphere; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* UseableCollider; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 

	UFUNCTION(BlueprintCallable) void DefenseStart();
	UFUNCTION(BlueprintCallable) void OnDefenseSucceed();
	UFUNCTION(BlueprintCallable) void OnDefenceFailed();
	UFUNCTION(BlueprintCallable) void DefenseComplete();
	UFUNCTION(BlueprintCallable) void DefenseFail();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_DefencePointActor_Base(int32_t EntryPoint);
};

