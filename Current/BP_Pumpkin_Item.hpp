#ifndef UE4SS_SDK_BP_Pumpkin_Item_HPP
#define UE4SS_SDK_BP_Pumpkin_Item_HPP

class ABP_Pumpkin_Item_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USimpleHealthComponent* SimpleHealth;
    class UTerrainDetectComponent* TerrainDetect;
    class UTerrainPlacementComponent* terrainPlacement;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;
    class UParticleSystem* deathParticles;
    class USoundCue* deathSound;
    TArray<class UStaticMesh*> PumpkinOptions;
    uint8 PumpkinMesh;

    void OnRep_PumpkinMesh();
    void ReceiveBeginPlay();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void OnTerrainPointRemoved();
    void EvilLaugh(FVector Location);
    void ExecuteUbergraph_BP_Pumpkin_Item(int32 EntryPoint);
};

#endif
