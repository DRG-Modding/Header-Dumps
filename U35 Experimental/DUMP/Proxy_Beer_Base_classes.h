// BlueprintGeneratedClass Proxy_Beer_Base.Proxy_Beer_Base_C
// Size: 0x230 (Inherited: 0x220)
struct AProxy_Beer_Base_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 

	UFUNCTION(BlueprintCallable) void Spawn Beer(UDrinkableDataAsset* Drink);
	UFUNCTION(BlueprintCallable) void Beer Spawned Event(UDrinkableDataAsset* InputPin);
	UFUNCTION(BlueprintCallable) void Drink Ready Event(ABP_DrinksBox_C* DrinksBox);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_Proxy_Beer_Base(int32_t EntryPoint);
};

