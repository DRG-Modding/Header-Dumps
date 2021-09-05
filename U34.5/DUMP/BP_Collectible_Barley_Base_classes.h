// BlueprintGeneratedClass BP_Collectible_Barley_Base.BP_Collectible_Barley_Base_C
// Size: 0x270 (Inherited: 0x268)
struct ABP_Collectible_Barley_Base_C : ABP_Collectible_Base_C {
	UMaterialInstance* FruitMaterial; // 0x268(0x08)

	float GetPickDelay();
	void PickBerry(USceneComponent* Berry, USceneComponent* Stem);
	void UserConstructionScript();
};

