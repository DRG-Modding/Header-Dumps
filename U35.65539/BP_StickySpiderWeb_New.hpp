#ifndef UE4SS_SDK_BP_StickySpiderWeb_New_HPP
#define UE4SS_SDK_BP_StickySpiderWeb_New_HPP

class ABP_StickySpiderWeb_New_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    USimpleHealthComponent* SimpleHealth;
    UTerrainDetectComponent* TerrainDetect;
    UTerrainPlacementComponent* terrainPlacement;
    UStaticMeshComponent* SM_SpiderwebPlane01;
    UBoxComponent* BoxTrigger;
    USceneComponent* DefaultSceneRoot;
    float Timeline_0_NewTrack_0_A1817B7349EE1CBF83D087BC6F7AC2B7;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_A1817B7349EE1CBF83D087BC6F7AC2B7;
    UTimelineComponent* Timeline_0;
    UMaterialInstanceDynamic* MaterialInstance;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BndEvt__BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void TriggerWeb();
    void ExecuteUbergraph_BP_StickySpiderWeb_New(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_TryPushActiveStatusEffect_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
}

#endif
