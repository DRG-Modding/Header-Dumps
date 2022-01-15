#ifndef UE4SS_SDK_BP_CrystalArch_Base_HPP
#define UE4SS_SDK_BP_CrystalArch_Base_HPP

class ABP_CrystalArch_Base_C : AActor
{
    UStaticMeshComponent* StaticMesh3;
    UStaticMeshComponent* StaticMesh2;
    UStaticMeshComponent* StaticMesh1;
    UStaticMeshComponent* StaticMesh;
    UStaticMeshComponent* Cube;
    UTerrainPlacementComponent* terrainPlacement;
    ULevelGenerationCarverComponent* LevelGenerationCarver;
    USceneComponent* DefaultSceneRoot;

    void UserConstructionScript(bool CallFunc_HasAuthority_ReturnValue, AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult);
}

#endif
