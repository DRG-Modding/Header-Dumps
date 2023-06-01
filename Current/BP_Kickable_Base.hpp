#ifndef UE4SS_SDK_BP_Kickable_Base_HPP
#define UE4SS_SDK_BP_Kickable_Base_HPP

class ABP_Kickable_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UGravityChangedComponent* GravityChanged;
    class UInstantUsable* InstantUsable;
    class UCapsuleComponent* Capsule;
    class UStaticMeshComponent* Kickable Mesh;
    bool CanTriggerSound;
    FVector KickSoundLocation;
    class APlayerCharacter* KickedBy;
    class USoundBase* BounceSound;
    float ImpactSensitivity;
    float KickStrength;

    void OnRep_KickSoundLocation();
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ReceiveBeginPlay();
    void destroy();
    void Play_Kick(class APlayerCharacter* Kicker);
    void BndEvt__Kickable Mesh_K2Node_ComponentBoundEvent_8_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void Set Is Interactable(bool Can interact);
    void ExecuteUbergraph_BP_Kickable_Base(int32 EntryPoint);
};

#endif
