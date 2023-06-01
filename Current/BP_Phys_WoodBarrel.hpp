#ifndef UE4SS_SDK_BP_Phys_WoodBarrel_HPP
#define UE4SS_SDK_BP_Phys_WoodBarrel_HPP

class ABP_Phys_WoodBarrel_C : public AFSDPhysicsActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCapsuleComponent* BarrelRiderCollission;
    class UGravityChangedComponent* GravityChanged;
    class UInstantUsable* InstantUsable;
    class UCapsuleComponent* UseCapsule;
    class UStaticMeshComponent* StaticMeshComponent0;
    bool CanTriggerSound;
    FVector KickSoundLocation;
    class APlayerCharacter* KickedBy;
    bool KickedIntoHoop;
    class UFSDAchievement* BarrelRiderAchievement;
    float RideBeginTime;
    class APlayerCharacter* CurrentRider;
    TArray<class UStaticMesh*> BarrelMeshes;

    void OnRep_KickSoundLocation();
    void BndEvt__StaticMeshComponent0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ReceiveBeginPlay();
    void destroy();
    void Play_Kick(class APlayerCharacter* Kicker);
    void BndEvt__BarrelRiderCollission_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BarrelRiderCollission_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Spawn Bronzehead Effects();
    void ExecuteUbergraph_BP_Phys_WoodBarrel(int32 EntryPoint);
};

#endif
