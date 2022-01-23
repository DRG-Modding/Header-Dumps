#ifndef UE4SS_SDK_BP_TumbleweedSpawner_HPP
#define UE4SS_SDK_BP_TumbleweedSpawner_HPP

class ABP_TumbleweedSpawner_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainPlacementComponent* terrainPlacement;
    class UBillboardComponent* SpawnPoint;
    class USceneComponent* DefaultSceneRoot;
    TSubclassOf<class AActor> ClassToSpawn;

    void ReceiveBeginPlay();
    void SpawnPinecone();
    void ExecuteUbergraph_BP_TumbleweedSpawner(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, FExecuteUbergraph_BP_TumbleweedSpawnerK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue);
};

#endif
