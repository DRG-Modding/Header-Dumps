#ifndef UE4SS_SDK_BP_DropToTerrainDebris_Base_HPP
#define UE4SS_SDK_BP_DropToTerrainDebris_Base_HPP

class ABP_DropToTerrainDebris_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UBoxComponent* PlayerCollider;
    class UDropToTerrainComponent* DropToTerrain;
    class UTerrainDetectComponent* TerrainDetect;
    class USceneComponent* DefaultSceneRoot;
    class USoundBase* FallImpactSound;

    void ReceiveBeginPlay();
    void BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_0_OnIsFallingToTerrainChanged__DelegateSignature(bool IsFalling);
    void ExecuteUbergraph_BP_DropToTerrainDebris_Base(int32 EntryPoint);
};

#endif
