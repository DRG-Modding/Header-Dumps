#ifndef UE4SS_SDK_BP_PineconeSpawner_Base_HPP
#define UE4SS_SDK_BP_PineconeSpawner_Base_HPP

class ABP_PineconeSpawner_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UTerrainDetectComponent* TerrainDetect;
    class USimpleHealthComponent* SimpleHealth;
    class UStaticMeshComponent* U33_BiomPlant_Pinecone;
    class USceneComponent* PineCones;
    class UStaticMeshComponent* SM_HollowBoughBranch_05;
    class UTerrainPlacementComponent* terrainPlacement;
    class UBillboardComponent* SpawnPoint;
    class USceneComponent* DefaultSceneRoot;
    TSubclassOf<class AActor> ClassToSpawn;
    float FallChance;
    TArray<class UStaticMeshComponent*> DeadCones;
    TArray<class UStaticMeshComponent*> AliveCones;

    void OnRep_DeadCones();
    void SpawnPinecone(class UStaticMeshComponent* PineCone);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PineconeSpawner_Base(int32 EntryPoint);
};

#endif
