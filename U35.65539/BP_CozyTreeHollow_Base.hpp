#ifndef UE4SS_SDK_BP_CozyTreeHollow_Base_HPP
#define UE4SS_SDK_BP_CozyTreeHollow_Base_HPP

class ABP_CozyTreeHollow_Base_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBillboardComponent* SugarChunksLocation;
    UTerrainPlacementComponent* terrainPlacement;
    UStaticMeshComponent* StaticMesh_Entrance;
    ULevelGenerationCarverComponent* LevelGenerationCarver_Entrance;
    UStaticMeshComponent* StaticMesh_Room;
    ULevelGenerationCarverComponent* LevelGenerationCarver_Room;
    USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void Spawn Sugar();
    void ExecuteUbergraph_BP_CozyTreeHollow_Base(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, DelegateEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, float CallFunc_RandomFloatInRange_ReturnValue, int32 Temp_int_Variable, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, UResourceChunk* CallFunc_SpawnResource_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue);
}

#endif
