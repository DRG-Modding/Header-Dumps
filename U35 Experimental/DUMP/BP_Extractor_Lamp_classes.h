// BlueprintGeneratedClass BP_Extractor_Lamp.BP_Extractor_Lamp_C
// Size: 0x248 (Inherited: 0x220)
struct ABP_Extractor_Lamp_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* Box; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Lamp Mesh; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 

	UFUNCTION(BlueprintCallable) void OnRefineryStateChanged(enum class ERefineryState InRefineryState);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Extractor_Lamp(int32_t EntryPoint);
};

