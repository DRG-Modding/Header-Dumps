#ifndef UE4SS_SDK_BP_TumbleweedSpawner_HPP
#define UE4SS_SDK_BP_TumbleweedSpawner_HPP

class ABP_TumbleweedSpawner_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTerrainPlacementComponent* terrainPlacement;
    UBillboardComponent* SpawnPoint;
    USceneComponent* DefaultSceneRoot;
    TSubclassOf<AActor> ClassToSpawn;

    void ReceiveBeginPlay();
    void SpawnPinecone();
    void ExecuteUbergraph_BP_TumbleweedSpawner(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, DelegateEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, AActor* CallFunc_FinishSpawningActor_ReturnValue);
}

#endif
