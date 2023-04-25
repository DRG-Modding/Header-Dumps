#ifndef UE4SS_SDK_BP_GreatEggHunt_ThrowableEgg_HPP
#define UE4SS_SDK_BP_GreatEggHunt_ThrowableEgg_HPP

class ABP_GreatEggHunt_ThrowableEgg_C : public AThrowableActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* MeshPivot;
    class USphereComponent* Sphere;
    class UDamageComponent* Damage;
    float ImpulseStrength;
    FName ImpulseSocketName;
    float RotationSpeed;
    class UFXSystemAsset* ExplosionParticles;
    class UMaterialInstance* UsedMaterial;

    void OnRep_UsedMaterial();
    void ReceiveBeginPlay();
    void Impact(class AActor* Other, FVector HitPosition);
    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveIgnoreCharacter(class APlayerCharacter* Character);
    void ApplyForceSK(class USkeletalMeshComponent* Component, FVector Position);
    void ApplyForceSM(class UStaticMeshComponent* Component, FVector Position);
    void ReceiveTick(float DeltaSeconds);
    void KillActorWithEffects();
    void SetMaterial(class UMaterialInstance* Material);
    void ExecuteUbergraph_BP_GreatEggHunt_ThrowableEgg(int32 EntryPoint);
};

#endif
