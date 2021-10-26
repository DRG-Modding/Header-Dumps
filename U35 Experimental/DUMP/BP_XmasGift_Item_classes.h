// BlueprintGeneratedClass BP_XmasGift_Item.BP_XmasGift_Item_C
// Size: 0x2b0 (Inherited: 0x220)
struct ABP_XmasGift_Item_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) USimpleHealthComponent* SimpleHealth; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) UParticleSystem* deathParticles; 
	UPROPERTY(BlueprintReadWrite) USoundCue* deathSound; 
	UPROPERTY(BlueprintReadWrite) TArray<UStaticMesh*> GiftOptions; 
	UPROPERTY(BlueprintReadWrite) USoundBase* HoHoHo; 
	UPROPERTY(BlueprintReadWrite) TArray<UMaterialInterface*> GiftMats; 
	UPROPERTY(BlueprintReadWrite) bool CanOpen; 
	UPROPERTY(BlueprintReadWrite) UStaticMesh* CurrentGiftOption; 
	UPROPERTY(BlueprintReadWrite) UMaterialInterface* CurrentMat1; 
	UPROPERTY(BlueprintReadWrite) UMaterialInterface* CurrentMat2; 

	UFUNCTION(BlueprintCallable) void RandomizeGift();
	UFUNCTION(BlueprintCallable) void OnRep_CurrentMat2();
	UFUNCTION(BlueprintCallable) void OnRep_CurrentMat1();
	UFUNCTION(BlueprintCallable) void OnRep_CurrentGiftOption();
	UFUNCTION(BlueprintCallable) void XmasLaugh(FVector Location);
	UFUNCTION(BlueprintCallable) void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_XmasGift_Item(int32_t EntryPoint);
};

