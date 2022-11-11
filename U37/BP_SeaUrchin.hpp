#ifndef UE4SS_SDK_BP_SeaUrchin_HPP
#define UE4SS_SDK_BP_SeaUrchin_HPP

class ABP_SeaUrchin_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainPlacementComponent* terrainPlacement;
    class UTerrainDetectComponent* TerrainDetect;
    class UStatusEffectTriggerComponent* StatusEffectTrigger1;
    class USphereComponent* BlockingSphere;
    class USphereComponent* Sphere;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class USimpleHealthComponent* SimpleHealth;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UStaticMeshComponent* StaticMesh;
    float Timeline_0_NewTrack_3_92B13E094B2DF1BDD1B63E8B51041D1A;
    float Timeline_0_Displacement_Offset_92B13E094B2DF1BDD1B63E8B51041D1A;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_92B13E094B2DF1BDD1B63E8B51041D1A;
    class UTimelineComponent* Timeline_0;
    float Reduce_Offset_NewTrack_3_C5AFCD9F419B0285FA202B94564C9676;
    float Reduce_Offset_Displacement_Offset_C5AFCD9F419B0285FA202B94564C9676;
    TEnumAsByte<ETimelineDirection::Type> Reduce_Offset__Direction_C5AFCD9F419B0285FA202B94564C9676;
    class UTimelineComponent* Reduce Offset;
    class UMaterialInstanceDynamic* Dynamic Material;
    float InitialDisplacementOffset;

    void UserConstructionScript();
    void Reduce Offset__FinishedFunc();
    void Reduce Offset__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float Amount);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void ExecuteUbergraph_BP_SeaUrchin(int32 EntryPoint);
};

#endif
