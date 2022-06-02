#ifndef UE4SS_SDK_BP_BombSpitter_HPP
#define UE4SS_SDK_BP_BombSpitter_HPP

class ABP_BombSpitter_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* BombSpitterMesh;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UTerrainPlacementComponent* terrainPlacement;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UStaticMeshComponent* ProjectileFake;
    class UTerrainDetectComponent* TerrainDetect;
    class USceneComponent* ProjectileSpawnLocation;
    class UCapsuleComponent* Capsule;
    class USimpleHealthComponent* SimpleHealth;
    class USceneComponent* DefaultSceneRoot;
    float Grow_Scale_E6213CB8461859CFDD77B8B3B4302959;
    TEnumAsByte<ETimelineDirection::Type> Grow__Direction_E6213CB8461859CFDD77B8B3B4302959;
    class UTimelineComponent* Grow;
    bool IsReady;
    float ReloadTime;
    class UMaterialInstanceDynamic* DynamicMaterial;
    FBP_BombSpitter_COnChangeState OnChangeState;
    void OnChangeState(bool Closed, bool Open);

    void OnRep_IsReady();
    void UserConstructionScript();
    void Grow__FinishedFunc();
    void Grow__UpdateFunc();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void OnTerrainPointRemoved();
    void Shoot();
    void ExecuteUbergraph_BP_BombSpitter(int32 EntryPoint);
    void OnChangeState__DelegateSignature(bool Closed, bool Open);
};

#endif
