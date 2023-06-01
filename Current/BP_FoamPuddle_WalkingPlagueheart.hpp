#ifndef UE4SS_SDK_BP_FoamPuddle_WalkingPlagueheart_HPP
#define UE4SS_SDK_BP_FoamPuddle_WalkingPlagueheart_HPP

class ABP_FoamPuddle_WalkingPlagueheart_C : public AFoamPuddle_WalkingPlagueheart
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UBoxComponent* Box;
    class USphereComponent* Sphere;
    float Timeline_1_NewTrack_0_52E7C03D403167AE64268C894B31D3D0;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_52E7C03D403167AE64268C894B31D3D0;
    class UTimelineComponent* Timeline_1;
    float Timeline_0_NewTrack_0_C23EA9F3436D333E3044BA8F6AEE4E8E;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_C23EA9F3436D333E3044BA8F6AEE4E8E;
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
    void OnChangeVacuumStateDelegate_Event(EVacuumState State);
    void ExecuteUbergraph_BP_FoamPuddle_WalkingPlagueheart(int32 EntryPoint);
};

#endif
