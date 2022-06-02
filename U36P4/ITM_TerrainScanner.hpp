#ifndef UE4SS_SDK_ITM_TerrainScanner_HPP
#define UE4SS_SDK_ITM_TerrainScanner_HPP

class AITM_TerrainScanner_C : public ATerrainScannerItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* Screen_Rays;
    class UStaticMeshComponent* SM_HandheldTablet;
    class UPointLightComponent* PointLight;
    TSubclassOf<class UUserWidget> HUD;
    class UTextureRenderTarget2D* RenderTarget;

    void AddedToInventory(class APlayerCharacter* ItemOwner);
    void OnTerrainScannerPressed();
    void OnTerrainScannerReleased();
    void ExecuteUbergraph_ITM_TerrainScanner(int32 EntryPoint);
};

#endif
