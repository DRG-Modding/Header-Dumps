// BlueprintGeneratedClass BP_GunkSeed_Hanger.BP_GunkSeed_Hanger_C
// Size: 0x2b4 (Inherited: 0x220)
struct ABP_GunkSeed_Hanger_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* AoeOverlapSphere; 
	UPROPERTY(BlueprintReadWrite) UHealthDamageTracker* HealthDamageTracker; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* Root; 
	UPROPERTY(BlueprintReadWrite) UInstantUsable* InstantUsable; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) USimpleHealthComponent* SimpleHealth; 
	UPROPERTY(BlueprintReadWrite) float MinForce; 
	UPROPERTY(BlueprintReadWrite) float MaxForce; 
	UPROPERTY(BlueprintReadWrite) FVector EndPointOffset; 
	UPROPERTY(BlueprintReadWrite) bool HasSeed; 
	UPROPERTY(BlueprintReadWrite) ABP_GunkSeed_C* GunkSeed; 
	UPROPERTY(BlueprintReadWrite) FVector SlapForce; 

	UFUNCTION(BlueprintCallable) void OnRep_SlapForce();
	UFUNCTION(BlueprintCallable) void OnRep_HasSeed();
	UFUNCTION(BlueprintCallable) void DropSeed();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_2_BodypartHitSig__DelegateSignature(float amount, float BaseAmount, UPrimitiveComponent* Component, UFSDPhysicalMaterial* PhysMat, FName BoneName);
	UFUNCTION(BlueprintCallable) void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	UFUNCTION(BlueprintCallable) void BndEvt__HealthDamageTracker_K2Node_ComponentBoundEvent_5_DamageSig__DelegateSignature(float amount);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_GunkSeed_Hanger(int32_t EntryPoint);
};

