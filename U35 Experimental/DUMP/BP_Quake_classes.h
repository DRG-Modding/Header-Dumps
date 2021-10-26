// BlueprintGeneratedClass BP_Quake.BP_Quake_C
// Size: 0x230 (Inherited: 0x220)
struct ABP_Quake_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Quake(int32_t EntryPoint);
};

