#ifndef UE4SS_SDK_BP_FireCracker_HPP
#define UE4SS_SDK_BP_FireCracker_HPP

class ABP_FireCracker_C : public AThrowableActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFSDAudioComponent* FSDAudio1;
    class UFSDAudioComponent* FSDAudio;
    class USplineComponent* Spline;
    class UStaticMeshComponent* StaticMesh;
    class UNiagaraComponent* Niagara;
    class UDamageComponent* Damage;
    float ImpulseStrength;
    FName ImpulseSocketName;
    float InitialAngularVelocityScale;
    float FuseTimer;
    float FuseTime;
    FVector LocalExplosionDirection;
    bool CanPlayImpactSound;

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void Impact(class AActor* Other, FVector HitPosition);
    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveIgnoreCharacter(class APlayerCharacter* Character);
    void ApplyForceSK(class USkeletalMeshComponent* Component, FVector Position);
    void ApplyForceSM(class UStaticMeshComponent* Component, FVector Position);
    void TimerExpired();
    void ApplyForces();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_FireCracker_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_FireCracker_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_FireCracker(int32 EntryPoint);
};

#endif
