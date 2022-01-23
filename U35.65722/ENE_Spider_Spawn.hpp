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

    void OnRep_TargetLocation(float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_Percent_FloatFloat_ReturnValue);
    void Spawn__FinishedFunc();
    void Spawn__UpdateFunc();
    void ReceiveBeginPlay();
    void Spawn Behavior();
    void Play Spawn();
    void ExecuteUbergraph_ENE_Spider_Spawn(int32 EntryPoint, FRotator CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_VLerp_ReturnValue, FVector CallFunc_FindRandomNearbyPositionOnNavmesh_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue);
};

#endif
