#ifndef UE4SS_SDK_BP_Snowball_HPP
#define UE4SS_SDK_BP_Snowball_HPP

class ABP_Snowball_C : public AThrowableActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* Damage;
    class USphereComponent* Sphere;
    class UStaticMeshComponent* StaticMesh;
    float ImpulseStrength;
    FName ImpulseSocketName;

    void ReceiveBeginPlay();
    void Impact(class AActor* Other, FVector HitPosition);
    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveIgnoreCharacter(class APlayerCharacter* Character);
    void ApplyForceSK(class USkeletalMeshComponent* Component, FVector Position);
    void ApplyForceSM(class UStaticMeshComponent* Component, FVector Position);
    void ExecuteUbergraph_BP_Snowball(int32 EntryPoint);
};

#endif
