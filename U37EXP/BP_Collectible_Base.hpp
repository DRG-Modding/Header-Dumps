#ifndef UE4SS_SDK_BP_Collectible_Base_HPP
#define UE4SS_SDK_BP_Collectible_Base_HPP

class ABP_Collectible_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UInstantUsable* InstantUsable;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USphereComponent* UseTrigger;
    class USceneComponent* DefaultSceneRoot;
    class USoundBase* PickupSound;
    class UParticleSystem* PickupParticles;
    class UResourceData* Resource;
    bool IsActive;
    bool DestroyAfterPickedUp;
    float ResourcesToAdd;

    void OnRep_IsActive();
    void PickedUp();
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_Collectible_Base(int32 EntryPoint);
};

#endif
