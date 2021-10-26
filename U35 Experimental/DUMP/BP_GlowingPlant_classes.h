// BlueprintGeneratedClass BP_GlowingPlant.BP_GlowingPlant_C
// Size: 0x340 (Inherited: 0x290)
struct ABP_GlowingPlant_C : AGlowPlant {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* MainLightComponent; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision; 
	UPROPERTY(BlueprintReadWrite) USimpleHealthComponent* SimpleHealth; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight4; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight3; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight2; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight1; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight5; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Collider5; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Collider4; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Collider3; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Collider2; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Collider1; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* GlowPart5; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* GlowPart4; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* GlowPart3; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* GlowPart2; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* GlowPart1; 

	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_BodypartHitSig__DelegateSignature(float amount, float BaseAmount, UPrimitiveComponent* Component, UFSDPhysicalMaterial* PhysMat, FName BoneName);
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void OnTerrainPointRemoved();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_GlowingPlant(int32_t EntryPoint);
};

