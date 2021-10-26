// BlueprintGeneratedClass BP_Azure_UmbraSeeker.BP_Azure_UmbraSeeker_C
// Size: 0x2a8 (Inherited: 0x220)
struct ABP_Azure_UmbraSeeker_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule3; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule2; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule1; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* SK_Biome_AzureWeald_Flower_Godetia; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* ParticleSystem; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* AzureFlowerIdle_Cue; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) USimpleHealthComponent* SimpleHealth; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_Biome_AzureWeald_Flower_01; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 

	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Azure_UmbraSeeker(int32_t EntryPoint);
};

