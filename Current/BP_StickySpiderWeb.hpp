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

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BndEvt__BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void TriggerWeb();
    void ExecuteUbergraph_BP_StickySpiderWeb(int32 EntryPoint);
};

#endif
