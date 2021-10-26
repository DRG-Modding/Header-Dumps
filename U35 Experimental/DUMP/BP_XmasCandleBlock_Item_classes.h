// BlueprintGeneratedClass BP_XmasCandleBlock_Item.BP_XmasCandleBlock_Item_C
// Size: 0x2dc (Inherited: 0x220)
struct ABP_XmasCandleBlock_Item_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* MainLight; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight3; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh4; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight2; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh3; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight1; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh2; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh1; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) USimpleHealthComponent* SimpleHealth; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) float CandleFlicker_LightIntensityMod_9FFB83D746EE53EE1A830883D2DC356F; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection CandleFlicker__Direction_9FFB83D746EE53EE1A830883D2DC356F; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* CandleFlicker; 
	UPROPERTY(BlueprintReadWrite) UParticleSystem* deathParticles; 
	UPROPERTY(BlueprintReadWrite) USoundCue* deathSound; 
	UPROPERTY(BlueprintReadWrite) TArray<UMaterialInterface*> Mats; 
	UPROPERTY(BlueprintReadWrite) int32_t NumHits; 
	UPROPERTY(BlueprintReadWrite) float Originalintensity; 
	UPROPERTY(BlueprintReadWrite) float TargetIntensity; 

	UFUNCTION(BlueprintCallable) void CandleFlicker__FinishedFunc();
	UFUNCTION(BlueprintCallable) void CandleFlicker__UpdateFunc();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void OnTerrainPointRemoved();
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_XmasCandleBlock_Item(int32_t EntryPoint);
};

