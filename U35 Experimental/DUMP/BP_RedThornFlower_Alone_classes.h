// BlueprintGeneratedClass BP_RedThornFlower_Alone.BP_RedThornFlower_Alone_C
// Size: 0x2b4 (Inherited: 0x220)
struct ABP_RedThornFlower_Alone_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_LightCone001; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* CapsuleCollision; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision1; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) USimpleHealthComponent* SimpleHealth; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_RedVinesFlower_Body_01; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_RedVinesFlower_Head_01; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* Flower; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) FRandomStream Random Seed Stream; 
	UPROPERTY(BlueprintReadWrite) FRotator Spike Direction; 
	UPROPERTY(BlueprintReadWrite) FVector Spike Origin; 
	UPROPERTY(BlueprintReadWrite) float Spike Distribution Angle; 
	UPROPERTY(BlueprintReadWrite) int32_t NumSpikes; 
	UPROPERTY(BlueprintReadWrite) float Spike Origin Height; 

	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_HealthChangedSig__DelegateSignature(float Health);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_RedThornFlower_Alone(int32_t EntryPoint);
};

