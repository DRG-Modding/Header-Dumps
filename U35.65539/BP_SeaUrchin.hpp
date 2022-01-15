#ifndef UE4SS_SDK_BP_SeaUrchin_HPP
#define UE4SS_SDK_BP_SeaUrchin_HPP

class ABP_SeaUrchin_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTerrainPlacementComponent* terrainPlacement;
    UTerrainDetectComponent* TerrainDetect;
    UStatusEffectTriggerComponent* StatusEffectTrigger1;
    USphereComponent* BlockingSphere;
    USphereComponent* Sphere;
    UPathfinderCollisionComponent* PathfinderCollision;
    USimpleHealthComponent* SimpleHealth;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UStaticMeshComponent* StaticMesh;
    float Timeline_0_NewTrack_3_92B13E094B2DF1BDD1B63E8B51041D1A;
    float Timeline_0_Displacement_Offset_92B13E094B2DF1BDD1B63E8B51041D1A;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_92B13E094B2DF1BDD1B63E8B51041D1A;
    UTimelineComponent* Timeline_0;
    float Reduce_Offset_NewTrack_3_C5AFCD9F419B0285FA202B94564C9676;
    float Reduce_Offset_Displacement_Offset_C5AFCD9F419B0285FA202B94564C9676;
    TEnumAsByte<ETimelineDirection::Type> Reduce_Offset__Direction_C5AFCD9F419B0285FA202B94564C9676;
    UTimelineComponent* Reduce Offset;
    UMaterialInstanceDynamic* Dynamic Material;
    float InitialDisplacementOffset;

    void UserConstructionScript(float CallFunc_K2_GetScalarParameterValue_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void Reduce Offset__FinishedFunc();
    void Reduce Offset__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float Amount);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void ExecuteUbergraph_BP_SeaUrchin(int32 EntryPoint, UDecalComponent* CallFunc_SpawnDecalAtActor_ReturnValue, FVector CallFunc_Conv_FloatToVector_ReturnValue, FVector CallFunc_Conv_FloatToVector_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, float K2Node_ComponentBoundEvent_Amount, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent);
}

#endif
