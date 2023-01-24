#ifndef UE4SS_SDK_ITM_BarGlass_Item_HPP
#define UE4SS_SDK_ITM_BarGlass_Item_HPP

class AITM_BarGlass_Item_C : public ADrinkableItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* TPParticleSystem;
    class UParticleSystemComponent* ParticleSystem;
    class UAudioComponent* SparkleDrink;
    bool IsFull;
    TSubclassOf<class ABar_Glass_Physics_C> PhysicsActor;
    class UAnimMontage* TPMontage;
    class UAnimMontage* FPMontage;
    bool Visible;
    class ABar_Glass_Physics_C* ThrownGlass;
    float DelayBeforeFoamRemoval;
    bool InDelayBeforeDrink;

    void OnEmpty();
    void OnRep_ThrownGlass();
    void OnRep_Visible();
    void OnRep_IsFull();
    bool CheckCanSalute();
    void IsDrinking(bool& IsDrinking);
    float PlayThrow();
    void PlayDrinkFoam();
    float PlayDrinkPlayer();
    void UserConstructionScript();
    void RecieveStartUsing();
    void Server_Use();
    void All_Drink();
    void All_Throw();
    void SetEmpty();
    void BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature(class UActorComponent* Component, bool bReset);
    void ReceiveBeginPlay();
    void SkinThrownGlass();
    void ExecuteUbergraph_ITM_BarGlass_Item(int32 EntryPoint);
};

#endif
