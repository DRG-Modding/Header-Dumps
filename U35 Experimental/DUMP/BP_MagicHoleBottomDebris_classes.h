// BlueprintGeneratedClass BP_MagicHoleBottomDebris.BP_MagicHoleBottomDebris_C
// Size: 0x238 (Inherited: 0x220)
struct ABP_MagicHoleBottomDebris_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) ULevelGenerationDebris* LevelGenerationDebris; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_MagicHoleBottomDebris(int32_t EntryPoint);
};

