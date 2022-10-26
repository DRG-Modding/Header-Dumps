#ifndef UE4SS_SDK_BP_FoamPuddle_HPP
#define UE4SS_SDK_BP_FoamPuddle_HPP

class ABP_FoamPuddle_C : public AFoamPuddle
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UBoxComponent* Box;
    class USphereComponent* Sphere;
    class UTerrainDetectComponent* TerrainDetect;
    float Timeline_1_NewTrack_0_FB8CEE454A0146654CCF979239EF7152;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_FB8CEE454A0146654CCF979239EF7152;
    class UTimelineComponent* Timeline_1;
    float Timeline_0_NewTrack_0_44A611F34AD5A6FAD05E20AB4D1BE0FB;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_44A611F34AD5A6FAD05E20AB4D1BE0FB;
    class UTimelineComponent* Timeline_0;
    bool ShouldDestroy;

    void OnRep_ShouldDestory();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void ReceiveBeginPlay();
    void ScaleOutAndDestroy();
    void SetPuddleLifetime(float LifeTime);
    void ExecuteUbergraph_BP_FoamPuddle(int32 EntryPoint);
};

#endif
