// BlueprintGeneratedClass InitSpacerig.InitSpacerig_C
// Size: 0x230 (Inherited: 0x220)
struct AInitSpacerig_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_InitSpacerig(int32_t EntryPoint);
};

