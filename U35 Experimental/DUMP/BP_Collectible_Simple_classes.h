// BlueprintGeneratedClass BP_Collectible_Simple.BP_Collectible_Simple_C
// Size: 0x288 (Inherited: 0x268)
struct ABP_Collectible_Simple_C : ABP_Collectible_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Mesh; 

	UFUNCTION(BlueprintCallable) void PickedUp();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Collectible_Simple(int32_t EntryPoint);
};

