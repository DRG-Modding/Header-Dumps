// BlueprintGeneratedClass BP_CroppaChunk.BP_CroppaChunk_C
// Size: 0x2a8 (Inherited: 0x288)
struct ABP_CroppaChunk_C : AResourceChunk {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Cube; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_CroppaChunk(int32_t EntryPoint);
};

