// BlueprintGeneratedClass BP_SpotLightInteractive.BP_SpotLightInteractive_C
// Size: 0x2bc (Inherited: 0x220)
struct ABP_SpotLightInteractive_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight1; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_Minehead_Floodlight; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh2; 
	UPROPERTY(BlueprintReadWrite) USpotLightComponent* SpotLight1; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh4; 
	UPROPERTY(BlueprintReadWrite) USpotLightComponent* SpotLight; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* SpotLightsBase; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* Audio; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) float Timeline_1_0_1_Anim_A1CDCF1443534FDED095F0B3C5DBCF10; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_1__Direction_A1CDCF1443534FDED095F0B3C5DBCF10; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_2; 
	UPROPERTY(BlueprintReadWrite) float Timeline_0_NewTrack_0_5573B4554C24184CF01708BDE578A95F; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_0__Direction_5573B4554C24184CF01708BDE578A95F; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_1; 
	UPROPERTY(BlueprintReadWrite) float LightIntensity; 

	UFUNCTION(BlueprintCallable) void ConditionallyEnableShadows();
	UFUNCTION(BlueprintCallable) void Timeline_0__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_0__UpdateFunc();
	UFUNCTION(BlueprintCallable) void Timeline_1__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_1__UpdateFunc();
	UFUNCTION(BlueprintCallable) void Activate();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void UpdateShadows();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_SpotLightInteractive(int32_t EntryPoint);
};

