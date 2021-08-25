// BlueprintGeneratedClass BP_Collectible_Simple.BP_Collectible_Simple_C
// Size: 0x288 (Inherited: 0x268)
struct ABP_Collectible_Simple_C : ABP_Collectible_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x270(0x08)
	struct UPointLightComponent* PointLight; // 0x278(0x08)
	struct UStaticMeshComponent* Mesh; // 0x280(0x08)

	void PickedUp(); // Function BP_Collectible_Simple.BP_Collectible_Simple_C.PickedUp
	void ExecuteUbergraph_BP_Collectible_Simple(int32_t EntryPoint); // Function BP_Collectible_Simple.BP_Collectible_Simple_C.ExecuteUbergraph_BP_Collectible_Simple
};

