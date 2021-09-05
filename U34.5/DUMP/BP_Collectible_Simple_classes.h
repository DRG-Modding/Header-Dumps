// BlueprintGeneratedClass BP_Collectible_Simple.BP_Collectible_Simple_C
// Size: 0x288 (Inherited: 0x268)
struct ABP_Collectible_Simple_C : ABP_Collectible_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x270(0x08)
	UPointLightComponent* PointLight; // 0x278(0x08)
	UStaticMeshComponent* Mesh; // 0x280(0x08)

	void PickedUp();
	void ExecuteUbergraph_BP_Collectible_Simple(int32_t EntryPoint);
};

