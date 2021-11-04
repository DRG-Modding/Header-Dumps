// BlueprintGeneratedClass BP_DrinksBox.BP_DrinksBox_C
// Size: 0x280 (Inherited: 0x220)
struct ABP_DrinksBox_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USceneComponent* BartenderLocation; // 0x228(0x08)
	USkeletalMeshComponent* SkeletalMesh; // 0x230(0x08)
	USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	char State; // 0x240(0x01)
	FMulticastInlineDelegate OnAvailableForNewDrink; // 0x248(0x10)
	FMulticastInlineDelegate OnDrinkReady; // 0x258(0x10)
	ADrinkableActor* DrinkableActor; // 0x268(0x08)
	FMulticastInlineDelegate OnStateChanged; // 0x270(0x10)

	void OnRep_DrinkableActor();
	void IsAvailable(bool IsAvailable);
	void OnRep_State();
	void OnLoaded_C20044584A6E4C14650B318543524FEE(UObject* Loaded);
	void Spawn Drink(UDrinkableDataAsset* Drinkable);
	void OnDrinkableDestroyed(AActor* DestroyedActor);
	void Fill DrinkableActor();
	void ExecuteUbergraph_BP_DrinksBox(int32_t EntryPoint);
	void OnStateChanged__DelegateSignature(char State);
	void OnDrinkReady__DelegateSignature(ABP_DrinksBox_C* DrinkBox);
	void OnAvailableForNewDrink__DelegateSignature(ABP_DrinksBox_C* DrinkBox);
};

