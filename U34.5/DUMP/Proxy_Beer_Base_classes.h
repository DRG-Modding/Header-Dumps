// BlueprintGeneratedClass Proxy_Beer_Base.Proxy_Beer_Base_C
// Size: 0x230 (Inherited: 0x220)
struct AProxy_Beer_Base_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USceneComponent* DefaultSceneRoot; // 0x228(0x08)

	void Spawn Beer(UDrinkableDataAsset* Drink);
	void Beer Spawned Event(UDrinkableDataAsset* InputPin);
	void Drink Ready Event(ABP_DrinksBox_C* DrinksBox);
	void ExecuteUbergraph_Proxy_Beer_Base(int32_t EntryPoint);
};

