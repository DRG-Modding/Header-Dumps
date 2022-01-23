#ifndef UE4SS_SDK_BP_CozyTreeHollow_Base_HPP
#define UE4SS_SDK_BP_CozyTreeHollow_Base_HPP

class ABP_CozyTreeHollow_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBillboardComponent* SugarChunksLocation;
    class UTerrainPlacementComponent* terrainPlacement;
    class UStaticMeshComponent* StaticMesh_Entrance;
    class ULevelGenerationCarverComponent* LevelGenerationCarver_Entrance;
    class UStaticMeshComponent* StaticMesh_Room;
    class ULevelGenerationCarverComponent* LevelGenerationCarver_Room;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void Spawn Sugar();
    void ExecuteUbergraph_BP_CozyTreeHollow_Base(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, FExecuteUbergraph_BP_CozyTreeHollow_BaseK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, float CallFunc_RandomFloatInRange_ReturnValue, int32 Temp_int_Variable, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, class AResourceChunk* CallFunc_SpawnResource_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue);
};

#endif
