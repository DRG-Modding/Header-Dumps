#ifndef UE4SS_SDK_BP_Refinery_Depositor_HPP
#define UE4SS_SDK_BP_Refinery_Depositor_HPP

class ABP_Refinery_Depositor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* AudioDepositing1;
    class UCapsuleComponent* OpenTrigger;
    class UResourceBank* ResourceBank;
    class UCapsuleComponent* ResourceBankCollider;
    class USkeletalMeshComponent* SkeletalMesh;
    class USceneComponent* DefaultSceneRoot;
    TArray<class APlayerCharacter*> NearbyPlayers;
    bool DepositorOpen;
    FBP_Refinery_Depositor_COnDepositorOpenChanged OnDepositorOpenChanged;
    void OnDepositorOpenChanged(bool InOpen);

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__OpenTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__OpenTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void UpdateOpenAnim();
    void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature(class APlayerCharacter* User);
    void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature(class APlayerCharacter* User);
    void ExecuteUbergraph_BP_Refinery_Depositor(int32 EntryPoint);
    void OnDepositorOpenChanged__DelegateSignature(bool InOpen);
};

#endif
