#ifndef UE4SS_SDK_BP_TruckerBalls_HPP
#define UE4SS_SDK_BP_TruckerBalls_HPP

class ABP_TruckerBalls_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USkeletalMeshComponent* SK_Dice;
    UInstantUsable* InstantUsable;
    UCapsuleComponent* Capsule;
    USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void CustomEvent_0();
    void ExecuteUbergraph_BP_TruckerBalls(int32 EntryPoint, FVector CallFunc_MakeVector_ReturnValue, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue);
}

#endif
