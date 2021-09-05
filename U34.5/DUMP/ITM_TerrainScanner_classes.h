// BlueprintGeneratedClass ITM_TerrainScanner.ITM_TerrainScanner_C
// Size: 0x408 (Inherited: 0x3d8)
struct AITM_TerrainScanner_C : ATerrainScannerItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	UParticleSystemComponent* Screen_Rays; // 0x3e0(0x08)
	UStaticMeshComponent* SM_HandheldTablet; // 0x3e8(0x08)
	UPointLightComponent* PointLight; // 0x3f0(0x08)
	UUserWidget* HUD; // 0x3f8(0x08)
	UTextureRenderTarget2D* RenderTarget; // 0x400(0x08)

	void AddedToInventory(APlayerCharacter* ItemOwner);
	void OnTerrainScannerPressed();
	void OnTerrainScannerReleased();
	void ExecuteUbergraph_ITM_TerrainScanner(int32_t EntryPoint);
};

