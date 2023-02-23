#ifndef UE4SS_SDK_BP_Anniversary_BalloonCluster_HPP
#define UE4SS_SDK_BP_Anniversary_BalloonCluster_HPP

class ABP_Anniversary_BalloonCluster_C : public ASkeletalMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* SoundLocation;
    bool PlaySound;

    void OnRep_PlaySound();
    void BndEvt__BP_Anniversary_BalloonCluster_SkeletalMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_Anniversary_BalloonCluster(int32 EntryPoint);
};

#endif
