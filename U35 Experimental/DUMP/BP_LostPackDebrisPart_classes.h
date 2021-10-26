// BlueprintGeneratedClass BP_LostPackDebrisPart.BP_LostPackDebrisPart_C
// Size: 0x25c (Inherited: 0x220)
struct ABP_LostPackDebrisPart_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* DebrisMesh; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere; 
	UPROPERTY(BlueprintReadWrite) UDropToTerrainComponent* DropToTerrain; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) int32_t Version; 

	UFUNCTION(BlueprintCallable) void OnRep_Version();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_LostPackDebrisPart(int32_t EntryPoint);
};

