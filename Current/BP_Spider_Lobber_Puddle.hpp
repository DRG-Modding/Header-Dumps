#ifndef UE4SS_SDK_BP_Spider_Lobber_Puddle_HPP
#define UE4SS_SDK_BP_Spider_Lobber_Puddle_HPP

class ABP_Spider_Lobber_Puddle_C : public AAdicPuddle
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* BoxTrigger;
    class USphereComponent* Sphere;
    class UTerrainDetectComponent* TerrainDetect;
    class UPointLightComponent* PointLight3;
    class UAudioComponent* Acid_Cue;
    class UNiagaraComponent* P_Puddle;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UTerrainPlacementComponent* terrainPlacement;
    float Timeline_0_NewTrack_0_C5C301FC477EB2358612F7A398ADF4BB;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_C5C301FC477EB2358612F7A398ADF4BB;
    class UTimelineComponent* Timeline_0;
    TArray<class UActorComponent*> ClosePuddles;
    int32 OtherPuddleIndex;
    bool FoundPlace;
    int32 NiagaraSeed;
    FTimerHandle FadeOutTimer;

    void OnRep_NiagaraSeed();
    void IncludesPuddle(TArray<class UActorComponent*>& Components, int32& Index);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__BP_Spider_Lobber_Puddle_TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void Receive_OnPlayerBeginOverlap(class APlayerCharacter* Player);
    void ResetPuddle();
    void ResetTimer();
    void FadeOut();
    void ExecuteUbergraph_BP_Spider_Lobber_Puddle(int32 EntryPoint);
};

#endif
