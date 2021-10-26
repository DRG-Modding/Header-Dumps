// BlueprintGeneratedClass BP_Collectible_Barley_Base.BP_Collectible_Barley_Base_C
// Size: 0x270 (Inherited: 0x268)
struct ABP_Collectible_Barley_Base_C : ABP_Collectible_Base_C {
	UPROPERTY(BlueprintReadWrite) UMaterialInstance* FruitMaterial; 

	UFUNCTION(BlueprintCallable) float GetPickDelay();
	UFUNCTION(BlueprintCallable) void PickBerry(USceneComponent* Berry, USceneComponent* Stem);
	UFUNCTION(BlueprintCallable) void UserConstructionScript();
};

