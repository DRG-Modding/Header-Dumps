#ifndef UE4SS_SDK_BP_StickySpiderWeb_HPP
#define UE4SS_SDK_BP_StickySpiderWeb_HPP

class ABP_StickySpiderWeb_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    USimpleHealthComponent* SimpleHealth;
    UTerrainDetectComponent* TerrainDetect;
    UTerrainPlacementComponent* terrainPlacement;
    UStaticMeshComponent* SM_SpiderwebPlane01;
    UBoxComponent* BoxTrigger;
    USceneComponent* DefaultSceneRoot;
    float Timeline_0_NewTrack_0_7FBFE0904ABD35FA5B540ABBA6E572D9;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_7FBFE0904ABD35FA5B540ABBA6E572D9;
    UTimelineComponent* Timeline_0;
    UMaterialInstanceDynamic* MaterialInstance;
    TArray<UTexture*> WebTexture;

    void UserConstructionScript(UTexture* CallFunc_Array_Get_Item, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UTexture* CallFunc_Array_Get_Item_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BndEvt__BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void TriggerWeb();
    void ExecuteUbergraph_BP_StickySpiderWeb(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_TryPushActiveStatusEffect_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
}

#endif
