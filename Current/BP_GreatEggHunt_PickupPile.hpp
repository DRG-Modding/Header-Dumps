#ifndef UE4SS_SDK_BP_GreatEggHunt_PickupPile_HPP
#define UE4SS_SDK_BP_GreatEggHunt_PickupPile_HPP

class ABP_GreatEggHunt_PickupPile_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class UInstantUsable* InstantUsable;
    class UStaticMeshComponent* StaticMesh;
    TArray<class UUseAnimationSetting*> Settings;
    int32 AnimationSetting;

    void OnRep_AnimationSettings();
    void BndEvt__BP_GreatEggHunt_PickupPile_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ReceiveBeginPlay();
    void SetRandomAnimation();
    void ExecuteUbergraph_BP_GreatEggHunt_PickupPile(int32 EntryPoint);
};

#endif
