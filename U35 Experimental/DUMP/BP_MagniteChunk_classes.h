// BlueprintGeneratedClass BP_MagniteChunk.BP_MagniteChunk_C
// Size: 0x2a8 (Inherited: 0x288)
struct ABP_MagniteChunk_C : AResourceChunk {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Cube; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_MagniteChunk(int32_t EntryPoint);
};

