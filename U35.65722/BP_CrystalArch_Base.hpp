#ifndef UE4SS_SDK_BP_CrystalArch_Base_HPP
#define UE4SS_SDK_BP_CrystalArch_Base_HPP

class ABP_CrystalArch_Base_C : public AActor
{
    class UStaticMeshComponent* StaticMesh3;
    class UStaticMeshComponent* StaticMesh2;
    class UStaticMeshComponent* StaticMesh1;
    class UStaticMeshComponent* StaticMesh;
    class UStaticMeshComponent* Cube;
    class UTerrainPlacementComponent* terrainPlacement;
    class ULevelGenerationCarverComponent* LevelGenerationCarver;
    class USceneComponent* DefaultSceneRoot;

    void UserConstructionScript(bool CallFunc_HasAuthority_ReturnValue, class AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult);
};

#endif
