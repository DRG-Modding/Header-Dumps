// BlueprintGeneratedClass BP_FloatingLightPlant2.BP_FloatingLightPlant2_C
// Size: 0x304 (Inherited: 0x220)
struct ABP_FloatingLightPlant2_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* SK_FloatingLightPlant_A; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) USimpleHealthComponent* SimpleHealth; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* ProximityTrigger; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) float VariationLoop_Variation_1D8B412C4585AB2E56DAE8A298D8B484; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection VariationLoop__Direction_1D8B412C4585AB2E56DAE8A298D8B484; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* VariationLoop; 
	UPROPERTY(BlueprintReadWrite) float FloaterValues_Brightness_D91E97D14BA4C776610A308453452A23; 
	UPROPERTY(BlueprintReadWrite) float FloaterValues_Height_D91E97D14BA4C776610A308453452A23; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection FloaterValues__Direction_D91E97D14BA4C776610A308453452A23; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* FloaterValues; 
	UPROPERTY(BlueprintReadWrite) float BaseFloaterHeight; 
	UPROPERTY(BlueprintReadWrite) float FloaterHeightVariation; 
	UPROPERTY(BlueprintReadWrite) UMaterialInstanceDynamic* DynamicMaterial; 
	UPROPERTY(BlueprintReadWrite) float BaseMaterialEmmisive; 
	UPROPERTY(BlueprintReadWrite) float TimelineBrightnessChangeOnHit; 
	UPROPERTY(BlueprintReadWrite) float TimelineVariationWhileFloating; 
	UPROPERTY(BlueprintReadWrite) float TimelineBrightness; 
	UPROPERTY(BlueprintReadWrite) float TimelineHeight; 
	UPROPERTY(BlueprintReadWrite) float BaseIntensity; 
	UPROPERTY(BlueprintReadWrite) float BaseFloaterScale; 
	UPROPERTY(BlueprintReadWrite) bool HIdeFloater; 
	UPROPERTY(BlueprintReadWrite) FName Param_EmmisiveMult; 
	UPROPERTY(BlueprintReadWrite) FName Param_DisplacementSpeed; 
	UPROPERTY(BlueprintReadWrite) FName Param_DisplacementIntensity; 
	UPROPERTY(BlueprintReadWrite) float BaseMaterialDisplacement; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnChangeState; 
	UPROPERTY(BlueprintReadWrite) float HideDuration; 

	UFUNCTION(BlueprintCallable) void OnRep_HIdeFloater();
	UFUNCTION(BlueprintCallable) void VariationLoop__FinishedFunc();
	UFUNCTION(BlueprintCallable) void VariationLoop__UpdateFunc();
	UFUNCTION(BlueprintCallable) void FloaterValues__FinishedFunc();
	UFUNCTION(BlueprintCallable) void FloaterValues__UpdateFunc();
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	UFUNCTION(BlueprintCallable) void BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
	UFUNCTION(BlueprintCallable) void Hide();
	UFUNCTION(BlueprintCallable) void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void OnTerrainPointRemoved();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_FloatingLightPlant2(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void OnChangeState__DelegateSignature(bool IsOpen, bool IsHIt);
};

