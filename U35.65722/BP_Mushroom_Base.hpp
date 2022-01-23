#ifndef UE4SS_SDK_BP_Mushroom_Base_HPP
#define UE4SS_SDK_BP_Mushroom_Base_HPP

class ABP_Mushroom_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainDetectComponent* TerrainDetect;
    class UTerrainPlacementComponent* terrainPlacement;
    class USimpleHealthComponent* SimpleHealth;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UParticleSystemComponent* ParticleSystem;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;
    FScaledEffect Explode Effect;

    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void OnTerrainPointRemoved();
    void ExecuteUbergraph_BP_Mushroom_Base(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, class UFXSystemComponent* CallFunc_SpawnScaledEmitterAtLocation_ReturnValue, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent);
};

#endif
