#ifndef UE4SS_SDK_ENE_Spider_Spawn_HPP
#define UE4SS_SDK_ENE_Spider_Spawn_HPP

class AENE_Spider_Spawn_C : public AENE_Spider_Swarmer_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Spawn_Time_B1CBC18A4B11AF202D22269E86350761;
    float Spawn_Z_B1CBC18A4B11AF202D22269E86350761;
    TEnumAsByte<ETimelineDirection::Type> Spawn__Direction_B1CBC18A4B11AF202D22269E86350761;
    class UTimelineComponent* Spawn;
    FVector SpawnLocation;
    FVector TargetLocation;
    float ZSpawnOffset;
    bool UseSpawnAnimation;

    void OnRep_TargetLocation();
    void Spawn__FinishedFunc();
    void Spawn__UpdateFunc();
    void ReceiveBeginPlay();
    void Spawn Behavior();
    void Play Spawn();
    void ExecuteUbergraph_ENE_Spider_Spawn(int32 EntryPoint);
};

#endif
