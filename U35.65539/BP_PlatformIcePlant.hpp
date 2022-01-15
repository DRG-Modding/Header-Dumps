#ifndef UE4SS_SDK_BP_PlatformIcePlant_HPP
#define UE4SS_SDK_BP_PlatformIcePlant_HPP

class ABP_PlatformIcePlant_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UTerrainPlacementComponent* terrainPlacement;
    UTerrainDetectComponent* TerrainDetect;
    UBillboardComponent* SpawnPoint;
    USimpleHealthComponent* SimpleHealth;
    UStaticMeshComponent* Body;
    USceneComponent* DefaultSceneRoot;
    float SpawnDelay;

    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void ExecuteUbergraph_BP_PlatformIcePlant(int32 EntryPoint, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
}

#endif
