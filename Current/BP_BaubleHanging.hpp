#ifndef UE4SS_SDK_BP_BaubleHanging_HPP
#define UE4SS_SDK_BP_BaubleHanging_HPP

class ABP_BaubleHanging_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class UInstantUsable* InstantUsable;
    class URotatingMovementComponent* RotatingMovement;
    class USkeletalMeshComponent* SkeletalMesh;
    float Speed;
    class USoundCue* ImpactSound;
    float ImpactVolume;
    float ImpactVolumeScale;
    float SlapStrength;

    void ReceiveBeginPlay();
    void BndEvt__BP_BaubleHanging_SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__BP_SummerEvent_PalmTree_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void AddImpulseFromLocation(FVector_NetQuantize playerPos);
    void ExecuteUbergraph_BP_BaubleHanging(int32 EntryPoint);
};

#endif
