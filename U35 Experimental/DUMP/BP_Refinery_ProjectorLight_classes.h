// BlueprintGeneratedClass BP_Refinery_ProjectorLight.BP_Refinery_ProjectorLight_C
// Size: 0x258 (Inherited: 0x220)
struct ABP_Refinery_ProjectorLight_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* Box1; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* Box; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh4; 
	UPROPERTY(BlueprintReadWrite) USpotLightComponent* SpotLight; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* ST_Floodlight_Small; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnRefineryStateChanged(enum class ERefineryState InRefineryState);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Refinery_ProjectorLight(int32_t EntryPoint);
};

