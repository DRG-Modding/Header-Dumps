// BlueprintGeneratedClass BP_QuantriteChunk.BP_QuantriteChunk_C
// Size: 0x2a8 (Inherited: 0x288)
struct ABP_QuantriteChunk_C : AResourceChunk {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Cube; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_QuantriteChunk(int32_t EntryPoint);
};

