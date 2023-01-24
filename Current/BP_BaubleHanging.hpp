#ifndef UE4SS_SDK_BP_BaubleHanging_HPP
#define UE4SS_SDK_BP_BaubleHanging_HPP

class ABP_BaubleHanging_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URotatingMovementComponent* RotatingMovement;
    class USkeletalMeshComponent* SkeletalMesh;
    float Speed;
    class USoundCue* ImpactSound;
    float ImpactVolume;
    float ImpactVolumeScale;

    void ReceiveBeginPlay();
    void BndEvt__BP_BaubleHanging_SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_BaubleHanging(int32 EntryPoint);
};

#endif
