// BlueprintGeneratedClass ITM_TerrainScanner.ITM_TerrainScanner_C
// Size: 0x408 (Inherited: 0x3d8)
struct AITM_TerrainScanner_C : ATerrainScannerItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UParticleSystemComponent* Screen_Rays; // 0x3e0(0x08)
	struct UStaticMeshComponent* SM_HandheldTablet; // 0x3e8(0x08)
	struct UPointLightComponent* PointLight; // 0x3f0(0x08)
	struct UUserWidget* HUD; // 0x3f8(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0x400(0x08)

	void AddedToInventory(struct APlayerCharacter* ItemOwner); // Function ITM_TerrainScanner.ITM_TerrainScanner_C.AddedToInventory
	void OnTerrainScannerPressed(); // Function ITM_TerrainScanner.ITM_TerrainScanner_C.OnTerrainScannerPressed
	void OnTerrainScannerReleased(); // Function ITM_TerrainScanner.ITM_TerrainScanner_C.OnTerrainScannerReleased
	void ExecuteUbergraph_ITM_TerrainScanner(int32_t EntryPoint); // Function ITM_TerrainScanner.ITM_TerrainScanner_C.ExecuteUbergraph_ITM_TerrainScanner
};

