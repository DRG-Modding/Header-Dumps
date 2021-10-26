// BlueprintGeneratedClass BP_DropPod_Escape_Damaged.BP_DropPod_Escape_Damaged_C
// Size: 0xa1c (Inherited: 0x9a8)
struct ABP_DropPod_Escape_Damaged_C : ABP_DropPod_Escape_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* DistressLamp1; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* DistressLamp3; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* FuelLineConnector; 
	UPROPERTY(BlueprintReadWrite) ULevelGenerationDebris* LevelGenerationDebris; 
	UPROPERTY(BlueprintReadWrite) URoomCarverComponent* RoomCarver; 
	UPROPERTY(BlueprintReadWrite) UMeshCarverComponent* DrillCarver; 
	UPROPERTY(BlueprintReadWrite) UMeshCarverComponent* DropHoleCarver; 
	UPROPERTY(BlueprintReadWrite) ULevelGenerationCarverComponent* LevelGenerationCarver; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight4_1; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* DistressLamp2; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* DistressLamp; 
	UPROPERTY(BlueprintReadWrite) float DistressLightIntensity_NewTrack_0_38EDB07D496907E74B940B9932C913EE; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection DistressLightIntensity__Direction_38EDB07D496907E74B940B9932C913EE; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* DistressLightIntensity; 
	UPROPERTY(BlueprintReadWrite) float DistressLightIntensity_; 

	UFUNCTION(BlueprintCallable) void Handle PhotosenitivityDamagedPod();
	UFUNCTION(BlueprintCallable) void DistressLightIntensity__FinishedFunc();
	UFUNCTION(BlueprintCallable) void DistressLightIntensity__UpdateFunc();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnMuleLoaded();
	UFUNCTION(BlueprintCallable) void OnMatchStarted_Event_1();
	UFUNCTION(BlueprintCallable) void OnPoweringUp();
	UFUNCTION(BlueprintCallable) void OnPoweredUp();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_DropPod_Escape_Damaged(int32_t EntryPoint);
};

