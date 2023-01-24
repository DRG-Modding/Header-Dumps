#ifndef UE4SS_SDK_BP_RewardDispenser_HPP
#define UE4SS_SDK_BP_RewardDispenser_HPP

class ABP_RewardDispenser_C : public AEventRewardDispenser
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_RewardUsableComponent_C* BP_RewardUsableComponent;
    class UChildActorComponent* RewardSelectorActor;
    class UBoxComponent* PlayerTrigger;
    class USphereComponent* UsableCollision;
    class USkeletalMeshComponent* SkeletalMesh;
    class USceneComponent* DefaultSceneRoot;
    bool RewardSelectorVisible;
    class APlayerCharacter* NearbyPlayer;
    FBP_RewardDispenser_COnDispenserFinished OnDispenserFinished;
    void OnDispenserFinished();

    bool IsStateValid();
    void GetRewardSelector(class ABP_CoreInfuser_Rewards_Selector_C*& Selector);
    void IsPlayerLocallyControlled(bool& LocallyControlled);
    void ToggleRewardSelector(bool InVisible);
    void OnOwnerAssigned();
    void OnPoweredUp();
    void BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__BP_RewardUsableComponent_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void Initialize();
    void OnOpenDispenser();
    void On Selector Finished(class USchematic* SchematicReward);
    void OnRewardSelected();
    void Turn On Buttons();
    void ExecuteUbergraph_BP_RewardDispenser(int32 EntryPoint);
    void OnDispenserFinished__DelegateSignature();
};

#endif
