#ifndef UE4SS_SDK_BP_PlagueHeart_HPP
#define UE4SS_SDK_BP_PlagueHeart_HPP

class ABP_PlagueHeart_C : public ABP_Depositable_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Niagara Spores;
    class UAudioComponent* Idle_Cue;
    class USkeletalMeshComponent* ThirdPersonSkeletalMesh;
    class UPointLightComponent* PointLightLarge;
    class UFirstPersonSkeletalMeshComponent* FirstPersonSkeletalMesh;
    bool PickedUp;
    bool PushedEffect;
    FBP_PlagueHeart_COnHeartDeposited OnHeartDeposited;
    void OnHeartDeposited();

    void Receive_OnDeposited(class APlayerCharacter* fromPlayer, class AActor* toActor);
    void BndEvt__BP_PlagueHeart_Carriable_K2Node_ComponentBoundEvent_3_CarriableEvent__DelegateSignature();
    void BndEvt__BP_PlagueHeart_Carriable_K2Node_ComponentBoundEvent_4_CarriableEvent__DelegateSignature();
    void ReceiveBeginPlay();
    void All_CountHeartDeposit(bool DepositedInMolly);
    void ExecuteUbergraph_BP_PlagueHeart(int32 EntryPoint);
    void OnHeartDeposited__DelegateSignature();
};

#endif
