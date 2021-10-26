// BlueprintGeneratedClass BP_Refinery_Rocketlamp.BP_Refinery_RocketLamp_C
// Size: 0x249 (Inherited: 0x220)
struct ABP_Refinery_RocketLamp_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight1; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* Box; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Lamp Mesh; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) enum class ERefineryState State; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnRefineryStateChanged(enum class ERefineryState InRefineryState);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Refinery_RocketLamp(int32_t EntryPoint);
};

