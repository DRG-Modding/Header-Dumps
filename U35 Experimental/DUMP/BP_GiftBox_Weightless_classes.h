// BlueprintGeneratedClass BP_GiftBox_Weightless.BP_GiftBox_Weightless_C
// Size: 0x284 (Inherited: 0x220)
struct ABP_GiftBox_Weightless_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) URotatingMovementComponent* RotatingMovement; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Mesh; 
	UPROPERTY(BlueprintReadWrite) bool CanTriggerSound; 
	UPROPERTY(BlueprintReadWrite) FVector KickSoundLocation; 
	UPROPERTY(BlueprintReadWrite) APlayerCharacter* KickedBy; 
	UPROPERTY(BlueprintReadWrite) TArray<UStaticMesh*> MeshesToChooseFrom; 
	UPROPERTY(BlueprintReadWrite) TArray<UMaterialInterface*> Mats_Wrapper; 
	UPROPERTY(BlueprintReadWrite) TArray<UMaterialInterface*> Mats_Note; 
	UPROPERTY(BlueprintReadWrite) int32_t RandomPresentSound; 

	UFUNCTION(BlueprintCallable) void OnRep_KickSoundLocation();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_GiftBox_Weightless(int32_t EntryPoint);
};

