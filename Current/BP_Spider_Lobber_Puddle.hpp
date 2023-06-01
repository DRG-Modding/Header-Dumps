#ifndef UE4SS_SDK_BP_Spider_Lobber_Puddle_HPP
#define UE4SS_SDK_BP_Spider_Lobber_Puddle_HPP

class ABP_Spider_Lobber_Puddle_C : public AAdicPuddle
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainDetectComponent* TerrainDetect;
    class UPointLightComponent* PointLight3;
    class UAudioComponent* Acid_Cue;
    class UNiagaraComponent* P_Puddle;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USphereComponent* Sphere3;
    class USphereComponent* Sphere2;
    class USphereComponent* Sphere1;
    class USphereComponent* Sphere;
    class UTerrainPlacementComponent* terrainPlacement;
    float Timeline_0_NewTrack_0_F3862D054B7AD42C106DE9B0C77ABC73;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_F3862D054B7AD42C106DE9B0C77ABC73;
    class UTimelineComponent* Timeline_0;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__BP_Spider_Lobber_Puddle_TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void ExecuteUbergraph_BP_Spider_Lobber_Puddle(int32 EntryPoint);
};

#endif
