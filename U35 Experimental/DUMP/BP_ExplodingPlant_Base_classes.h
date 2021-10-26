// BlueprintGeneratedClass BP_ExplodingPlant_Base.BP_ExplodingPlant_Base_C
// Size: 0x308 (Inherited: 0x220)
struct ABP_ExplodingPlant_Base_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UDamageComponent* Damage; 
	UPROPERTY(BlueprintReadWrite) UObjectTemperatureComponent* ObjectTemperature; 
	UPROPERTY(BlueprintReadWrite) UStaticObjectAfflictionComponent* StaticObjectAffliction; 
	UPROPERTY(BlueprintReadWrite) UStatusEffectsComponent* StatusEffects; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) USimpleHealthComponent* SimpleHealth; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) FVector Timeline_InflateAnim_InflateVector_21E5AF314623B026BED1ED9ADE4D198B; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_InflateAnim__Direction_21E5AF314623B026BED1ED9ADE4D198B; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_InflateAnim; 
	UPROPERTY(BlueprintReadWrite) FScaledEffect ExplosionParticles; 
	UPROPERTY(BlueprintReadWrite) FVector ExplosionOffset; 
	UPROPERTY(BlueprintReadWrite) USoundCue* ExplosionAudio; 
	UPROPERTY(BlueprintReadWrite) float CarveDiamter; 
	UPROPERTY(BlueprintReadWrite) UMaterialInstanceDynamic* Dynamic Material; 
	UPROPERTY(BlueprintReadWrite) float InitialHealth; 
	UPROPERTY(BlueprintReadWrite) FVector MeshScale; 
	UPROPERTY(BlueprintReadWrite) float InflationScale; 
	UPROPERTY(BlueprintReadWrite) float BaseMaterialOffset; 
	UPROPERTY(BlueprintReadWrite) float BaseMaterialEmissive; 
	UPROPERTY(BlueprintReadWrite) float BaseLightIntensity; 
	UPROPERTY(BlueprintReadWrite) UMaterialInterface* Decal; 

	UFUNCTION(BlueprintCallable) float DistanceToLocalPlayer();
	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void Timeline_InflateAnim__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_InflateAnim__UpdateFunc();
	UFUNCTION(BlueprintCallable) void ReceiveTick(float DeltaSeconds);
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DamageSig__DelegateSignature(float amount);
	UFUNCTION(BlueprintCallable) void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void OnTerrainPointRemoved();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_ExplodingPlant_Base(int32_t EntryPoint);
};

