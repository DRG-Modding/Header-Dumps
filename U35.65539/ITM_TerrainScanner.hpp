#ifndef UE4SS_SDK_ITM_TerrainScanner_HPP
#define UE4SS_SDK_ITM_TerrainScanner_HPP

class AITM_TerrainScanner_C : UTerrainScannerItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* Screen_Rays;
    UStaticMeshComponent* SM_HandheldTablet;
    UPointLightComponent* PointLight;
    TSubclassOf<UUserWidget> HUD;
    UTextureRenderTarget2D* RenderTarget;

    void AddedToInventory(UPlayerCharacter* ItemOwner);
    void OnTerrainScannerPressed();
    void OnTerrainScannerReleased();
    void ExecuteUbergraph_ITM_TerrainScanner(int32 EntryPoint, OnLaserPointerPressedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, OnLaserPointerPressedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UPlayerCharacter* K2Node_Event_ItemOwner);
}

#endif
