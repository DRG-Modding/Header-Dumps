#ifndef UE4SS_SDK_BP_AttackablePiplinesegmentActor_HPP
#define UE4SS_SDK_BP_AttackablePiplinesegmentActor_HPP

class ABP_AttackablePiplinesegmentActor_C : public ATargetDummyPawn
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCustomObjectAttackerPositioning* CustomObjectAttackerPositioning;
    class UObjectAttackerPositioning* ObjectAttackerPositioning;
    class USimpleHealthComponent* SimpleHealth;
    class USceneComponent* DefaultSceneRoot;

    FVector GetTargetCenterMass();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_AttackablePiplinesegmentActor(int32 EntryPoint);
};

#endif
