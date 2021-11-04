// BlueprintGeneratedClass ITM_TerrainScanner.ITM_TerrainScanner_C
// Size: 0x428 (Inherited: 0x3f8)
struct AITM_TerrainScanner_C : ATerrainScannerItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3f8(0x08)
	UParticleSystemComponent* Screen_Rays; // 0x400(0x08)
	UStaticMeshComponent* SM_HandheldTablet; // 0x408(0x08)
	UPointLightComponent* PointLight; // 0x410(0x08)
	UUserWidget* HUD; // 0x418(0x08)
	UTextureRenderTarget2D* RenderTarget; // 0x420(0x08)

	void AddedToInventory(APlayerCharacter* ItemOwner);
	void OnTerrainScannerPressed();
	void OnTerrainScannerReleased();
	void ExecuteUbergraph_ITM_TerrainScanner(int32_t EntryPoint);
};

