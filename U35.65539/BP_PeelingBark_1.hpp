#ifndef UE4SS_SDK_BP_PeelingBark_1_HPP
#define UE4SS_SDK_BP_PeelingBark_1_HPP

class ABP_PeelingBark_1_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    USimpleHealthComponent* SimpleHealth;
    UTerrainDetectComponent* TerrainDetect;
    UTerrainPlacementComponent* terrainPlacement;
    UStaticMeshComponent* StaticMesh;
    USceneComponent* DefaultSceneRoot;

    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_PeelingBark_1(int32 EntryPoint, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent);
}

#endif
