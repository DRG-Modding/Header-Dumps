#ifndef UE4SS_SDK_Grenade_BearTrap_HPP
#define UE4SS_SDK_Grenade_BearTrap_HPP

class AGrenade_BearTrap_C : public AITM_Grenade_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* UseSphere;
    class USingleUsableComponent* SingleUsable;
    class UStaticMeshComponent* StaticMesh2;
    class USceneComponent* Scene1;
    class UStaticMeshComponent* StaticMesh1;
    class USceneComponent* Scene;
    class UDamageComponent* Damage;
    class UBoxComponent* SnapCollision;
    bool Stuck;
    bool Snapped;
    float SnappedTimer;
    bool EverSnapped;

    void SetSnapProgress(float Progress);
    void HandleSnapAnimation(float DeltaTime);
    void SetFixedOrientation();
    void OnRep_Snapped();
    void OnRep_Stick();
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void BndEvt__Grenade_BearTrap_SnapCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Grenade_BearTrap_SingleUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__Grenade_BearTrap_SingleUsable_K2Node_ComponentBoundEvent_3_ProgressSignature__DelegateSignature(float Progress);
    void ExecuteUbergraph_Grenade_BearTrap(int32 EntryPoint);
};

#endif
