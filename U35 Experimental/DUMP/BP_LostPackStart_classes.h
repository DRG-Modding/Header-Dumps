// BlueprintGeneratedClass BP_LostPackStart.BP_LostPackStart_C
// Size: 0x329 (Inherited: 0x298)
struct ABP_LostPackStart_C : ATreasureBeacon {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* P_LostPack_Scanning1; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* P_LostPack_Scanning; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* Audio; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* LaserPointerShpere; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* HelmetMesh; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UDropToTerrainComponent* DropToTerrain; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere; 
	UPROPERTY(BlueprintReadWrite) USingleUsableComponent* SingleUsable; 
	UPROPERTY(BlueprintReadWrite) float LightTimeline_NewTrack_0_9C3586C54F34D331F1DA6DBB251F58D5; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection LightTimeline__Direction_9C3586C54F34D331F1DA6DBB251F58D5; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* LightTimeLine; 
	UPROPERTY(BlueprintReadWrite) UMaterialInstanceDynamic* DMI; 
	UPROPERTY(BlueprintReadWrite) UDialogDataAsset* OnDataDownloadedShout; 
	UPROPERTY(BlueprintReadWrite) USoundBase* MapUpdatedAllNotification; 
	UPROPERTY(BlueprintReadWrite) bool Activated; 

	UFUNCTION(BlueprintCallable) void OnRep_Activated();
	UFUNCTION(BlueprintCallable) void LightTimeline__FinishedFunc();
	UFUNCTION(BlueprintCallable) void LightTimeline__UpdateFunc();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	UFUNCTION(BlueprintCallable) void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	UFUNCTION(BlueprintCallable) void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_2_OnFailed__DelegateSignature();
	UFUNCTION(BlueprintCallable) void StartLightWave();
	UFUNCTION(BlueprintCallable) void All_playDownloadSound();
	UFUNCTION(BlueprintCallable) void UpdateLight(float Strength);
	UFUNCTION(BlueprintCallable) void Used();
	UFUNCTION(BlueprintCallable) void UpdateScanningParticles(bool Active);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_LostPackStart(int32_t EntryPoint);
};

