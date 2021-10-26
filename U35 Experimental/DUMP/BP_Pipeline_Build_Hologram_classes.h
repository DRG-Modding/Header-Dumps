// BlueprintGeneratedClass BP_Pipeline_Build_Hologram.BP_Pipeline_Build_Hologram_C
// Size: 0x258 (Inherited: 0x220)
struct ABP_Pipeline_Build_Hologram_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Hologram3; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Hologram2; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Hologram1; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* TranslateRoot; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* RotateRoot; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 

	UFUNCTION(BlueprintCallable) void ReceiveTick(float DeltaSeconds);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Pipeline_Build_Hologram(int32_t EntryPoint);
};

