#ifndef UE4SS_SDK_PRJ_GrenadeAxe_HPP
#define UE4SS_SDK_PRJ_GrenadeAxe_HPP

class APRJ_GrenadeAxe_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* SmallShitDamage;
    class USphereComponent* KillSmallShits Sphere;
    class UDamageComponent* BounceDamage;
    class UBoxComponent* Box;
    class UDamageComponent* FullDamage;
    class URotatingMovementComponent* RotatingMovement;
    class UParticleSystemComponent* Trail;
    class UStaticMeshComponent* mesh_front;
    FVector MyStartLocation;
    FVector MyImpactVelocity;
    FVector NewVar_0;
    TArray<class AActor*> AlreadyHitList;
    FVector HitNormal;
    FVector HitLocation;
    class AThrownGrenadeItem* AxeGrenadeItem;
    class AActor* hitActor;
    class UPrimitiveComponent* HitComponent;
    bool CanRetrieve;
    FName HitBone;
    bool CanAttach;
    bool PassThroughTarget;
    bool HitTerrain;
    bool ForceDischarge;
    class UFSDPhysicalMaterial* HitPhysMat;
    TSet<AActor*> SmallShitsHitArray;

    void UserConstructionScript();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void Discharge(class AActor* hitActor, class UPrimitiveComponent* HitComponent, const FVector& HitLocation, class UFSDPhysicalMaterial* HitPhysMat);
    void BluntDamage();
    void BndEvt__KillSmallShits Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnInitialized();
    void ExecuteUbergraph_PRJ_GrenadeAxe(int32 EntryPoint);
};

#endif
