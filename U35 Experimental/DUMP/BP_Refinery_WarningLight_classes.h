// BlueprintGeneratedClass BP_Refinery_WarningLight.BP_Refinery_WarningLight_C
// Size: 0x240 (Inherited: 0x220)
struct ABP_Refinery_WarningLight_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* ST_Refinery_WarningLight; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnRefineryStateChanged(enum class ERefineryState InRefineryState);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Refinery_WarningLight(int32_t EntryPoint);
};

