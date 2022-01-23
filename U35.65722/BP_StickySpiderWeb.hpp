#ifndef UE4SS_SDK_BP_StickySpiderWeb_HPP
#define UE4SS_SDK_BP_StickySpiderWeb_HPP

class ABP_StickySpiderWeb_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USimpleHealthComponent* SimpleHealth;
    class UTerrainDetectComponent* TerrainDetect;
    class UTerrainPlacementComponent* terrainPlacement;
    class UStaticMeshComponent* SM_SpiderwebPlane01;
    class UBoxComponent* BoxTrigger;
    class USceneComponent* DefaultSceneRoot;
    float Timeline_0_NewTrack_0_7FBFE0904ABD35FA5B540ABBA6E572D9;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_7FBFE0904ABD35FA5B540ABBA6E572D9;
    class UTimelineComponent* Timeline_0;
    class UMaterialInstanceDynamic* MaterialInstance;
    TArray<class UTexture*> WebTexture;

    void UserConstructionScript(class UTexture* CallFunc_Array_Get_Item, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UTexture* CallFunc_Array_Get_Item_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BndEvt__BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void TriggerWeb();
    void ExecuteUbergraph_BP_StickySpiderWeb(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_TryPushActiveStatusEffect_ReturnValue, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
};

#endif
