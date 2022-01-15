#ifndef UE4SS_SDK_BP_DropToTerrainDebris_Base_HPP
#define UE4SS_SDK_BP_DropToTerrainDebris_Base_HPP

class ABP_DropToTerrainDebris_Base_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UBoxComponent* PlayerCollider;
    UDropToTerrainComponent* DropToTerrain;
    UTerrainDetectComponent* TerrainDetect;
    USceneComponent* DefaultSceneRoot;
    USoundBase* FallImpactSound;

    void ReceiveBeginPlay();
    void BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_0_OnIsFallingToTerrainChanged__DelegateSignature(bool IsFalling);
    void ExecuteUbergraph_BP_DropToTerrainDebris_Base(int32 EntryPoint, bool K2Node_ComponentBoundEvent_IsFalling, FVector CallFunc_K2_GetActorLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
}

#endif
