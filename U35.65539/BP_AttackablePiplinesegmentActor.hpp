#ifndef UE4SS_SDK_BP_AttackablePiplinesegmentActor_HPP
#define UE4SS_SDK_BP_AttackablePiplinesegmentActor_HPP

class ABP_AttackablePiplinesegmentActor_C : ATargetDummyPawn
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCustomObjectAttackerPositioning* CustomObjectAttackerPositioning;
    UObjectAttackerPositioning* ObjectAttackerPositioning;
    USimpleHealthComponent* SimpleHealth;
    USceneComponent* DefaultSceneRoot;

    FVector GetTargetCenterMass(FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_AttackablePiplinesegmentActor(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_PercentageCheck_ReturnValue, TArray<FVector>& CallFunc_GetSpawnPointsFromLocation_ReturnValue);
}

#endif
