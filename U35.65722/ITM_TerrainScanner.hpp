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
    void ExecuteUbergraph_ITM_TerrainScanner(int32 EntryPoint, FExecuteUbergraph_ITM_TerrainScannerK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_ITM_TerrainScannerK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class APlayerCharacter* K2Node_Event_ItemOwner);
};

#endif
