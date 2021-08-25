// BlueprintGeneratedClass BP_DrinksBox.BP_DrinksBox_C
// Size: 0x280 (Inherited: 0x220)
struct ABP_DrinksBox_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* BartenderLocation; // 0x228(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	char State; // 0x240(0x01)
	char UnknownData_241[0x7]; // 0x241(0x07)
	struct FMulticastInlineDelegate OnAvailableForNewDrink; // 0x248(0x10)
	struct FMulticastInlineDelegate OnDrinkReady; // 0x258(0x10)
	struct ADrinkableActor* DrinkableActor; // 0x268(0x08)
	struct FMulticastInlineDelegate OnStateChanged; // 0x270(0x10)

	void OnRep_DrinkableActor(); // Function BP_DrinksBox.BP_DrinksBox_C.OnRep_DrinkableActor
	void IsAvailable(bool IsAvailable); // Function BP_DrinksBox.BP_DrinksBox_C.IsAvailable
	void OnRep_State(); // Function BP_DrinksBox.BP_DrinksBox_C.OnRep_State
	void OnLoaded_C20044584A6E4C14650B318543524FEE(struct UObject* Loaded); // Function BP_DrinksBox.BP_DrinksBox_C.OnLoaded_C20044584A6E4C14650B318543524FEE
	void Spawn Drink(struct UDrinkableDataAsset* Drinkable); // Function BP_DrinksBox.BP_DrinksBox_C.Spawn Drink
	void OnDrinkableDestroyed(struct AActor* DestroyedActor); // Function BP_DrinksBox.BP_DrinksBox_C.OnDrinkableDestroyed
	void Fill DrinkableActor(); // Function BP_DrinksBox.BP_DrinksBox_C.Fill DrinkableActor
	void ExecuteUbergraph_BP_DrinksBox(int32_t EntryPoint); // Function BP_DrinksBox.BP_DrinksBox_C.ExecuteUbergraph_BP_DrinksBox
	void OnStateChanged__DelegateSignature(char State); // Function BP_DrinksBox.BP_DrinksBox_C.OnStateChanged__DelegateSignature
	void OnDrinkReady__DelegateSignature(struct ABP_DrinksBox_C* DrinkBox); // Function BP_DrinksBox.BP_DrinksBox_C.OnDrinkReady__DelegateSignature
	void OnAvailableForNewDrink__DelegateSignature(struct ABP_DrinksBox_C* DrinkBox); // Function BP_DrinksBox.BP_DrinksBox_C.OnAvailableForNewDrink__DelegateSignature
};

