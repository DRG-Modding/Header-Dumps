#ifndef UE4SS_SDK_BP_TruckerBalls_HPP
#define UE4SS_SDK_BP_TruckerBalls_HPP

class ABP_TruckerBalls_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* SK_Dice;
    class UInstantUsable* InstantUsable;
    class UCapsuleComponent* Capsule;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void CustomEvent_0();
    void ExecuteUbergraph_BP_TruckerBalls(int32 EntryPoint);
};

#endif
