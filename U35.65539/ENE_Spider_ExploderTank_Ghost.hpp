#ifndef UE4SS_SDK_ENE_Spider_ExploderTank_Ghost_HPP
#define UE4SS_SDK_ENE_Spider_ExploderTank_Ghost_HPP

class AENE_Spider_ExploderTank_Ghost_C : UENE_Spider_ExploderTank_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAudioComponent* Audio;
    UStaticMeshComponent* TerrainScannerMesh;

    bool GetIsTargetable();
    void ReceiveBeginPlay();
    void OnUnFrozen();
    void ExecuteUbergraph_ENE_Spider_ExploderTank_Ghost(int32 EntryPoint, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue);
}

#endif
