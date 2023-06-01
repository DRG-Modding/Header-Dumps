#ifndef UE4SS_SDK_BP_Collectible_Simple_HPP
#define UE4SS_SDK_BP_Collectible_Simple_HPP

class ABP_Collectible_Simple_C : public ABP_Collectible_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_Carver_DropPodDrill001;
    class ULevelGenerationCarverComponent* LevelGenerationCarver;
    class UTerrainPlacementComponent* terrainPlacement;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* Mesh;

    void PickedUp();
    void ExecuteUbergraph_BP_Collectible_Simple(int32 EntryPoint);
};

#endif
