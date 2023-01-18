#ifndef UE4SS_SDK_BP_WaterBalloon_HPP
#define UE4SS_SDK_BP_WaterBalloon_HPP

class ABP_WaterBalloon_C : public AThrowableActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* BalloonMesh;
    class UDamageComponent* Damage;
    class USphereComponent* Sphere;
    float ImpulseStrength;
    FName ImpulseSocketName;
    class USoundCue* Death Sound;

    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveIgnoreCharacter(class APlayerCharacter* Character);
    void Impact(class AActor* Other, FVector HitPosition);
    void ApplyForceSK(class USkeletalMeshComponent* Component, FVector Position);
    void ApplyForceSM(class UStaticMeshComponent* Component, FVector Position);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_WaterBalloon(int32 EntryPoint);
};

#endif
