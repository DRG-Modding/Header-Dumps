#ifndef UE4SS_SDK_BP_PlatformIcePlant_HPP
#define UE4SS_SDK_BP_PlatformIcePlant_HPP

class ABP_PlatformIcePlant_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UTerrainPlacementComponent* terrainPlacement;
    class UTerrainDetectComponent* TerrainDetect;
    class UBillboardComponent* SpawnPoint;
    class USimpleHealthComponent* SimpleHealth;
    class UStaticMeshComponent* Body;
    class USceneComponent* DefaultSceneRoot;
    float SpawnDelay;

    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void ExecuteUbergraph_BP_PlatformIcePlant(int32 EntryPoint, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
};

#endif
