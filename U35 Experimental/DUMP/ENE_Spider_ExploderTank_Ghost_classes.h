// BlueprintGeneratedClass ENE_Spider_ExploderTank_Ghost.ENE_Spider_ExploderTank_Ghost_C
// Size: 0x588 (Inherited: 0x570)
struct AENE_Spider_ExploderTank_Ghost_C : AENE_Spider_ExploderTank_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* Audio; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* TerrainScannerMesh; 

	UFUNCTION(BlueprintCallable) bool GetIsTargetable();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnUnFrozen();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Spider_ExploderTank_Ghost(int32_t EntryPoint);
};

